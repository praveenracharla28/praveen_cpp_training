
#include<iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace


template<typename OperandType>
OperandType add(OperandType Operand1, OperandType Operand2){
  OperandType result=Operand1+Operand2;
  return result;
}

template<typename OperandType>
OperandType sub(OperandType Operand1,OperandType Operand2){
 OperandType result=Operand1-Operand2;
  return result;
}

int main(){
  int result=add<int>(10,2);
  std::out<<result<<std::endl;
  float fResult=add<float>(10.2,40.3);
  std::out<<fResult<<std::endl;
  
  
  return 0
}
