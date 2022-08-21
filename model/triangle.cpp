#include "triangle.h"

#include "canvas.h"
#include <cmath>
#include <iostream>
#include <stdio.h>
namespace tubs::model
{

triangle::triangle(int x, int y, int len, Observer* observer):
Shape(x,y, observer), length(len)
{}


void triangle::draw(ui::Canvas* canvas) const
{
    const int half_length = int(length/2);

    for (int x=0; x<=length; x+=2 ){
       canvas->drawPixel(center.x - half_length + x, center.y + (half_length/sqrt(3))); 
    }

    for (int y=0;  y<length; y+=2) {
        int x=0;
        while (x<length){
            x += 2;
        canvas->drawPixel(round(center.x-(y/sqrt(3))), round(center.y - length/sqrt(3) + (sqrt(3)*y)/2));
        canvas->drawPixel(round(center.x+(y/sqrt(3))), round(center.y - length/sqrt(3)+ (sqrt(3)*y)/2));
        }
    }
    canvas->printAtPos(center.x, center.y, std::to_string(id));
    canvas->refresh();
}

void triangle::scale(float factor)
{
    length = length * factor;
    observer->update();
}

}
