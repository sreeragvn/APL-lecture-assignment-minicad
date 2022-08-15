#include "scale_shape_command.h"

#include "logger.h"

namespace tubs::ui
{

ScaleShapeCommand::ScaleShapeCommand(model::Shape* shape, float factor)
    : shape(shape), factor(factor) {}

void ScaleShapeCommand::execute() {
    Logger::getInstance().print("ScaleShapeCommand::exeucte()");

    shape->scale(factor);
}

void ScaleShapeCommand::undo() {
    shape->scale(1/factor);
}

void ScaleShapeCommand::redo() {
    shape->scale(factor);
}


}
