#include <iostream>
class Car {
    public:
        void drive(); // outside
        void engineStart() { // inside
         std::cout << "Turning on the engine!" << std::endl;
         drive();
         setSpeed(200);
        }
        void engineStop();
        void setSpeed(int speed) { // you can also add parameters
            this->speed = speed;
        }
        int getSpeed() {
            return this->speed;
        }
    private:
        int speed = 0;
};

void Car::drive() {
    std::cout << "Vroom vroom!" << std::endl;
}

void Car::engineStop() {
    std::cout << "Car stooped" << std::endl;
    this->speed = 0;
}

int main(){
    Car car;

    car.engineStart();
    std::cout << "Car speed : " << car.getSpeed() << std::endl;
    car.engineStop();
    std::cout << "Car speed : " << car.getSpeed() << std::endl;
    return 0;
}