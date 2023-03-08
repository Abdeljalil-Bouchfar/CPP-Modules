#include <exception>
#include <iostream>

class Base {

public:
  virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void) {
  // generate a random number between 0 and 2
  int rand_num = std::rand() % 3;

  switch (rand_num) {
  case 0:
    return new A;
  case 1:
    return new B;
  case 2:
    return new C;
  default:
    return new A;
  }
}

void identify(Base *p) {
  if (dynamic_cast<A *>(p))
    std::cout << "A\n";
  else if (dynamic_cast<B *>(p))
    std::cout << "B\n";
  else if (dynamic_cast<C *>(p))
    std::cout << "C\n";
}

void identify(Base &p) {
  try {
    A &a = dynamic_cast<A &>(p);
    (void)a;
    std::cout << "A\n";
  } catch (std::exception o) {
  }
  try {
    B &b = dynamic_cast<B &>(p);
    (void)b;
    std::cout << "B\n";
  } catch (std::exception o) {
  }
  try {
    C &c = dynamic_cast<C &>(p);
    (void)c;
    std::cout << "C\n";
  } catch (std::exception o) {
  }
}

int main(void) {
  std::srand(std::time(nullptr));
  std::cout << "------------ valid test ------------\n";
  Base *ptr = new A;
  identify(ptr);
  identify(*ptr);
  delete ptr;
  ptr = generate();
  std::cout << "------------ identify(Base *p) ------------\n";
  identify(ptr);
  std::cout << "------------ identify(Base &p) ------------\n";
  identify(ptr);
  delete ptr;
}