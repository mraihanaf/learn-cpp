#include <iostream>
class MyClass {
    public: // members are accessible from outside the class
        int x = 10;
    private: // members cannot be accessed (or viewed) from outside the class
        int y = 10;
    protected: // members cannot be accessed from outside the class, however, they can be accessed in inherited classes. 
        int z = 2;
};

int main() {  
    MyClass myObj; 
    std::cout << myObj.x << std::endl;
    // std::cout << myObj.y << std::endl; // error
    // std::cout << myObj.z << std::endl; // error
    return 0;
}
