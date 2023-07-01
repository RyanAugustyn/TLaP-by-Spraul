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

Now figuring out which digits to double, start with limiting length to six. Can reduce further so none of the digits is doubled. Once have that, knowing six numbers need to doulbe in positions 1, 3, and 5...or double if position is odd. So if position % 2 is 1, double.

With that accomplished, modifying to 10 or 16 digits is trivial, but if number is odd, say 7, requires additional modification because with odd number of digits now doubling every digit starting second from right, first digit on left is no longer doubled. But first even numbers...

Issue: when have you reached end of the number. If user types 'enter' what char is that (can vary by OS). Running the experiment (on my OS too), number is 10.

So solved for even number, but how to know to double even/odd positions until end of the number? An analogy, write a program that reads 10 integers, after user may ask to display count of positive or negative numbers. You could keep a count of each. For our problem, keep track of a checksum both ways (my note: maybe divide the numbers and use a counter, at end decide which to sum up individually vs double?).

Tip: generally better to take more steps than try to do too much at once. Larger number of steps isn't necessarily slower.

Tracking State

How to solve the 'decode a message' problem on p41? Break into: - read chars one at a time (like previous problem) - Convert chars representing number into int
-Perform mathematic operation based on mode and track the mode

Chopped conversion of different modes into separate pieces: punctuation may be different and can't hurt

REMEMBER to always store old code for later use

From Luhn problem know how to read 0-9 and convert to integer. What about multidigit? Start with two digit numbers; if reading 35, you first have 3 and 5, to get the correct number is (3 \* 10) + 5.

However, this does not extend. First we reduce previous code to just two variables. Hope to see a pattern with three digits, but encounter problem of needed to multiply leftmost by 100, but won't know number of digits until we reach the comma.

So create a simplified problem, so test a program with finding either 3 or 4 digits. Might try Luhn solution of tracking each possibility. Constraining ourselves to only use one int and one char variable, realize can multiply by 10 before adding last digit.

Now notice a pattern, can keep checking if reached the end, and if not multiply by 10 and add next number

Once have a solution for reading numbers, now comma delimited line. Imaging a simple scenario of 101,22 [EndOfLine], need to check for EOL or comma, and place all that code in inside a loop that only stops for EOL
