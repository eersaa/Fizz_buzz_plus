#include <gmock/gmock.h>

#include "fizz_buzz_plus.hpp"

using namespace ::testing;

namespace {

class Fizz_buzz_tests: public Test 
{
protected:
    Fizz_buzz_plus fizz_buzz_plus;
};
    
TEST_F(Fizz_buzz_tests, Should_return_one_as_string_given_one)
{
    ASSERT_THAT(fizz_buzz_plus.render(1), StrEq("1"));
}
    
TEST_F(Fizz_buzz_tests, Should_return_Fizz_given_three)
{
    ASSERT_THAT(fizz_buzz_plus.render(3), StrEq("Fizz"));
}
    
TEST_F(Fizz_buzz_tests, Should_return_Fizz_given_multiple_of_three)
{
    ASSERT_THAT(fizz_buzz_plus.render(9), StrEq("Fizz"));
}
    
TEST_F(Fizz_buzz_tests, Should_return_Buzz_given_multiple_of_five)
{
    ASSERT_THAT(fizz_buzz_plus.render(10), StrEq("Buzz"));
}
    
TEST_F(Fizz_buzz_tests, Should_return_Fizz_given_number_containing_three)
{
    ASSERT_THAT(fizz_buzz_plus.render(13), StrEq("Fizz"));
}

TEST_F(Fizz_buzz_tests, Should_return_Buzz_given_number_containing_five)
{
    ASSERT_THAT(fizz_buzz_plus.render(52), StrEq("Buzz"));
}
    
TEST_F(Fizz_buzz_tests, Should_return_FizzBuzz_given_multiple_of_three_and_five)
{
    ASSERT_THAT(fizz_buzz_plus.render(15), StrEq("FizzBuzz"));
}
    
TEST_F(Fizz_buzz_tests, Should_return_FizzBuzz_given_number_containing_three_and_five)
{
    ASSERT_THAT(fizz_buzz_plus.render(53), StrEq("FizzBuzz"));
}

}
