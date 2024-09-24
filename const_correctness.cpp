// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";

int data;
int y;
int *p;
p=&data;
*p=100;
p=&y;
*p=200;


 const int *q;
 q=&data;
 *q=100;
 q=&y;
 *q=200;

const int* const r;
r=&data;
*r=100;
r=&y;
*r=200;
  

  
    
    return 0;
}
