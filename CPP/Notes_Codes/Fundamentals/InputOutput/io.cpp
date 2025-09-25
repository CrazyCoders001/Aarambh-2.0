#include<iostream>
using namespace std;

int main()
{

    int n1;  //declaring var
    // n1 = 10;  //Initializing var

    // I want to take input from user at run time
    // How can you take input at run time from user
    // --> using "cin" function
    //SYNTAX : cin>>VAR_NAME;
    cout<<"Please enter a value :- ";
    cin>>n1;

    // to output value/data on the terminal/screen we use "cout" function
    // These "cin" and "cout" functions are built in functions written under "iostream" library
    //SYNTAX : cout<<VAR_NAME;
    cout<<"The inputed value is :- "<<n1<<endl;
    cout<<"Hello world"<<endl;

    // system.out.println()
    // print(val, end="")


    // Instructions for placement coding test (Online Assesment)
    // Print only data/ouput which has said to be printed

    int n3 = 10, n2 = 20;
    int sum = n3+n2;
    cout<<sum<<endl;   //Expected : 30, what i got : sum = 30

    return 0;
}