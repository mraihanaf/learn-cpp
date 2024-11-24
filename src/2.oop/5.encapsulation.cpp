#include <iostream>
class Employee {
    private:
        int salary;
    public:
        void setSalary(int salary){
            this->salary = salary;
        };
        int getSalary(){
            return this->salary;
        };
};

int main() {
    Employee employee;
    employee.setSalary(10000000);
    std::cout << employee.getSalary() << std::endl;
    std.cout<< "Hello World!" << std.endl;
    return 0;
}