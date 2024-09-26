// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class A{
    public:
   void foo(){ cout<<"A.foo"<<endl;}
    
};

class B{
    public:
    void fun(){ cout<<"B.fun"<<endl;}
    
};

class C{
    A obj_A;
    B obj_B;
    public:
    
    void foo() { obj_A.foo();}
    void fun() { obj_B.fun();}
};

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    
    C obj_c;
    obj_c.foo();
    obj_c.fun();

    return 0;
}
