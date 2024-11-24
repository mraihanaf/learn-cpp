#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

// Base class

class Animal {
    public:
        void speak() {
            cout << "The animal makes a sound." << endl;
        };
};

// Derived class 

class Dog : public Animal {
    public:
        void speak() {
            cout << "Woof Woof!" << endl;
        };
};

class Pig : public Animal {
    public:
        void speak() {
            cout << "Honk Honk!" << endl;
        };
};

int main() {
    Animal myAnimal;
    Dog myDog;
    Pig myPig;

    myAnimal.speak();
    myDog.speak();
    myPig.speak();
    return 0;
}