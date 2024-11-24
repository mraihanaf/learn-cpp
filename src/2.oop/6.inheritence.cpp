#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

// Base class (parent)
class Human {
    public: 
        string name;
        int age;
        string gender;
};

// derived class (child)
class Student: public Human {
    protected:
        int learningCount = 0; // protected access specifiers (can accessed only in inherited classes)
    public:
        string grade;
        string school;
        void learn() {
            cout << "Learning..." << endl;
            learningCount++;
        };
};

// multi-level inheritence
// derived class (child)
class VocationalStudent: public Student {
    public:
        string major;
        void learn() { // multiple inheritence
            cout << "Learning " << major << "..." << endl;
            learningCount++;
        };
        int getLearningCount() {
            return this->learningCount;
        }
};

int main(){
    Student udin;
    udin.name = "Udin Samsudin";
    udin.age = 16;
    udin.gender = "Man";
    udin.grade = "X-A";
    udin.school = "SMAN 1 Jakarta";
    cout << udin.name << " " << udin.age << " " << udin.gender << " ";
    cout << udin.grade << " " << udin.school << endl;
    udin.learn();
    // cout << udin.learningCount << endl; // this will error.


    VocationalStudent asep;
    asep.name = "Asep Icikiwir";
    asep.age = 16;
    asep.gender = "Man";
    asep.grade = "X-RPL";
    asep.school = "SMKN 1 Jakarta";
    asep.major = "Software Engineering";
    cout << asep.name << " " << asep.age << " " << asep.gender << " ";
    cout << asep.grade << " " << asep.school << " " << asep.major << endl;

    asep.learn();
    cout << asep.name << " Belajar " << asep.getLearningCount() << " kali." << endl;
    return 0;
}