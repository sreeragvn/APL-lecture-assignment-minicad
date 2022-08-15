#ifndef __SCALE_COMMAND_H__
#define __SCALE_COMMAND_H__

#include "command.h"

#include "shape.h"


namespace tubs::ui
{


class ScaleShapeCommand : public Command
{
public:
    ScaleShapeCommand(model::Shape* shape, float factor);

    virtual void execute();

    virtual void undo();

    virtual void redo();

private:
    model::Shape* shape;
    float factor = 0;
};


}

#endif