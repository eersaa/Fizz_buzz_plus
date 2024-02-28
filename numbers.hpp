#ifndef NUMBERS_INCLUDED
#define NUMBERS_INCLUDED

#include "display.hpp"

class Numbers {
public:
    Numbers(Display_if& display) : display{display} {}
    void show_numbers(Render_if& render, const int count);
    
private:
    Display_if& display;
};

#endif