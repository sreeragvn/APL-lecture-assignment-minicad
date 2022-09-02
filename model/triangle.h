#ifndef triangle_h
#define triangle_h

#include "shape.h"

namespace tubs::model
{

class triangle : public Shape
{
public:
    triangle(int x, int y, int len, Observer* observer);
    virtual void draw(ui::Canvas* canvas) const;
    void scale(float factor);

private:
    int length = 1;
};

}

#endif
