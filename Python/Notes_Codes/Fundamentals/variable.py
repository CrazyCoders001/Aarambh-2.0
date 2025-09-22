def main():
    # Variables in cpp
    # Why we need/use variables 
    # What is variable declaration 
    # What is variable initialization 

    """
    You can add 
    a 
    multi line 
    comment here
    """

    # Our code always starts from main function
    # compiler is : it only knows main function (The point of entry of the program)

    # Variables :- The variables is container which is used to store data in the program 
    var = None   # declaration analogue (Python binds name on assignment)
    # At the time of variable declaration the memory is allocated to the variable
    # At line 22 what happens is : A container/piece of memory gets allocated to the variable 
    var = 10  # initialization of variable

    # Why do we need variables ? 
    # i want to perform 4 operations : addition, subtraction, multiplication, division 
    # on day 1 rahul came and said var1 is 10 and var2 is 20 
    # on day 2 rahul came and said var1 is 30 and var2 is 20  
    var1 = 30
    var2 = 20

    add = var1 + var2
    sub = var1 - var2
    mul = var1 * var2
    div = var1 // var2  # integer division
    # what is i had 100's of such operations ?  

    # print is a built-in function in Python which is used to print the data on the screen
    print(add)
    print(sub)
    print(mul)
    print(div)


if __name__ == '__main__':
    main()
