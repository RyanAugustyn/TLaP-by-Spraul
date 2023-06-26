Pure Puzzles

For problem 'print a half 5x5 triangle with hashes', one way to reduce would be starting by making a square. Then write one loop, then repeat that loop again.

Now recognize need an expression that is 5 when row is 1, 4 when row is 2, etc. If multiply row by -1 it gives the wrong numbers, but it's always off by 6 from desired value. so 6 - row. See practice for example

To produce a sidways triangle, already know how to display a row using a particular loop, display a series of rows using nested loops, create varying number of rows using algebra, and how to discover that algebra expression through experimentation

Luhn formula is used to validate numbers. Using a number, double the value of every other digit, then add the values of the individual digits together(if doubled num as two, add the digits individually). Number is valid if sum is divisible by 10.

Writing a program to determine number validity: start with number 176248, each other digit starting from right is doubled and added, so (1+6) + 4 + (4) + 6 + (1+4) + 1 = checksum of 27, ergo check digit is 3 to make 30 (checksum of final should be divisible by 10).

To solve: know which digits to double (reading one at a time), treat digits 10 and greater individually, know we reached end of th enumber, read each digit separtely.

Start with digits 10 and greater. For digits 0-9, max value is 18, so either doubled value is just the number (<5) or add 1.

Next work on reading individual digits, as will allow to type the identification number naturally when testing other parts of the problem. Because length is arbitrary and int might not hold, will have to read character by character.

Using cin.get() because the basic extractor skips whitespace, which will cause issues later. But returns a char type, need to convert to an integer. The ASCII char for 0 is 48, and 0-9 is always 48 less than its char code. so sum=digit - '0'
