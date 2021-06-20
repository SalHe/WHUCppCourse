#include <stdio.h>

class Mammal
{
public:
    virtual void speak()
    {
        printf("Mammal speaks...\n");
    }
};

class Dog : public Mammal
{

public:
    virtual void speak()
    {
        printf("Dog speaks...\n");
    }
};

int main(int argc, char const *argv[])
{
    Dog dog;
    dog.speak();    
    return 0;
}
