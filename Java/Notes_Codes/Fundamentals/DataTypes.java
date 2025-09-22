public class DataTypes {
    public static void main(String[] args) {
        // Data Types in cpp 
        // Why we need data types ? 
        //
        // What is data type ?
        // Data type is a category of values that can be stored in a variable
        //
        // 1 kg of sugar  :- locker? polythene bag? carboard box? cloth bag?
        // 1 liter milk :- cloth bag? --- NO why? milk will spill
        //
        // different data types to store different types of values
        // What all different data types are there ?
        // 1] int :- integer :- 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

        // 1] int
        // signed integer
        // syntax : int VARIABLE_NAME;
        // once you declare a variable then the memory is allocated to the variable
        // size of int (in Java) = 4 bytes
        // 1 byte = 8 bits, so 4 bytes = 32 bits
        // range of 32-bit signed integer = -2,147,483,648 to 2,147,483,647
        int my_int;
        my_int = -1267;
        System.out.println(my_int);

        // unsigned integer
        // range of unsigned 32-bit integer is 0 to 4,294,967,295
        // Java has no unsigned int type; we use unsigned conversion for display
        int my_unsigned_int;
        my_unsigned_int = -1267;
        long unsignedValue = Integer.toUnsignedLong(my_unsigned_int);
        System.out.println(unsignedValue);

        // 2] float
        // syntax : float VARIABLE_NAME;
        // floating point value/number is fractional value/number
        // size of float is 4 Bytes
        // float stores ~6-7 decimal places of precision
        // Can i store a float value in integer? That causes truncation/data loss
        float my_float;
        my_float = 12.5678901234567890f;
        System.out.println("my_float : " + my_float);

        // 3] double
        // syntax : double VARIABLE_NAME;
        // double is also floating point (fractional) number
        // size of double is 8 Bytes
        // double stores ~15-16 decimal places of precision
        // print with 19 decimal places like C++ fixed + setprecision(19)
        double my_double;
        my_double = 12.6777711111111111;
        System.out.printf("my_float : %.19f%n", my_double);

        // 4] char
        // Syntax : char VARIABLE_NAME;
        // char is a single character
        // in Java char is a 16-bit Unicode code unit
        // character should be enclosed in single quotes  e.g. 'a', 'b', ... 'z'
        char my_char;
        my_char = 'z';
        System.out.println("my_char : " + my_char);

        // 5] bool
        // Syntax : boolean VARIABLE_NAME;
        // what values can boolean data type store?
        // In C++: true/false are printed as 1/0 by default; emulate that here
        boolean my_bool;
        my_bool = true;
        System.out.println("value of my bool 1st: " + (my_bool ? 1 : 0));
        my_bool = false;
        System.out.println("value of my bool 2nd: " + (my_bool ? 1 : 0));

        // 6] string
        // Syntax : String VARIABLE_NAME;
        // String def :- String is an ordered set of characters
        // chars = a to z, A to Z, 0 to 9, special characters (@#$%^)
        // String rule :- always write string value in double quotes ("")
        // string size = depends on how many characters you have given to it
        String str = "Akash@10";
        System.out.println("My string = " + str);

        // 8] long
        // Syntax :- long VARIABLE_NAME
        // long is same as integer conceptually, but 64-bit in Java
        long my_long = 10;
        System.out.println("my_long : " + my_long);

        // 9] long long equivalent (Java long is 64-bit)
        // why do we need this long long? to store large integers
        int num1 = 2147483647;
        int num2 = 2147483647;
        long sum = (long) num1 + num2; // prevent int overflow
        System.out.println("sum : " + sum);

        // 10] short
        // syntax :- short VARIABLE_NAME;
        // short is kinda younger version of int
        // size of short is 2 Bytes
        // Range -32768 to 32767
        short my_short = 123;
        System.out.println("my_short : " + my_short);
    }
}
