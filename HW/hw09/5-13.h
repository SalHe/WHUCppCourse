#ifndef _5_13_h_
#define _5_13_h_

class X;

class Y
{
public:
    void g(X *x);
};

class X
{
    int i;

    friend void Y::g(X *x);
    friend void h(X *x);
    friend class Z;
};

class Z
{
public:
    void f(X *x)
    {
        x->i += 5;
    }
};

void Y::g(X *x)
{
    x->i++;
}

void h(X *x)
{
    x->i += 10;
}

#endif