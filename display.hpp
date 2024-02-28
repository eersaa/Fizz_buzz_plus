#ifndef DISPLAY_INCLUDED
#define DISPLAY_INCLUDED

#include <string>

class Display_if {
public:
    virtual void refresh(const std::string text) = 0;
};

class Render_if {
public:
    virtual std::string render(const int number) = 0;
};

#endif