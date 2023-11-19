#include <assert.h>
#include <stdio.h>

// NDEBUG <=> Release Mode
// !Release == Debug
#ifndef NDEBUG
#define DEBUG
#endif

#define USE_ASSERTS

int function(int val)
{
    return val * 2;
}

int main()
{
#if defined(DEBUG) && defined(USE_ASSERTS)
    assert(function(2) == 5);
#endif

    return 0;
}
