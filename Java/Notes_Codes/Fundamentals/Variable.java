// Variables in cpp
// Why we need/use variables 
// What is variable declaration 
// What is variable initialization 

/*
You can add 
a 
multi line 
comment here
*/

public class Variable {
    // Our code always starts from main function
    // compiler is : it only knows main function (The point of entry of the program)
    public static void main(String[] args) {
        
        // Variables :- The variables is container which is used to store data in the program 
        int var;   // declaration of variable size of int is 4 bytes (Java int is 32-bit)
        // At the time of variable declaration the memory is allocated to the variable
        // At line 22 what happens is : A container/piece of memory gets allocated to the variable 
        var = 10;  // initialization of variable

        // Why do we need variables ? 
        // i want to perform 4 operations : addition, subtraction, multiplication, division 
        // on day 1 rahul came and said var1 is 10 and var2 is 20 
        // on day 2 rahul came and said var1 is 30 and var2 is 20  
        int var1 = 30;
        int var2 = 20;

        int add = var1 + var2;
        int sub = var1 - var2;
        int mul = var1 * var2;
        int div = var1 / var2;  // integer division
        // what is i had 100's of such operations ?  

        // System.out.println is a inbuilt function in Java which is used to print the data on the screen
        System.out.println(add);
        System.out.println(sub);
        System.out.println(mul);
        System.out.println(div);
    }
}
