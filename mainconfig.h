#ifndef MAINCONFIG_H
#define MAINCONFIG_H

#include <QString>

class MainConfig
{
public:
    MainConfig();

    bool loadFromFile(const char *filename);
    bool saveToFile(const char *filename);

    QString version;
    QString title;
    QString command;
    QString sn_type;
    QString sn_name;
    QString key_type;
    QString key_name;
    QString key_filename;
};

#endif // MAINCONFIG_H
