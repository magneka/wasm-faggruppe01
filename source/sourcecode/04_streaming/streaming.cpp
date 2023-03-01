#include <emscripten.h>
#include <emscripten/bind.h>

using namespace emscripten;

extern "C" {
 int Sum(int a, int b);
 int sumOfNInts(int n);
}

/*
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
*/

int add(int a, int b)
{
    return a + b;
}


int sub(int a, int b)
{
    return a - b;
}


int mul(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}


int sumOfNInts(int n)
{
    // return n * (n + 1) / 2;
    int result = divide(mul(n, add(n, 1)), 2);
    return result;
}

int Sum(int a, int b) {
    return a + b;
}

