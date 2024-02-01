Have you ever tried to make up your own number series? 
As I learned today, it's getting harder and harder to make something that produces anything interesting
Fibonacci is done to death, and the Van Eck Sequence is too popular now too
Let's develop a program that will produce and output the first 100 values in my newest sequence, the Calixtus sequence!


C(0) = 1

C(1) = 3

C(n) = IF n IS DIVISIBLE BY 3

            THEN C(n) = C(n-1) + C(n-2)

       ELSE IF n IS DIVISIBLE BY 2

            THEN C(n) = C(n-1) / 2

       ELSE

            C(n) = n

NOTE:  Think of the modulus operator for divisibility checks
NOTE:  Make sure to always use integer division where needed

Here are the first few values of the Calixtus sequence: 1 3 1 4 2 5

Develop a C++ program that fulfills the following requirements:

Generate the first 100 values in the Calixtus sequence following the sequencing rules
Store all of the first 100 values of the Calixtus sequence in an integer array (or vector)
Using your array/vector, output each of the 100 values to the screen, with tabs separating each value
Using your array/vector, output each of the 100 values to a text file, with spaces separating each value
