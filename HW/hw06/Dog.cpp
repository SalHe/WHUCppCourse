#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
    int age;
    float weight;
    string name;

public:
    Dog();
    ~Dog();

    int getAge();
    void setAge(int age);

    float getWeight();
    void setWeight(float weight);

    string getName();
    void setName(string name);

    void selfIntro();
};

Dog::Dog()
{
}

Dog::~Dog()
{
}

int Dog::getAge()
{
    return age;
}

void Dog::setAge(int age)
{
    this->age = age;
}

float Dog::getWeight()
{
    return weight;
}

void Dog::setWeight(float weight)
{
    this->weight = weight;
}

string Dog::getName()
{
    return name;
}

void Dog::setName(string name)
{
    this->name = name;
}

void Dog::selfIntro()
{
    cout << "Hello, I'm a " << age << " year-old dog weighting " << weight << " Pounds." << endl;
}

int main(int argc, char const *argv[])
{
    Dog dog;
    dog.setAge(10);
    dog.setWeight(20.5);
    dog.setName("John");
    dog.selfIntro();
    return 0;
}
