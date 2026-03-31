#include<bits/stdc++.h>
using namespace std;

// ---------------------------------------------------------------------------
// NOT ONLY PLUS,
// CAN BE IMPLEMENTED IN DITTO FASHION WITH MINUS, MULTIPLY AND DIVIDE
// ---------------------------------------------------------------------------

class Demo{
    int a;
public:
    Demo(){
        a = 0;
    }
    Demo(int _a){
        a = _a;
    }
    int geta(){
        return a;
    }
    Demo operator +(Demo bb){
        Demo cc; // Temporary Object for returning the result.
        cc.a = a + bb.a; 
        // Why not writing aa.a and only a?
        // It is understood ki jiss object ke zariye iss function ko call kiya jaa raha hai yeh usi ka variable hai.
        return cc;
    }
};


int main(){
    Demo aa(1);
    Demo bb(10);
    Demo cc;
    cc = aa + bb;
    cout<<cc.geta()<<endl;
    cout<<aa.geta()<<endl;
    cout<<bb.geta()<<endl;
}


// cc = aa + bb
// With the reference of aa, calling the + operator overload function and passing bb.
// The output of the operation is being stored in cc.

// CONCEPT OF with argument and with return (fn has argument and return type as well)

