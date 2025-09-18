// Data Types in cpp 
// Why we need data types ? 

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    // Data Types in cpp 
    // What is data type ?   
    // Data type is a category of values that can be stored in a variable  

    // 1 kg of sugar  :- locker? polythene bag? carboard box? cloth bag? 
    // 1 liter milk :- cloth bag? --- NO why? milk will spill 

    // different data types to store different types of values
    // What all different data types are there ?  
    // 1] int :- integer :- 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 

    // signed integer 
    // syntax : int VARIABLE_NAME; 
    int my_int;   //var declaration?  
    // once you decalre a variable then the memory is allocated to the variable 
    // size = ? what is the size of int ?   :- 4 bytes 

    // 1 byte = 8 bits  
     
    // 0 1 0 1 0 1 0 1   --> 1 bytes 
    // 4 bytes = 32 bits  

    // range of integer? 
    // range means the maximum and minimum value that can be stored in a variable   
    // -2,147,483,648 to 2,147,483,647 


    my_int = -1267;   // var initialization 
    cout<<my_int<<endl; 

    // unsigned integer  
    // range of unassigned integer is 0 to 4,294,967,295 
    unsigned int my_unsigned_int; // var declaration 
    my_unsigned_int = -1267; // var initialization 
    cout<<my_unsigned_int<<endl; 



    // 2] float 
    // syntax : float VARIABLE_NAME;  
    // floating point value/number is fractional value/number  
    // size of float is 4 Bytes 
    // float stores 6-7 decimal places of precision 
    // 12.5678902 
    float my_float; // var declaration 
    my_float = 12.5678901234567890; // var initialization 
    cout  << "my_float : " << my_float << endl;
    // Compiler has the default precision of 4 places 

    // Can i store a float value in integer? 
    // int my_int_float = 12.56; 
    // cout<<"my_int_float : "<<my_int_float<<endl;   // error? or wrong output?  
    // This situation is called data loss/ data truncation / data overflow  

    // range of float is -3.4028234663852886e+38 to 3.4028234663852886e+38 

    // 3] double
    // syntax : double VARIABLE_NAME;  
    // double is a floating point value/number is fractional value/number  
    // size of double is 8 Bytes 
    // double stores 15-16 decimal places of precision  
    // 12.5678901234567890 
    double my_double; // var declaration 
    my_double = 12.6777711111111111; // var initialization 
    cout << fixed << setprecision(19) << "my_float : " << my_double << endl; 



    // 4] char
    // Syntax : char VARIABLE_NAME;   
    // char is a single character value/number  
    // size of char is 1 Byte 
    // char stores 1 character  
    // character should be enclosed in single quotes  
    // 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
    char my_char; // var declaration 
    my_char = 'z'; // var initialization 
    cout<<"my_char : "<<my_char<<endl;  


    // my_char = 'ab'? 


    // 5] bool
    // 6] string
    // 8] long
    // 9] long long
    // 10] short
 

    return 0;
}
