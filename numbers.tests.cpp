#include <gmock/gmock.h>

#include "numbers.hpp"
#include "display.hpp"
#include "fizz_buzz_plus.hpp"

using namespace ::testing;

class Display : public Display_if {
public:
    Display() {this->count = 0;}
    int display_count() {return this->count;}
    void refresh(const std::string text) override
    {
        count++;
        texts.push_back(text);
    }
    
    std::string displayed_texts(const int i) {return texts.at(i);}
    
private:
    int count;
    std::vector<std::string> texts;
};

class Cout_display : public Display_if {
public:
    void refresh(const std::string text) override
    {
        std::cout << text + "\n";
    }
};

class Render : public Render_if{
public:
    std::string render(const int number) {return "a" + std::to_string(number);}
};

namespace {

class Numbers_tests: public Test {
protected:
    Display display;
    Numbers numbers{display};
    Render render;
};
    
TEST_F(Numbers_tests, Should_display_two_first_numbers_on_display)
{
    numbers.show_numbers(render, 2);
    ASSERT_THAT(display.display_count(), Eq(2));
}
    
TEST_F(Numbers_tests, Should_display_rendered_text)
{
    numbers.show_numbers(render, 1);
    ASSERT_THAT(display.displayed_texts(0), StrEq("a1"));
}

    
TEST(Fizz_buzz_test, Should_print_100_first_numbers)
{
    Cout_display display;
    Numbers numbers{display};
    Fizz_buzz_plus render;
    numbers.show_numbers(render, 100);
}

}