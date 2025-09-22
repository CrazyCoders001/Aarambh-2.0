#include<iostream> 
using namespace std;

int main()
{
    // Arithmetic operators 
    /*
        add : +
        sub : -
        mul : *
        div : /
        mod : %
        increment : ++
        decrement : --
    */

   int num1, num2;  //var declration
   num1 = 10;       //var Initialization
   num2 = 3;       //var Initialization

   cout<<"Addition "<<num1<<" + "<<num2<<" :- "<<(num1 + num2)<<endl;      // 13
   cout<<"Multiplication "<<num1<<" * "<<num2<<" :- "<<(num1 * num2)<<endl;// 30
   cout<<"Division "<<num1<<" / "<<num2<<" :- "<<(num1 / num2)<<endl;      // 3 
   cout<<"Substraction "<<num1<<" - "<<num2<<" :- "<<(num1 - num2)<<endl;  // 7

   //Modulus operator (%)
   cout<<"Modulus "<<num1<<" % "<<num2<<" :- "<<(num1 % num2)<<endl;   // 1
   // what modulus operator is
   // So modulus operator will return/give the reminder after division of operand1 and operand2
   // 10/3 = Quotient = 3         reminder = 1
   // 10%3 --> you will get reminder --> 1
   // 10/3 = 3
   // 3*3 = 9 
   // 10 - 9 = 1

   

   // (10 / 3) = (Mathematicaly) --> 3.3  but we have data type int --> 3

    cout<<"------------post Increment/Decrement-----------------------------"<<endl;
   // Increment/decrement operator
   // we will use only one operand

   // in post increment/decrement :- first value will be ouputed/displayed, 
   // after that the operation will happen
   // syntax Operand++   operand--

   //in pre increment/decrement :- first operation wiil be performed
   // after that value will be printed
   // // syntax ++Operand   --operand

   int op = 5; // var declarion + initilization
   // op++   : the value gets incremented by 1
   // op--   : the value gets decremented by 1 
   // before increment op = 5
   cout<<"Before increment op = "<<op<<endl;
   cout<<"Increment of ++op : "<<(++op)<<endl;  // 6
   // after increment  op = 6
   cout<<"after increment op = "<<op<<endl; 
   cout<<"decrement of --op : "<<(--op)<<endl;  // 5
   cout<<"after decrement op = "<<op<<endl;    // 


}