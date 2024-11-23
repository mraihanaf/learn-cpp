# C++ OOP

## Introduction

Object Oriented Programming (OOP) is a popular programming paradigm that focuses on creating and modeling real-world entities as objects. These objects have attributes (data members) and behaviors (member functions) and are organized into classes. This folder contains various C++ example code.

## 

## Classes and Objects

Classes and Objects are 2 main aspects of object oriented programming.
look at this example.
```
Class
    Fruit
Objects
 - Apple (Apple is an object of the Fruit class)
 - Banana (Banana is an object of the Fruit class)
 - Mango (Mango is an object of the Fruit class)
```

So, a class is template for objects, and an object is an instance of class.

When an individual object created, they inherit all the variables and functions from the class.

## Access Specifiers

 Access specifiers define how the members (attributes and methods) of a class can be accessed.

 In C++, there are three access specifiers:

- `public` - members are accessible from outside the class
- `private` - members cannot be accessed (or viewed) from outside the class
- `protected` - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

## Encapsulation

The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.

### Example
```cpp 
employee.setSalary(1000000);
std::cout << employee.getSalary() << std::endl;
```

## Inheritence

In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

- **derived class** (child) - the class that inherits from another class
- **base class** (parent) - the class being inherited from
To inherit from a class, use the : symbol.

## Polymorphism
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.