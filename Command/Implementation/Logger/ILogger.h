#ifndef ILOGGER_H
#define ILOGGER_H

#include <string>

class ILogger
{
public:
    virtual void Log(std::string msg) = 0;
};

#endif //ILOGGER_H