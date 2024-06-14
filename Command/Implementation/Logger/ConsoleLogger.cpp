#include "ConsoleLogger.h"

void ConsoleLogger::Log(std::string msg)
{
    std::cout << "[C-LOG] " << msg << std::endl;
}
