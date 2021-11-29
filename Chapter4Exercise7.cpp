#include "iostream"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Evan Verdu
 */

/*
Write a program that performs as a very simple calculator. Your calculator should be able to handle the five basic math operations - add, subtract, multiply, divide, and modulus (remainder) - on two input values.
Your program should prompt the user to enter three arguments: two
double values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and '+', the program output should be "The sum
of 35.6 and 24.1 is 59.7." In Chapter 6 we look at a much more sophisticated simple calculator

Modify the "mini calculator" from exercise 5 to accept (just) single-digit
numbers written as either digits or spelled out. 
*/



//Checks operand to see if its spelled out, returns int if it is, else continue.
int SpelledOutOperand(std::string OperandValue){

  if(OperandValue.compare("neg_nine") == 0){
    return -9;
  }
  else if(OperandValue.compare("neg_eight") == 0){
    return -8;
  }
  else if(OperandValue.compare("neg_seven") == 0){
    return -7;
  }
  else if(OperandValue.compare("neg_six") == 0){
    return -6;
  }
  else if(OperandValue.compare("neg_five") == 0){
    return -5;
  }
  else if(OperandValue.compare("neg_four") == 0){
    return -4;
  }
  else if(OperandValue.compare("neg_three") == 0){
    return -3;
  }
  else if(OperandValue.compare("neg_two") == 0){
    return -2;
  }
  else if(OperandValue.compare("neg_one") == 0){
    return -1;
  }
  else if(OperandValue.compare("zero") == 0){
    return 0;
  }
  else if(OperandValue.compare("one") == 0){
    return 1;
  }
  else if(OperandValue.compare("two") == 0){
    return 2;
  }
  else if(OperandValue.compare("three") == 0){
    return 3;
  }
  else if(OperandValue.compare("four") == 0){
    return 4;
  }
  else if(OperandValue.compare("five") == 0){
    return 5;
  }
  else if(OperandValue.compare("six") == 0){
    return 6;
  }
  else if(OperandValue.compare("seven") == 0){
    return 7;
  }
  else if(OperandValue.compare("eight") == 0){
    return 8;
  }
  else if(OperandValue.compare("nine") == 0){
    return 9;
  }
  
   return 25; //Not a valid number, or not spelled out.
}



//Converts operand string to int.
int getOperand(std::string OperandValue){

  //Checks if operand is spelled out, if it is returns value.

   int x = 25;
   x = SpelledOutOperand (OperandValue);
   
   if (x != 25){
     return x;
   }

  //Converts number string to int.
  int value = atoi(OperandValue.c_str());

    //Makes sure only single digit values are allowed
  if (value < -9  || value > 9) // If operand is not single digit
    {
     std::cout << "Please enter a valid operand (From -9 to 9, number or spelled format, neg_value for negatives)";   
     exit (EXIT_FAILURE);
    }

  return value;

}


int main() {
    
  std::string operation;
  std::string OperandValue1, OperandValue2; //gathers the values as strings
  int operand1, operand2; //does all the calculations
  int solution;

  std::cout << "Enter an operation (Operand1 Operand2 Operator, from -9 to 9, neg_value for negative): ";
  std::cin >> OperandValue1;
  std::cin >> OperandValue2;   
  std::cin >> operation;

  
  operand1 = getOperand(OperandValue1);
  operand2 = getOperand(OperandValue2);

  //Calculator operations
  if (operation == "+"){
    solution = operand1+operand2;
    std::cout << operand1 << " + " << operand2 << " = " << solution;
    return 0;
  }
  else if(operation == "-") {
      solution = operand1-operand2;
      std::cout << operand1 << " - " << operand2 << " = " << solution;
      return 0;
  }
  else if(operation == "*") {
      solution = operand1*operand2;
      std::cout << operand1 << " * " << operand2 << " = " << solution;
      return 0;
  }
  else if(operation == "/") {
      solution = operand1/operand2;
      std::cout << operand1 << " / " << operand2 << " = " << solution;
      return 0;
  }
  else if(operation == "%") {
      solution = operand1%operand2;
      std::cout << operand1 << " % " << operand2 << " = " << solution;
      return 0;
  }
  else {
      std::cout << "Not a valid operation";
      return 0;
  }



}