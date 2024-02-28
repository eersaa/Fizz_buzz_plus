#include "fizz_buzz_plus.hpp"

std::string Fizz_buzz_plus::render(const int number) 
{    
    if (    matches_any_rule(fizz.first, number)
        and matches_any_rule(buzz.first, number))
        return fizz.second + buzz.second;
    else if (matches_any_rule(fizz.first, number))
        return fizz.second;
    else if (matches_any_rule(buzz.first, number))
        return buzz.second;
    else
        return std::to_string(number);
}

bool Fizz_buzz_plus::is_multiple_of(const int multiplier, const int number)
{
    return number % multiplier == 0;
}

bool Fizz_buzz_plus::contains_digit(const int digit, int number)
{
    while (number > 0) {
        if (number % 10 == digit)
            return true;
        
        number /= 10;
    }
        
    return false;
}

bool Fizz_buzz_plus::contains_digit(const std::string digit, const std::string number)
{
    return number.find(digit) != std::string::npos;
}

bool Fizz_buzz_plus::matches_any_rule(const int digit, const int number)
{
    return      is_multiple_of(digit, number) 
            or  contains_digit(digit, number);
}