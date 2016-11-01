#include "mainconfig.h"
#include <QFile>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QMessageBox>

MainConfig::MainConfig()
{
}

bool MainConfig::loadFromFile(const char *filename)
{
    QFile file(filename);
    QXmlStreamReader xml;

    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        return false;
    }
    xml.setDevice(&file);

    while(!xml.atEnd()) {
        if (xml.readNextStartElement()) {
            if(xml.name() == "config") {
                version = xml.attributes().value("version").toString();
            }
            else if (xml.name() == "title") {
                title = xml.readElementText();
            }
            else if (xml.name() == "sn") {
                sn_type = xml.attributes().value("type").toString();
                sn_name = xml.attributes().value("name").toString();
            }
            else if (xml.name() == "key") {
                key_type = xml.attributes().value("type").toString();
                key_name = xml.attributes().value("name").toString();
                if(key_type == "file")
                {
                    key_filename = xml.attributes().value("filename").toString();
                }
                else
                {
                    key_filename = "License.txt";
                }
            }
            else if (xml.name() == "command") {
                command = xml.readElementText();
            }
            else {
                xml.skipCurrentElement();
            }
        }
    }

    file.close();

    return true;
}

bool MainConfig::saveToFile(const char *filename)
{
    QFile file(filename);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        return false;
    }

    QXmlStreamWriter xml;

    xml.setDevice(&file);
    xml.setAutoFormatting(true);
    xml.writeStartDocument();
    xml.writeStartElement("config");
    xml.writeAttribute("version", "1.0");
    // title
    xml.writeTextElement("title", title);
    // SN
    xml.writeStartElement("sn");
    xml.writeAttribute("type", sn_type);
    xml.writeAttribute("name", sn_name);
    xml.writeEndElement();
    // Key
    xml.writeStartElement("key");
    xml.writeAttribute("type", key_type);
    xml.writeAttribute("name", key_name);
    if(key_type == "file")
    {
        xml.writeAttribute("filename", key_filename);
    }
    xml.writeEndElement();
    // command
    xml.writeTextElement("command", command);
    // end
    xml.writeEndDocument();
    file.close();

    return true;
}
