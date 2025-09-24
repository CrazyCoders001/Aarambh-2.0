#include<iostream>
using namespace std;

int main()
{
    // Logical Operator

    // List of logical operator

    /*
        1. Logical AND (&&)
        2. Logical OR  (||)
        3. Logical NOT (!)
    */

    cout<<"--------------------Logical AND (&&)----------------"<<endl;
    bool op1 = false, op2 = false;
    // Logical AND operates on two operands
    // Defination :- Whenever both the inputs are true then only 
    //               the ouput will be true
    /*
         op1         op2         (op1 && op2)
        false (0)   false (0)         0
        false (0)   true  (1)         0
        true  (1)   false (0)         0
        true  (1)   true  (1)         1
    */
 
    cout<<"When both the inputs are false : "<<(false && false)<<endl;    // 0
    cout<<"input 1 is true input 2 is false : "<<(true && false)<<endl;   // 0
    cout<<"input 1 is false input 2 is true : "<<(false && true)<<endl;  // 0
    cout<<"When both the inputs are true : "<<(true && true)<<endl;       // 1


    cout<<"--------------------Logical OR (||)----------------"<<endl;

    return 0;
}