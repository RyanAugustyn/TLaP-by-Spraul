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
for (int i = start + 1; i <= end; i++) { //if one element array, already in order
    for (int j = i; j > start && intArray[j-1] > intArray[j]; j--) { 
        int temp = intArray[j-1];
        intArray[j-1] = intArray[j];
        intArray[j] = temp;
    }
}

Final operation to keep in mind, looking at every array element before returning value (compute statistics) by looping through 


Practice problem, determine mode of data set (if multiple exist, any may be chosen):

Might try moving left to right, saving most seen value, but doesn't work because don't know when to declare the mode. 

If order first, and see values next to each other. Some pseudocode: 

int mostFrequent = ?;
int highestFrequency = ?;
int currentFrequency = 0;
for (int i = 0; i < ARRAY_SIZE; i++) {
    currentFrequency++;
    if (surveyData[i] IS LAST OCCURRENCE OF A VALUE) {
        if (currentFrequency > highestFrequency) {
            highestFrequency = currentFrequency;
            mostFrequent = surveyData[i];
        }
    currentFrequency = 0;
    }
}

Thinking through...

int mostFrequent;
int highestFrequency = 0; 
int currentFrequency = 0;
for (int i - 0; i < ARRAY_SIZE; i++) {
    currentFrequency++;
    //if(surveyData[i] IS LAST OCCURANCE OF A VALUE) (leave in as comment for code)
    if (i == ARRAY_SIZE - 1 || surveyData[i] != surveyData[i + 1]) {
        if (currentFrequency > highestFrequency) {
            highestFreqency = currentFrequency;
            mostFrequent = surveyData[i];
        }
        currentFrequency = 0;
    }
}

Need sorted, so add in qsort at beginning. 

Refactoring: code works, but performance issues with huge arrays. To make it more efficient, can use a histogram (graph showing how often different values appear). To do so, store in a 10-element array, how often values 1-10 appear in survey data. Code to make histogram: 

const int MAX_RESPONSE = 10;
int histogram[MAX_RESPONSE];
for (int i = 0; i < MAX_RESPONSE; i++) {
    histogram[i] = 0;
}
for (int i = 0; i < ARRAY_SIZE; i++){
    histogram[surveyData[i]-1]++;
}

Now we search for largest value in histogram array: 

int mostFrequent = 0; //position of highest value
for(int i = 1; i < MAX_RESPONSE; i++){
    if (histogram[i] > histogram[mostFrequent]) mostFrequent = i;
}
mostFrequent++; //value is array + 1

Remember, code that turns out to be a dead end is valuable for learning and may be usable down the road



Arrays of Fixed Data: in most array problems data comes from external (user, server, disk) sources, but can be useful to create arrays that never change values, such as replacing a whole block of control statements. 

In the 'Decode a Message' problem, used a switch statement to translate decoded input (in range 1-8) to appropriate character. Instead of a bunch of long switch statements, can do the following: 

const char punctuation[8] = {'!', '?', ',', '.', ' ', ';', '"', '\''};
outputcharacter = punctuation[number - 1];

Can go in reverse order to encode a message

const int ARRAY_SIZE = 8;
int targetPos = 0;
while (punctuation[targetPos] != targetValue && targetPos < ARRAY_SIZE)
    targetPos++;
int punctuationCode = targetPos + 1; //offset correctly in array

Imagine encoding business license costs, with 4 categories and thresholds for each

const int NUM_CATEGORIES = 4;
const double categoryThresholds[NUM_CATEGORIES] = 
    {0.0, 50000.0, 150000.0, 500000.0};
const double licenseCost[NUM_CATEGORIES] = 
    {50.0, 200.0, 1000.0, 5000.0}; 
category = 0;
while (category < NUM_CATEGORIES && 
    categoryThresholds[category] <= grossSales) {
        category++;
    }
cost = licenseCost[category - 1];


Non-scalary arrays: dealing with arrays of compound data (struct or class) will complicate code, but not necessarily thinking about processing. 

Consider finding highest of set of student grades...

struct student {
    int grade;
    int studentID;
    string name;
};

const int ARRAY_SIZE = 10;
student studentArray[ARRAY_SIZE] = {
    {87, 10001, "Fred"},
    {28, 10002, "Tom"},
    {100, 10003, "Alistair"},
    {78, 10004, "Sasha"},
    {84, 10005, "Erin"},
    {98, 10006, "Belinda"},
    {75, 10007, "Leslie"},
    {70, 10008, "Candy"},
    {81, 10009, "Aretha"},
    {68, 10010, "Veronica"}
};

int highest = studentArray[0].grade;
for (int i = 1; i < ARRAY_SIZE; i++) {
    if(studentArray[i].grade > highest) highest = studentArray[i].grade;
}

If looking for name, rather than finding and running again, keep track of name

int highPosition = 0; 
for (int i = 1; i < ARRAY_SIZE; i++) {
    if (studentArray[i].grade > studentArray[highPosition].grade) {
        highPosition = i;
    }
}


