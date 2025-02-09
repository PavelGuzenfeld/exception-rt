#include "exception-rt/exception.hpp"
#include <fmt/core.h>
#include <string>

[[gnu::noinline]] int start() { throw std::string("Hello world"); }
int main()
{
    volatile int return_code = 0;
    try
    {
        return_code = start();
    }
    catch (std::string const &exception)
    {
        fmt::print("The exception is {}.\n", exception);
        return_code = -1;
    }
    return return_code;
}
