def main():
    # Data Types in cpp 
    # Why we need data types ? 

    # What is data type ?
    # Data type is a category of values that can be stored in a variable

    # 1 kg of sugar  :- locker? polythene bag? carboard box? cloth bag?
    # 1 liter milk :- cloth bag? --- NO why? milk will spill

    # different data types to store different types of values
    # What all different data types are there ?
    # 1] int :- integer :- 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

    # 1] int
    # signed integer
    # syntax : int VARIABLE_NAME; (Python has dynamic typing; using int literal)
    my_int = -1267
    print(my_int)

    # unsigned integer
    # range of unassigned integer is 0 to 4,294,967,295
    # unsigned int analogue: show 32-bit unsigned view of same bits
    my_unsigned_int = -1267
    unsigned_value = my_unsigned_int & 0xFFFFFFFF
    print(unsigned_value)

    # 2] float
    # floating point value/number is fractional value/number
    # size of float is platform-dependent in C++; Python float is C double
    # float stores about 6-7 decimal places of precision (single precision)
    my_float = 12.5678901234567890
    print("my_float :", float(my_float))

    # 3] double equivalent in Python is float (double precision)
    # double stores ~15-16 decimal places of precision
    # print with 19 decimal places like C++ fixed + setprecision(19)
    my_double = 12.6777711111111111
    print("my_float : {:.19f}".format(my_double))

    # 4] char
    # Python does not have a separate char type; single-character string is used
    my_char = 'z'
    print("my_char :", my_char)

    # 5] bool
    # what values can boolean data type store? True/False (1/0)
    # print as 1/0 like C++
    my_bool = True
    print("value of my bool 1st:", 1 if my_bool else 0)
    my_bool = False
    print("value of my bool 2nd:", 1 if my_bool else 0)

    # 6] string
    # String is an ordered set of characters; always use double quotes for string literal here
    str_val = "Akash@10"
    print("My string =", str_val)

    # 8] long (Python int is unbounded, but we mirror the value)
    my_long = 10
    print("my_long :", my_long)

    # 9] long long scenario: prevent overflow by using larger type (Python int is big-int)
    # to store large integers
    num1 = 2147483647
    num2 = 2147483647
    sum_val = num1 + num2
    print("sum :", sum_val)

    # 10] short
    # short is 2 Bytes in C++; Python int covers it automatically
    my_short = 123
    print("my_short :", my_short)


if __name__ == '__main__':
    main()
