#include "command_stack.h"

#include <cstdint>
#include <string>
//logger dependency(logger-global)only for debugging(is removed in production code)
#include "logger.h"

namespace tubs::ui
{

void CommandStack::execute(Command* command) {
    command->execute();

    undoStack.push(command);
    while (!redoStack.empty())
        redoStack.pop();
 
   

    // TODO: manipulate undo / redo stack here

print("CommandStack::exeucte()");
}

void CommandStack::undo() {
    if (undoStack.empty())
        return;
    
    undoStack.top()->undo();
    redoStack.push(undoStack.top());
    undoStack.pop();
  

    print("CommandStack::undo()");
}

void CommandStack::redo() {
    if (redoStack.empty())
        return;
    
    redoStack.top()->redo();
    undoStack.push(redoStack.top());
    redoStack.pop();  
  

    print("CommandStack::redo()");
}

void CommandStack::print(std::string message) {
    Logger::getInstance().print(message);
    Logger::getInstance().print("Undo Stack size: " + std::to_string(undoStack.size()));
    Logger::getInstance().print("Redo Stack size: " + std::to_string(redoStack.size()));
}

}
