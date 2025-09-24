#include<iostream>
using namespace std;

int main()
{
    // Relational Operator (Comparision operator)
    // While using relational operator you will need two operands
    // What RO do --> To compare values and come to a conclusion
    // The output of relational operator will always be in boolean form 
    // Either true or False
    // where do you use relational op in code? --> to make a decision based on condition
    // if (age > 18)

    /*
        1. equal to equal to          : ==
        2. Not equal to               : !=
        3. Less than                  : <
        4. Greater than               : >
        5. less than or equal to      : <=
        6. Greate than or equal to    : >=
 
    */

    int num1 = 10, num2 = 20;  // Var initilaization + declaration
    // we declare a variable only once
    // Re-declaration is not allowed
    // Re-Assigning value is allowed
    cout<<"-------------------(==)------------------------"<<endl;
    cout<<"is "<<num1<<" equal to "<<num2<<" :- "<<(num1==num2)<<endl;  // 0 (false)

    cout<<"-------------------(!=)------------------------"<<endl;
    cout<<"is "<<num1<<" not equal to "<<num2<<" :- "<<(num1!=num2)<<endl;  // 1 (true)

    num1 = 10, num2 = 50; 
    cout<<"-------------------(<)------------------------"<<endl;
    cout<<"is "<<num1<<" less than "<<num2<<" :- "<<(num1 < num2)<<endl; // 1

    num1 = 100, num2 = 50; 
    cout<<"-------------------(>)------------------------"<<endl;
    cout<<"is "<<num1<<" greater than "<<num2<<" :- "<<(num1 > num2)<<endl; // 1

    num1 = 201, num2 = 200; 
    cout<<"-------------------(<=)------------------------"<<endl;
    cout<<"is "<<num1<<" less than or equal to "<<num2<<" :- "<<(num1 <= num2)<<endl; // 0

    num1 = 199, num2 = 200; 
    cout<<"-------------------(>=)------------------------"<<endl;
    cout<<"is "<<num1<<" greater than or equal to "<<num2<<" :- "<<(num1 >= num2)<<endl; // 0



    return 0;
}