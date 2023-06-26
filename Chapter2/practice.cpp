#include <iostream>
using std::cin;
using std::cout;



int doubleDigitValue(int digit) {
    int doubledDigit = digit * 2;
    int sum;
    if (doubledDigit > 10) sum = 1 + doubledDigit % 10;
    else sum = doubledDigit;
    return sum;
}


int main() {

//Write a program using only two output statements, cout<< '#' and cout << '\n' to 
//produce a half 5x5 square

// for (int row = 1; row <= 5; row++){
//     for(int hasNum = 1; hasNum <= 6 - row; hasNum++) {
//         cout << "#";
//     }
//     cout << "\n";
// }

//Using only cout << "#" and cout newline, produce an ascending/descending patter
// for (int row = 1; row <= 7; row++){
//     for(int hasNum = 1; hasNum <= 4-abs(4-row); hasNum++) {
//         cout << "#";
//     }
//     cout << "\n";
// }


//Solving for the checksum problem

//First, adding doubled numbers 
// int digit;
// cout << "Enter a single digit number, 0-9: ";
// cin >> digit;
// int doubledDigit = digit * 2;
// int sum;
// if (doubledDigit >= 10) sum = 1 + doubledDigit % 10;
// else sum = doubledDigit;
// cout << "Sum of digits in doubled number: " << sum << "\n";

//making into a function (placed above to not throw error, can't define function here)

//Converting char to int 
char digit;
cout << "Enter a one-digit number: ";
cin >> digit;
int sum = digit - '0';
cout << "Is the sum of digits " << sum << "? \n";


}