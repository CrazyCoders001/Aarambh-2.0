#include<iostream>
using namespace std;

int main()
{
    // What is assignment operator
    // --> assigning a value from one variable to another variable

    // List of Assignement Operators

    cout<<"-----------------equal to-------------------"<<endl;
    // 1. = (equal to op)
    int num1 = 10, num2 = 20;
    num1 = num2;   //Assigning value of num2 to num1
    // num1 -->  20
    // num2 -->  20

    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;

    cout<<"-----------------plus equal to-------------------"<<endl;
    // 2. += (Plus equal to)
    num1 = 10, num2 = 20;
    num1 += num2;
    // num1 = num1 + num2;
    cout<<"num1 = "<<num1<<endl;  // 30
    cout<<"num2 = "<<num2<<endl;  // 20
    
    cout<<"-----------------minus equal to-------------------"<<endl;
    // 3. -= (Minus equal to)
    num1 = 10, num2 = 20;
    num1 -= num2;
    // num1 = num1 - num2;
    cout<<"num1 = "<<num1<<endl;  // -10
    cout<<"num2 = "<<num2<<endl;  // 20

    cout<<"-----------------Multiply equal to-------------------"<<endl;
    // 4. *= (Multiply equal to)
    num1 = 10, num2 = 20;
    num2 *= num1;
    // num2 = num2 * num1;
    cout<<"num1 = "<<num1<<endl;  // ?  --> 10
    cout<<"num2 = "<<num2<<endl;  // ?  --> 200


    cout<<"-----------------divide by equal to-------------------"<<endl;
    // 5. /= (Divide equal to)
    num1 = 10, num2 = 20;
    num2 /= num1;
    // num2 = num2 / num1;  (20 / 10)
    cout<<"num1 = "<<num1<<endl;  // 10 
    cout<<"num2 = "<<num2<<endl;    // 2

    cout<<"-----------------mod by equal to-------------------"<<endl;
    // 6. /= (mod equal to)
    num1 = 10, num2 = 20;
    num2 %= num1;
    // num2 = num2 % num1;  (20 % 10)
    cout<<"num1 = "<<num1<<endl;  // 10 
    cout<<"num2 = "<<num2<<endl;  // 0


    // 10 participants
    // top 3
    // first p1 :- 10 min 20 sec   (+=, /=)
    // sec p2   :- 11 min 6 sec    (num1 = num2 + num1)
    // third    :- 11 min 50 sec
    // fourth   :- 11 min 52 sec


    return 0;
}