#include<bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape{
public:
    void draw() override {
        cout<<"Drawing Circle"<<endl;
    }
};

int main(){
    // Shape* s = new Shape();
    // object of abstract class type "Shape" is not allowed:
    // pure_vf.cpp(17, 20): function "Shape::draw" is a pure virtual function
    // class Shape

    Shape* s = new Circle();

    s->draw();
    delete s;
    return 0;
}