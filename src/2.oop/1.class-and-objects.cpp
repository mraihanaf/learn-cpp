#include <iostream> 
#include <string>

// create a class

class MyClass {
    public:
        int myNum;
        std::string myString;
    private:
        std::string privateStuff = "nothing to see here";
};

int main(){
    MyClass myObj; // create an object from MyClass
    myObj.myNum = 10;
    myObj.myString = "Hello World";

    std::cout << myObj.myNum << " " << myObj.myString << std::endl;
    // std::cout << myObj.privateStuff; // this will return error

    return 0;
}
