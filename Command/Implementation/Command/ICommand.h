#ifndef ICOMMAND_H
#define ICOMMAND_H

#include <string>
#include "../Logger/ILogger.h"
class ICommand
{

public:
    virtual void Execute() = 0;
    virtual void Undo() = 0;

};

#endif //ICOMMAND_H