#ifndef FIZZ_BUZZ_PLUS_INCLUDED
#define FIZZ_BUZZ_PLUS_INCLUDED

#include <string>

#include "display.hpp"

class Fizz_buzz_plus : public Render_if{
    
public:
    std::string render(const int number);
    
private:    
    bool is_multiple_of(const int multiplier, const int number);
    bool contains_digit(const int digit, int number);
    bool contains_digit(const std::string digit, const std::string number);
    bool matches_any_rule(const int digit, const int number);
    
    std::pair<int, std::string> fizz{3, "Fizz"};
    std::pair<int, std::string> buzz{5, "Buzz"};    
};

#endif