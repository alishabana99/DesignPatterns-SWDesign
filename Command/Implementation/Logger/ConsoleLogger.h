#ifndef CONSOLE_LOGGER_H
#define CONSOLE_LOGGER_H

#include <iostream>
#include "ILogger.h"

class ConsoleLogger : public ILogger
{
private:
    
public:
    void Log(std::string msg) override; 

};


#endif // CONSOLE_LOGGER_H