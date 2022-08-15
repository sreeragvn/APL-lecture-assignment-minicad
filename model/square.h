#ifndef square_h
#define square_h

#include "shape.h"

namespace tubs::model
{

class Square : public Shape
{
public:
    Square(int x, int y, int len, Observer* observer);
    virtual void draw(ui::Canvas* canvas) const;
    void scale(float factor);

private:
    int length = 1;
};

}

#endif
