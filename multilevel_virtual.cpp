#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "A::show\n";
    }
};

class B : public A {
public:
    void show()  {
        cout << "B::show\n";
    }
};

class C : public B {
public:
    void show(){
        cout << "C::show\n";
    }
};

int main() {
    A* obj = new C();
    obj->show();
}