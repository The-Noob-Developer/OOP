#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    virtual void show(){
        cout<<"Parent Method"<<endl;
    }
};

class Child : public Parent{
public:
    void show() {
        cout<<"Child Method"<<endl;
    }
};

int main(){
    Parent* p = new Parent();
    p->show();

    Parent* pc = new Child();
    pc->show();
    
    return 0;
}