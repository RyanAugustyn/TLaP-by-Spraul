Chapter 3: Solving Problems with Arrays

Vectors often used synonymously for arrays of single dimension, but here more specifically array without specified max of elements, so vectors can grow/shrink.

Arrays can: store, copy the array, retrieve and search, sort, compute statistics

Search algorith:
const int ARRAY_SIZE = 10;
int intArray[ARRAY_SIZE] = {4, 5, 9, 12, -4, 0, -57, 30987, -287, 1};
int targetValue = 12;
int targetPos = 0;
while ((intArray[targetPos] != targetValue) && (targetPos < ARRAY_SIZE))
targetPos++

Qsort is default fast sort function in standard library. To use, we have to write a comparator function.

int compareFunc(const void _ voidA, const void _ voidB) {
int _ intA = (int _)(voidA);
int _ intB = (int _)(voidB);
return *intA - *intB;
}

The above takes in two const void pointers, casts them to int pointers, and finally return a result that is positive(>), negative (<) or 0(=)

With comparator function, qsort looks like:

const int ARRAY_SIZE = 10
int intArray[ARRAY_SIZE] = {87, 28, 100, 78, 84, 98, 75, 70, 81, 68};
qsort(intArray, ARRAY_SIZE, sizeof(int), compareFunc)

The four parameters are the array, its size, size of individual elements, and the function.
Note: passing the function itself, not calling the function and passing that result (so function has no parameter list or parentheses)

Example of insertion sort:

The 2nd loop checks first if hitting beginning of array, 
then if the previous value is larger and needs to be swapped

int start = 0;
int end = ARRAY_SIZE - 1;
for (int i = start + 1; i <= end; i++) {
    for (int j = i; j > start && intArray[j-1] > intArray[j]; j--) { 
        int temp = intArray[j-1];
        intArray[j-1] = intArray[j];
        intArray[j] = temp;
    }
}
