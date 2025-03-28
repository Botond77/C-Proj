#include "header.h"
#include <stdint.h>

int multiplier = 2;
static int multiplier2 = 3;
int foo_func(int lhs ,int rhs)
{
    return multiplier2 * (multiplier * (lhs + rhs));
}