public class Flowchart {
    public static void main(String[] args) {
        // learn the structure of this code

        // The aim here is to learn concepts and logic building for placements
        // In Java we don't use <bits/stdc++.h> or namespace like C++, but we can use System.out for IO

        // code execution starts from main function
        System.out.println("Helloc World");
        // System.out.println :- inbuilt function (it prints data on the screen)
        // println prints a new line at the end
        // return is implicit for void main in Java

        // Flow chart :- Flow of execution of the code
        // oval :- start or end
        // rectangle :- operation
        // diamond :- condition + decision making
        // parallelogram :- input/output
        // arrow :- flow

        int a = 10;
        int b = 20;
        // we are taking inputs    :- parallelogram
        int sum = a + b;   // we are performing operation :- rectangle
        System.out.println(sum);   // we are printing the output :- parallelogram

        // return 0; in C++ indicates successful termination; Java main returns void
    }
}
