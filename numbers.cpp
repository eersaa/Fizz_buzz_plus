#include "numbers.hpp"

void Numbers::show_numbers(Render_if& render, const int count) 
{
    for (int i=0; i<count; i++)
        display.refresh(render.render(i+1));
}