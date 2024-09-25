// Online C++ compiler to run C++ program online
#include <iostream>
class Parent{
    int parentId;
    public:
    Parent(int arg):parentId{arg}{}
};
class Child:public Parent{
    public:
    Child():Parent::Parent(10){
        //Parent::Parent();
    }
    Child(int arg):Parent::Parent{arg}{
        //Parent::Parent();
    }
};

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";

    return 0;
}
