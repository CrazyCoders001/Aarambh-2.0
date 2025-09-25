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
    // The output of logical AND will always be in binary (either true (1) or false(0))
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


    cout<<endl<<"--------------------Logical OR (||)----------------"<<endl;
    // Logical OR operates on two operands
    // The output of logical OR will always be in binary (either true (1) or false(0))
    // Defination :- Whenever at least one of the input is true 
    //               then the output will be true, Otherwise output will be false

    /*
         op1         op2         (op1 || op2)
        false (0)   false (0)         0
        false (0)   true  (1)         1
        true  (1)   false (0)         1
        true  (1)   true  (1)         1 
    */

    cout<<"When both the inputs are false : "<<(false || false)<<endl;    // 0
    cout<<"input 1 is true input 2 is false : "<<(true || false)<<endl;   // 1
    cout<<"input 1 is false input 2 is true : "<<(false || true)<<endl;   // 1
    cout<<"When both the inputs are true : "<<(true || true)<<endl;       // 1

    cout<<endl<<"--------------------Logical NOT (!)----------------"<<endl;
    // Logical NOT operator will work on only one operand
    // The output of logical NOT will always be in binary (either true (1) or false(0))
    // Defination :- The output will be exactly opposite of input

    /*
        op1           !op
        true(1)     false(0)
        false(0)    true(1)
    
    */

    cout<<"When input is true ouput will be : "<<(!true)<<endl;    // 0
    cout<<"When input is false ouput will be : "<<(!false)<<endl;  // 1


    return 0;
}