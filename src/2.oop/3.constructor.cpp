#include <iostream>

class Student {
    public:
        const char* name;
        const char* grade;
        int age;
        Student(const char* name, const char* grade, int age){
            this->name = name;
            this->grade = grade;
            this->age = age;
        };
};

// constructor also can be added outside the class

class Human {
    public:
        const char* name;
        int age;
        Human(const char* name, int age);
};

Human::Human(const char* name, int age){
    this->name = name;
    this->age = age;
};


int main() {
    Student budi("Budi Wijaya", "X-RPL", 16);
    Human udin("Udin Samsudin", 19);
    std::cout << budi.name << "\n" << budi.grade << "\n" << budi.age << std::endl;
    std::cout << udin.name << "\n" << udin.age << "\n" << std::endl;
    return 0;
}
