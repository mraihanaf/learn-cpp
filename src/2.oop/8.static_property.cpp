#include <iostream>

using std::cout;
using std::endl;

class Utils {
    public:
        static const int someNumber = 10;
        static void sayHello(){
            cout << "Hello!" << endl;
        }
};

int main () {
    Utils::sayHello();
    cout << Utils::someNumber << endl;
}