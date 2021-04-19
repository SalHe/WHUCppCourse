#include "5-13.h"

int main(int argc, char const *argv[])
{
    X x;
    Y y;
    Z z;
    y.g(&x);
    z.f(&x);
    h(&x);
    return 0;
}