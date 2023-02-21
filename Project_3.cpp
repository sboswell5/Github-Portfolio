//Author: Shelby Boswell
//Date: Feb 10, 2023
//Programming Project 3

//Write a program that mimics a calculator. The program should take as input two numbers and the operation 
//(+, -, /, *) to be performed. It should then output the numbers, the operator, and the result. 
//(For division, if the denominator is zero, output an appropriate message.) Some sample input/output follow:
//3 + 4 = 7
//13 * 5 = 65

#include <iostream>
 
using namespace std;
int main() {

//Declare our Variables
double Value_One;
double Value_Two;
char Operator;
double Result;

//Take Input for Our Values
cout << "Input your first value: " << endl;
cin >> Value_One;

cout << "Choose an operator: * / + -  " << endl;
cin >> Operator;

cout << "Input your second value: " << endl;
cin >> Value_Two;



//Calculations using Switchcase

switch(Operator) {

    case '*':
        Result = Value_One * Value_Two;
        break;

    case '/':
        if(Value_Two == 0) // needs == !!
        {
            cout << "You cannot divide by zero. Please try again. " << endl; //This is preventing division by 0.
            }
        else
        Result = Value_One / Value_Two;
        break;

    case '+':
        Result = Value_One + Value_Two;
        break;

    case '-':
        Result = Value_One - Value_Two;
        break;
}
//Print the Results

cout << "Your answer is " << Result << endl;



    return 0;
}