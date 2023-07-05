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
