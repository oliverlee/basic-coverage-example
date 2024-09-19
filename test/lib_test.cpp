#include "lib.hpp"
#include <cstdlib>

auto main() -> int
{
    return test{2} == test{2}
      ? EXIT_SUCCESS
      : EXIT_FAILURE;
}
