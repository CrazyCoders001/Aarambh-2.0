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
    // Syntax : bool VARIABLE_NAME;
    // size of boolean is 1 byte
    // what values can boolean data type store?
    // So in boolean data type you can only store true/false (0/1)
    // true = 1 (decimal form)  (what is binary 1? 0001)
    // false = 0 (decmal form)  (what is binary 0? 0000)

    bool my_bool;  //var declaration
    my_bool = true; // var initialization  true (code form) -> 1 (output from) -> 0001 (memory from)
    cout<<"value of my bool 1st: "<<my_bool<<endl;
    my_bool = false; // re-assigning the value // false -> 0 -> 0000
    cout<<"value of my bool 2nd: "<<my_bool<<endl;
    //Anything you store in computer it gets stored in binary format?

    // 6] string
    // Syntax : string VARIABLE_NAME;
    // string def :- String is a ordered set of characters
    // chars = a to z, A to Z, 0 to 9, special characters (@#$%^)
    // String rule :- always write string value in double quotes ("")
    // string str = "Akash@10" -> 'A' 'k' 'a' 's' 'h' '@' '1' '0'
    // string size = depends on how much characters you have given to it
    // Akash@10 = number of char * char_size
    //          =  8 * 1 byte
    // size of "Akash@10" = 8 bytes

    string str = "Akash@10";
    cout<<"My string = "<<str<<endl;
    // string is very very very important topic 
    // we will separately cover this -- dedicatedly 
    // how to find length
    // access characters
    // string methods
    // problem solving based on string 
    // interview/placement ke time --- 50-60 % question will be on string/Array

    // 8] long
    // Syntax :- long VARIABLE_NAME
    // long is same as integer
    // size of long on windows =  4 Bytes
    // size of long on linux = 8 bytes
    // Different operating system works on different types of architecture
    // and these architecture decides what size will be for what data type
    long my_long = 10; //var declaration + initialization on same line
    cout<<"my_long : "<<my_long<<endl;


    // 9] long long
    // its a big brother of long/int
    // syntax :- long long VARIABLE_NAME;
    // size of long long is 8 Bytes (on every OS)  
    // why do we need this long long?
    // to store large integers

    // 2 liter ka botlle and you want to store 5 liter water into it?
    // bottles access kroge....5liter water milega?

    int num1 = 2147483647;
    int num2 = 2147483647;

    long long sum = (long long)num1 + num2;
    // while purforming this addition memory --- one space will be there for this task
    // that space is called as buffer space (its int only right, lets give them int buffer space)

    cout<<"sum : "<<sum<<endl;



    // 10] short
    // syntax :- short VARIABLE_NAME;
    // short is kinda younger version of int
    // size of short is 2 Bytes
    // Range -32768 to 32767
    short my_short = 123;
    cout<<"my_short : "<<my_short<<endl;

    // mostly you will use int only
    // less memory occupied will give higher performance
 
    return 0;
}
