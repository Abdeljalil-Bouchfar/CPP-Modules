# CPP-NOTES
In this repository, I'll be sharing my notes on the CPP-Modules, including explanations of all the concepts I learned while doing this project, as well as some helpful resources.

* [CPP Cheat Sheet (pdf 📝)](https://github.com/Abdeljalil-Bouchfar/CPP-Modules/blob/master/CPP_Cheat_Sheet.pdf)
* [OOP Definition](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#oop-definition)
* [The structure of OOP](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#the-structure-of-oop)
* [The Four Pillars of OOP](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#the-four-pillars-of-oop)
* [Constructors and Destructor](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#constructors-and-destructor)
* [Namespaces](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#namespaces)
* [Member functions](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#member-functions)
* [The this pointer](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#the-this-pointer)
* [References](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#references)
* [Streams](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#streams)
* [Pointers to member functions](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#pointers-to-member-functions)
* [Operator overloading](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#operator-overloading)
* [Fixed-point numbers](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#fixed-point-numbers)
* [Access specifiers](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#access-specifiers)
* [Inheritance](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#inheritance)
* [Virtual Keyword](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#virtual-keyword)
* [Abstract class](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#abstract-class)
* [Deep & Shallow copies](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#deep--shallow-copies)
* [Exceptions](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#exceptions)
* [Casting](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#casting)
* [Templates](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#templates)
* [Iterators](https://github.com/Abdeljalil-Bouchfar/CPP-Modules#iterators)

## OOP Definition:

***Object-Oriented Programming (OOP)*** is the term used to describe a programming approach based on ***objects*** and ***classes***. The object-oriented paradigm allows us to organize software as a collection of objects that consist of both data and behavior. This is in contrast to conventional functional programming practice that only loosely connects data and behavior.

Since the 1980s the word 'object' has appeared in relation to programming languages, with almost all languages developed since 1990 having object-oriented features. Some languages have even had object-oriented features retro-fitted. It is widely accepted that object-oriented programming is the most important and powerful way of creating software.

## The structure of OOP:

The structure, or building blocks, of object-oriented programming, include the following:

- **Classes**
    
    Classes are user-defined data types that act as the blueprint for individual objects, attributes, and methods.
    
    If we think of a real-world object, such as a television it will have several features and properties:
    
    - We do not have to open the case to use it.
    - We have some controls to use it (buttons on the box, or a remote control).
    - We can still understand the concept of a television, even if it is connected to a DVD player.
    - It is complete when we purchase it, with any external requirements well documented.
    - The TV will not crash!
    
    In many ways, this compares very well to the notion of a class.
    
    A class should:
    
    - Provide a well-defined interface - such as the remote control of the television.
    - Represent a clear concept - such as the concept of television.
    - Be complete and well-documented - the television should have a plug and should have a manual that documents all features.
    - The code should be robust - it should not crash, like the television.
    
    With a functional programming language (like C) we would have the component parts of the television scattered everywhere and we would be responsible for making them work correctly - there would be no case surrounding the electronic components.
        
    Classes allow us a way to represent complex structures within a programming language. They have two components:
    
    - States - (or data) are the values that the object has.
    - Methods - (or behavior) are the ways in which the object can interact with its data, the actions.
- **Objects**
    
    An ***object*** is an instance of a class. You could think of a class as the description of a concept, and an object as the realization of this description to create an independent distinguishable entity. For example, in the case of the Television, the class is the set of plans (or blueprints) for a generic television, whereas a television object is the realization of these plans into a real-world physical television. So there would be one set of plans (the class), but there could be thousands of real-world televisions (objects).
    
    Objects can correspond to real-world objects or abstract entities(Client, User, Product,...). When a class is defined initially, the description is the only object that is defined.
    
    Objects should have their own identity and be independent of each other. For example, if the channel is changed on one television it will not change on other televisions.
    
- **Methods**
    
    Methods are functions (or procedures) that are defined inside a class that describe the behaviors of an object. Each method contained in class definitions starts with a reference to an instance object. Additionally, the subroutines contained in an object are called instance methods. Programmers use methods for reusability or keeping functionality encapsulated inside one object at a time.
    
- **Attributes**
    
    Attributes are defined in the class template and represent the state of an object. Objects will have data stored in the attributes field. Class attributes belong to the class itself.
    

## The Four Pillars of OOP:

1. Abstraction
    
    > Show only necessary things to the user that he required, not extra information (use public, private, protected). Abstraction is done when we need to inherit from a certain class but do not instantiate the objects of that class.
    > 
    It is like programming the shared behavior of a Lion, a penguin, and a Salmon. All of them are different, but they share some traits: they all eat, breath, die, etc. That is why abstraction is important because it allows me as a developer to program something like an "Animal" object, that defines their common behavior.
        
2. Encapsulation
    
    > Group all relevant things together. I.e. encapsulation is used to hide the mechanics of the object, allowing the actual implementation of the object to be hidden, so that we don't need to understand how the object works. All we need to understand is the interface that is provided for us.
    > 
    Imagine a big company with multiple departments.

    Each department offers services to people, like "customer service calls": public methods.

    Then, departments interact with each other, request information, and delegate tasks: protected methods.

    And finally, some duties are managed internally in each department, for example, pays their employees: private methods.

    Thus, encapsulation would be to set some services as public, protected, and private depending on who can request them.
        
3. Inheritance
    
    > If something already exists, why should I recreate it (same as re-inventing a wheel)? Use inheritance to inherit all things of that class into your class. Inheritance enables you to create new classes that re-use, extend, and modify the behavior that is defined in other classes
    > 
    Remember those lions, penguins, and salmons? And remember that they all are *animals.* Well, the inheritance would be, for example, if when an animal is born "birth date" is defined as "today". That behavior would be shared by all animal types and therefore, lions penguins and salmons would inherit the "born behavior" from the animal class.
        
4. Polymorphism
    
    > means "multiple forms". In OOP these multiple forms refer to multiple forms of the same method, where the exact same method name can be used in different classes, or the same method name can be used in the same class with slightly different parameters.
    >
    Remember those lions, penguins, and salmons? And remember that they all have a methed walk, this method will take a deffirent form for each animal.

## Constructors and Destructor:

Constructors and destructor are special member functions in C++ classes that are used to initialize and destroy class objects, respectively.
    
A `constructor` is a special member function of a class that is called automatically when an object of that class is created. It has the same name as the class and no return type, not even void. Constructors can be overloaded, which means that a class can have multiple constructors with different sets of parameters. A constructor can also be explicitly declared as a default constructor or a copy constructor.
    
A `destructor` is another special member function of a class that is called automatically when an object of that class is destroyed. It has the same name as the class but is preceded by a tilde (~) character. A destructor has no return type, not even void.
    
```cpp
class Car {
	public:
    // Constructor
    Car();
    // Destructor
    ~Car();
};
```
    
**Note:** It is important to note that if a class allocates resources during its lifetime, it should also define a destructor to release those resources. Failure to do so can result in memory leaks and other issues. Additionally, if a class defines a constructor, it is a good practice to also define a default constructor and a copy constructor to ensure that the class can be properly initialized and copied.
* [More about constructors](https://learn.microsoft.com/en-us/cpp/cpp/constructors-cpp?view=msvc-170)
* [More about destructors](https://learn.microsoft.com/en-us/cpp/cpp/destructors-cpp?view=msvc-170)
    
## Namespaces
    
A namespace is a declarative region that provides a scope to the identifiers inside it(**names of** types, functions, variables…), it’s used to organize code into logical groups and prevent name collisions that can occur especially when your code base includes multiple libraries.
* [More about Namespaces](https://learn.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=msvc-170)

## Member functions
    
Member functions are operators and functions that have theirdefinition or prototype that are declared as members of a class.Member functions do not include operators and functions declaredwith the friend specifier. These are called *friends* of a class.
    
## The this pointer
    
The **`this`** pointer **(the self keyword)** is a pointeraccessible only within the nonstatic member functions of a **`class`**, **`struct`**, or **`union`**  type. It points tothe object for which the member function is called.
* [More about The this pointer](https://learn.microsoft.com/en-us/cpp/cpp/this-pointer?view=msvc-170)
    
## References
    
A reference, like a pointer, stores the address of an object thatis located elsewhere in memory. Unlike a pointer, a referenceafter it is initialized cannot be made to refer to a differentobject or set to null.

In C++, references are typically implemented as pointersinternally. When a reference is defined, the compiler sets up amemory location for the reference variable. This memory locationcontains the memory address of the original variable. This memoryaddress is a pointer to the original variable.

When the reference is used in the code, the compiler follows thememory address stored in the reference variable to access thevalue stored in the original variable. This process is transparentto the programmer and happens behind the scenes.

To understand this more clearly, let's consider the followingexample:

```cpp
int i = 21;
int& r = i;
```

Here, an integer variable **`i`** is defined with an initial valueof 0. A reference variable **`r`** is defined and initialized to**`i`**. In this case, the memory layout would look something likethis:

| Variable | Value | Memory Address |
| --- | --- | --- |
| i | 0 | 0x00001234 |
| r | 0x00001234 | 0x00001238 |

The memory address of **`i`** is 0x00001234 and contains the value0. The memory address of **`r`** is 0x00001238, which contains thememory address of **`i`** (0x00001234).

When the reference variable **`r`** is used in the code, thecompiler follows the memory address stored in **`r`** (0x00001234)to access the value stored in the original variable **`i`** (0).The value stored in the reference variable **`r`** is the memoryaddress of **`i`** variable.

It's worth noting that the size of a reference variable is thesize of a pointer on the platform, it takes the same amount ofmemory as a pointer.

In conclusion, references in C++ are implemented as pointersinternally, and the compiler uses the memory address stored in thereference variable to access the value of the original variable.This allows the programmer to use the reference variable as if itwere the original variable, while still maintaining the benefitsof working with pointers, such as the ability to manipulate largedata structures more efficiently.
* [More about References](https://learn.microsoft.com/en-us/cpp/cpp/references-cpp?view=msvc-170)
    
## Streams
    
A stream is an abstraction that represents a device on which inputand ouput operations are performed.

The iostream library is an object-oriented library that providesinput and output functionality using stream objects that allow youto read from or write to various sources, such as files, strings,or the console. They are part of the C++ Standard Template Library(STL) and provide a convenient way to perform input/output (I/O)operations.

There are several types of streams available in C++, including:

- **`ifstream`** (input file stream) for reading from files
- **`ofstream`** (output file stream) for writing to files
- **`fstream`** (file stream) for both reading and writing to files
- **`istream`** (input stream) for reading from any input source
- **`ostream`** (output stream) for writing to any output source

The most commonly used streams are **`cin`** and **`cout`**, whichare the standard input and standard output streams, respectively.They are both derived from the **`istream`** and **`ostream`**classes and are used for reading from and writing to the console.

Here is an example of using the **`cout`** stream to output amessage to the console:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

And here is an example of using the **`cin`** stream to read aninteger from the console:

```cpp
#include <iostream>

int main() {
    int x;
    std::cin >> x;
    std::cout << "You entered: " << x << std::endl;
    return 0;
}
```
* [More about Streams](https://cplusplus.com/reference/iolibrary/)

## Pointers to member functions
    
 In C++, a pointer to a member function is a special type ofpointer that can be used to call a member function on an object ofa specific class. A pointer to a member function is declared byspecifying the class name, followed by the scope resolutionoperator (::), followed by the keyword "function", followed by thefunction's return type, followed by the function's name, andfinally a pointer operator (*).
 
 Here's an example of declaring a pointer to a member function:
 
 ```cpp
 class MyClass {
 public:
     void print() {
         std::cout << "Hello, World!" << std::endl;
     }
 };
 
 void (MyClass::*ptr)() = &MyClass::print;
 ```
 
 In this example, **`ptr`** is a pointer to a member function ofthe class **`MyClass`** that takes no arguments and returns novalue (void). The address of the **`print`** member function isassigned to the pointer using the address-of operator (&) and theclass scope operator (::).
 
 To call a member function using a pointer to a member function,you must first create an object of the class, and then use theobject and the pointer to call the function. Here is an example:
 
 ```cpp
 MyClass obj;
 (obj.*ptr)(); // equivalent to obj.print();
 ```
 
 Alternatively you can use the **`->*`** operator to call a memberfunction using a pointer to a member function.
 
 ```cpp
 MyClass* obj_ptr = new MyClass();
 (obj_ptr->*ptr)(); // equivalent to obj_ptr->print();
 ```
 
 It's worth noting that, pointers to member functions are differentfrom pointers to non-member functions and also different frompointers to data members. Pointers to member functions require aninstance of the class to call the function on and also require theuse of the **`->*`** or **`.*`** operator when calling thefunction.
* [More about Pointers to member functions](https://www.ibm.com/docs/en/zos/2.4.0?topic=only-pointers-members-c)

## Operator overloading
    
Operator overloading is a feature that allows you tospecify how objects of a class should behave when an operator isapplied to them.

For example, you can overload the addition operator **`+`** foryour custom class to allow objects of your class to be addedtogether. When you define the addition operator for your class,you specify what the result of the addition should be.

To overload an operator, you define a special member function ofthe class called an operator function. The operator function hasthe same name as the operator being overloaded and is preceded bythe keyword **`operator`**.

Here's an example of overloading the addition operator for acustom class called **`MyClass`**:

```cpp
class MyClass {
public:
  int value;
	// Operator overload declaration
  MyClass operator+(const MyClass& other) const;
};

// Operator overload definition
MyClass MyClass::operator+(const MyClass& other) const {
    MyClass result;
    result.value = this->value + other.value;
    return result;
}
```

In this example, the **`operator+`** function is defined to addtwo **`MyClass`** objects together. The function takes a referenceto another **`MyClass`** object and returns a new **`MyClass`**object as a result of the addition.

You can now use the **`+`** operator with objects of the**`MyClass`** class, and the overloaded **`operator+`** functionwill be called:

```cpp
MyClass a, b, c;
a.value = 1;
b.value = 2;
c = a + b; // calls operator+
```

- **Types of operator overloading:**
    1. Member operator overload
        
        An operator overload is defined as a member function of aclass. The overloaded operator is called on the left-handoperand.
        
        ```cpp
        class MyClass {
        public:
            MyClass operator+(const MyClass& other) const;
        };
        ```
        
    2. Friend operator overload
        
        An operator overload is declared as a friend function of aclass. This allows the operator to access the privatemembers of the class.
        
        ```cpp
        class MyClass {
        public:
            // declare operator<< as a friend of MyClass
            friend std::ostream& operator<<(std::ostream& os,const MyClass& obj);
        };
        ```
        
    3. Global operator overload
        
        An operator overload is defined as a standalone functionoutside of any class. The operator takes two operands asarguments.
        
        ```cpp
        class MyClass {
            // class definition
        };
        
        MyClass operator+(const MyClass& lhs, const MyClass& rhs) {
            MyClass result;
            // perform addition on lhs and rhs
            return result;
        }
        ```
        
    4. Conversion operator overload
        
        An operator overload that allows an object of a class tobe converted to a different type. The operator is definedas a member function and returns the target type.
        
        ```cpp
        class MyClass {
        public:
            operator int() const {
                // convert MyClass object to int
                return 42;
            }
        };
        ```
        
    5. Increment and decrement operator overloading
        
        Operator overloads for the pre-increment, post-increment,pre-decrement, and post-decrement operators. Theseoperators modify the value of the operand.
        
        ```cpp
        class MyClass {
        public:
        		// Pre-increment operator
        		MyClass &operator++();
        		// Post-increment operator
        		MyClass operator++(int);
        		// Pre-decrement operator
        		MyClass &operator--();
        		// Post-decrement operator
        		MyClass operator--(int);
        };
        ```
        
    6. Subscript operator overload
        
        An operator overload that allows an object of a class tobe accessed using the subscript notation. The operator isdefined as a member function and takes an index argument.
        
        ```cpp
        class MyClass {
        public:
            int operator[](int index) const {
                // return element at index in MyClass object
                return elements[index];
            }
        };
        ```
        
## Fixed-point numbers
    
In C++ numbers can be represented in two ways **Integers** or**Floating-point numbers**,

- Integers
    
    Integers ****are whole numbers without a fractional component.They can be positive or negative. Common integer types in C++include **`int`**, **`short`**, and **`long`,** integers aretypically stored in binary format, meaning they can onlyrepresent numbers expressed in binary (base 2) notation.
    
    Integer numbers are represented in the computer memory, as **asequence of bits: 8-bits, 16-bits, 24-bits, 32-bits, 64-bits,and others, but always a multiple of 8 (one byte)**.
    
- Floating-point numbers
    
    Floating-point numbers**,** also known as **`float`** or**`double`** are numbers that have a fractional component.They represent decimal numbers and are implemented using afixed number of bits to represent the decimal point andsignificant digits. floating-point numbers have limitedprecision and may not be able to represent some decimalnumbers exactly.
    
    The exact representation of numbers in memory can varydepending on the underlying hardware and the implementation ofthe compiler. However Floating-point numbers, such as**`float`** and **`double`**, are stored using the IEEE 754standard (look for [ieee754.h](https://sites.uclouvain.beSystInfo/usr/include/ieee754.h.html))
    
    - The IEEE 754 standard
        
        IEEE 754 is a widely used standard for representingfloating-point numbers in computer systems. The standardwas developed by the Institute of Electrical andElectronics Engineers (IEEE) in 1985 and has since becomean industry standard for floating-point arithmetic in mostcomputer systems.
        
        The standard defines several different formats forfloating-point numbers, including single-precision (32bits), double-precision (64 bits), and extended-precision(80 bits) formats. The most commonly used format is thesingle-precision format, which provides a trade-offbetween range and precision.
        
        IEEE 754 formats:
        
        ![Untitled](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/6c9515be-3aab-4ba5-b4d0-4491db7b7d81/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=AKIAT73L2G45EIPT3X45%2F20230325%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20230325T072352Z&X-Amz-Expires=86400&X-Amz-Signature=5ab3310b4f495c7bdd94acc6dc983abe1d0abf61a8769fd7bac1ed46a78ce3ce&X-Amz-SignedHeaders=host&response-content-disposition=filename%3D%22Untitled.png%22&x-id=GetObject)
        
        The first bit is the **`sign bit`**, with 0 representing apositive number and 1 representing a negative number. Thenext **N** bits represent the **`exponent`**, and thefinal **N** bits represent the `**significand**` (ormantissa).
        
        * [Decimal to IEEE 754 Floating Point Representation](https://www.youtube.com/watch?v=8afbTaA-gOQ)
        
        * [IEEE 754 Floating Point Representation to its DecimalEquivalent](https://www.youtube.com/watch?v=LXF-wcoeT0o)
        

Fixed-point numbers are commonly used in computer systems wherefloating-point operations are not supported or are too slow(whenperformance is more important than precision).

- Fixed-point numbers
    
    In fixed-point representation, a number is stored as aninteger with an implicit decimal point. The position of thedecimal point is fixed and known in advance and does notchange during arithmetic operations. For example, if we use afixed-point representation with 4 bits for the integer partand 4 bits for the fractional part, the number 3.5 would berepresented as 0011.1000.
    
    Fixed-point representation has some advantages overfloating-point representation, such as simpler arithmeticoperations and lower memory usage. However, it has somelimitations as well, such as a smaller range and lowerprecision compared to floating-point numbers.
    
    [Introduction to Fixed Point Number Representation](https:/inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html)
    
    [Fixed Point Arithmetic in C Programming](https:/stackoverflow.com/questions/10067510fixed-point-arithmetic-in-c-programming)
    
## Access specifiers
    
Access specifiers are used for determining or setting the boundary for the availability of classmembers(data members and member functions)  beyond that class. For example,  the class members are groupedintosections, private protected and public. These keywords are called access specifiers which definetheaccessibility or visibility level of class members.

By default the class members are private. So if the visibility labels are missing then by default, alltheclass members are private.

In inheritance, it is important to know when the objects of the derived class can use a member function inthebase class. This is called accessibility and the access specifiers are used to determine this.

| Access Specifier | Description |
| --- | --- |
| public | Public members are accessible from anywhere in the program and can be accessed by any object oftheclass, as well as by any function outside of the class. This is often used for member functions thatneed to becalled from outside the class, as well as for data members that are intended to be accesseddirectly. |
| protected | Protected members are accessible from within the class itself, as well as by any derivedclassthat inherits from the class. This is often used for member functions and data members that need tobe accessedby derived classes, but not by other objects outside of the class hierarchy. |
| private | Private members are only accessible from within the class itself, and cannot be accessed byanyobjects or functions outside of the class. This is often used for data members that should not bemodifieddirectly, as well as for member functions that are only used internally by the class itself. |

## Inheritance
Inheritance is a way to create a new class (known as a derived class) from an existing class (knownas   a base class). The derived class inherits all `non-private` data members and all `non-private` memberfunctions of the base class and can also add its own data members and member functions. 

```cpp
#include <iostream>
#include <string>

// Base class
class Shape {
  public:
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
  protected:
    int width;
    int height;
};

// Derived class
class Rectangle: public Shape {
  public:
    int getArea() {
        return (width * height);
    }
};

int main() {
  Rectangle rect;
  rect.setWidth(10);
  rect.setHeight(7);
  std::cout << "Area of the rectangle: " << rect.getArea() << std::endl;
  return 0;
}
```

In this example, the **`Shape`** class is the base class and the **`Rectangle`** class is the derivedclass.The **`Rectangle`** class inherits the **`setWidth`** and **`setHeight`** member functions from the**`Shape`** class and also adds its own member function **`getArea`**. The **`getArea`** function usesthe**`width`** and **`height`** data members which are inherited from the **`Shape`** class.
    
## Virtual Keyword
The `virtual` keyword is used to declare a virtual function. A virtual function is a function that can beoverridden by a derived class, allowing the derived class to provide its own implementation of the function.

When a derived class overrides a virtual function, it provides its own implementation of the function thatis used instead of the implementation provided by the base class. This allows classes to provide a commoninterface, while still allowing each class to provide its own unique implementation of the interface.

Here's an example of using virtual functions:

```cpp
class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaking..." << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal* animal = new Animal;
    Animal* dog = new Dog;
    Animal* cat = new Cat;

    animal->speak(); // Output: "Animal speaking..."
    dog->speak(); // Output: "Woof!"
    cat->speak(); // Output: "Meow!"

    delete animal;
    delete dog;
    delete cat;

    return 0;
}
```

In this example, the `Animal` class provides a virtual function `speak()`, which is overridden by the `Dog`and `Cat` classes. When `speak()` is called on an object of type `Animal`, the implementation provided bythe `Animal` class is used. However, when `speak()` is called on an object of type `Dog` or `Cat`, theimplementation provided by the derived class is used instead.

It's worth noting that virtual functions can also be declared as pure virtual functions by specifying `= 0`after the function declaration.

## Abstract class
An abstract class is a class that cannot be instantiated on its own and is designed to be used as a baseclass. It is an incomplete class that contains at least one pure virtual function. A pure virtual functionis a virtual function that has no implementation in the base class and is intended to be overridden byderived classes.

The purpose of an abstract class is to provide an interface for derived classes to follow. It defines a setof functions that derived classes must implement in order to be considered a concrete implementation of theabstract class. By providing an interface for derived classes, an abstract class can be used as a templatefor a family of related classes, providing a common base for all of them.

An example of an abstract class:

```cpp
class Shape {
public:
    virtual double area() const = 0; // pure virtual function
    virtual double perimeter() const = 0; // pure virtual function
};
```

In this example, **`Shape`** is an abstract class that defines two pure virtual functions, **`area()`** and**`perimeter()`**. Any derived class that inherits from **`Shape`** must implement these two functions inorder to be a concrete implementation of **`Shape`**.

A pure virtual function has no implementation in the base class and must be overridden by any derived classthat wants to be instantiated.
    
## Deep & Shallow copies
when an object is copied, there are two ways to do it: shallow copy and deep copy.

A **`shallow copy`** copies the values of the member variables from the original object to the new object.If a member variable is a pointer, then the copy will have a new pointer that points to the same memorylocation as the original pointer. This means that changes to the data pointed to by the original and copiedpointers will affect both objects.

A **`deep copy`**, on the other hand, creates a new copy of the pointed-to data. This means that changes tothe data pointed to by one object's pointer will not affect the other object.

In general, deep copies are safer than shallow copies, because they do not share any data between objects.However, deep copies can be more expensive to create than shallow copies, because they require duplicatingall of the pointed-to data.
    
## Exceptions 
Exceptions are a mechanism for handling errors and abnormal situations that occur during programexecution. When an exception is thrown, it is an indication that something has gone wrong and the normalflow of the program cannot continue.

Exceptions are represented by objects that are thrown by a function using the **`throw`** keyword.The thrown object can be of any type, but it is typically derived from the **`std::exception`** class.

The process of handling exceptions involves three main components: the code that throws the exception, thecode that handles the exception, and the system that facilitates the transfer of control between them.

The basic syntax for handling exceptions in C++ is the **`try-catch`** block. The code that might throw anexception is enclosed in the **`try`** block, and the code that handles the exception is enclosed in one ormore **`catch`** blocks. If an exception is thrown in the **`try`** block, the program jumps immediately tothe appropriate **`catch`** block, skipping any remaining code in the **`try`** block.

Here is an example of using exceptions:

```cpp
#include <iostream>
#include <string>

void processString(const std::string& str) {
    if (str.length() < 5) {
        throw std::invalid_argument("String is too short");
    }
    std::cout << "Processing string: " << str << std::endl;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    try {
        processString(input);
    }
    catch (std::invalid_argument& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
```

In this example, the **`processString`** function takes a **`std::string`** parameter and checks whetherthe length of the string is less than 5 characters. If it is, an exception of type**`std::invalid_argument`** is thrown using the **`throw`** keyword.

In the **`main`** function, the **`processString`** function is called inside a **`try`** block. If anexception is thrown, the program jumps to the **`catch`** block, where the exception object is caught andits message is printed to the standard error stream.

The **`catch`** block can catch exceptions of different types by using multiple **`catch`** blocks. If no**`catch`** block is able to handle the thrown exception, the program terminates and displays an errormessage.

## Casting
Casting is a conversion process wherein data can be changed from one type to another. C++ has two types ofconversions:

**`Implicit conversion`:** Conversions are performed automatically by the compiler without the programmer'sintervention.

```cpp
float f_var = 4.2f;
int i_var = f_var; //Assigning a float to an int will trigger a conversion.
```

**`Explicit conversion`:** Conversions are performed only when explicitly specified by the programmer.

```cpp
int i_var = 42;
float f_var = (float) i_var / 42;
```

In C++, there are four types of casting operators.

| Operator | Description | Operator Type | Return Value |
| --- | --- | --- | --- |
| static_cast\<T\>(expr) | Converts between related types such as derived-to-base and vice versa. Can also be used for conversion between arithmetic types. | Compile-time | Value of type T |
| dynamic_cast\<T\>(expr) | Safely converts pointers and references to classes up, down, and sideways along the inheritance hierarchy. | Run-time | If successful, a pointer/reference of type T to the complete object. If the cast fails and expr is a pointer, the result is a null pointer. If the cast fails and expr is a reference, the result is a bad_cast exception. |
| const_cast\<T\>(expr) | Removes const, volatile, and __unaligned attributes from a type. | Compile-time | Value of type T |
| reinterpret_cast\<T\>(expr) | Converts between types by reinterpreting the underlying bit pattern. | Compile-time | Value of type T |

* [static_cast](https://en.cppreference.com/w/cpp/language/static_cast)
* [reinterpret_cast](https://en.cppreference.com/w/cpp/language/reinterpret_cast)
* [dynamic_cast](https://en.cppreference.com/w/cpp/language/dynamic_cast)
* [const_cast](https://en.cppreference.com/w/cpp/language/const_cast)
    
## Templates
Templates are a powerful feature that allows the creation of generic classes and functions that can workwith different data types. They can be used to create a single implementation of a class or function thatcan be used with any data type, without having to create separate implementations for each data type.

Templates are declared using the **`template`** keyword, followed by the template parameter list enclosedin angle brackets **`<>`**. The template parameter list specifies one or more template parameters, whichcan be types, non-type values, or template parameters themselves.

```cpp
template <typename T>
T minimum(const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs : rhs;
}
```

The above code describes a template for a generic function with a single type parameter *T*, whose returnvalue and call parameters (lhs and rhs) are all of this type. You can name a type parameter anything youlike, but by convention single upper case letters are most commonly used. *T* is a template parameter;the **`typename`** keyword says that this parameter is a placeholder for a type. When the function iscalled, the compiler will replace every instance of `T` with the concrete type argument that is eitherspecified by the user or deduced by the compiler. The process in which the compiler generates a class orfunction from a template is referred to as ***template instantiation**:*

`minimum<int>` is an instantiation of the template `minimum<T>`.

Templates can also be used with classes to create generic classes. Here's an example of a simple templateclass that represents a stack of any data type:

```cpp
template<class T>
class Stack {
public:
    void push(T value);
    T pop();
private:
    std::vector<T> data;
}
```
    
- `template <typename T>` vs `template <class T>`   
    there is no difference between using **`typename`** or **`class`** as a template parameter declarationkeyword, in fact, the **`typename`** keyword was added to C++ specifically to make template programmingmore readable and expressive. When used as a template parameter declaration, **`typename`** indicatesthat the dependent name that follows refers to a type. On the other hand, when **`class`** is used, itindicates that the dependent name could refer to a class type, but it could also refer to other thingssuch as a function or a variable.

* [More about Templates](https://cplusplus.com/doc/oldtutorial/templates/)

## Iterators 
An iterator is an object that can iterate over elements in a C++ Standard Library container and provideaccess to individual elements. The C++ Standard Library containers all provide iterators so that algorithmscan access their elements in a standard way without having to be concerned with the type of container theelements are stored in.

You can use iterators in a number of different ways, such as iterating over the elements of a container to perform some operation on them or using algorithms like std::find or std::sort to manipulate the contents of a container. Overall, iterators are a powerful and flexible tool in C++ that allows you to work withcontainers in a generic and efficient way.
* [More about iterators](https://learn.microsoft.com/en-us/cpp/standard-library/iterators?view=msvc-170)
