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
// char digit;
// cout << "Enter a one-digit number: ";
// cin >> digit;
// int sum = digit - '0';
// cout << "Is the sum of digits " << sum << "? \n";


//Solving a simplified version of the problem
// char digit;
// int checksum = 0;
// cout << "Enter a six-digit number: ";
// for (int position = 1; position <= 6; position ++) {
//     cin >> digit;
//     if (position % 2 == 0) checksum += digit - '0';
//         else checksum += doubleDigitValue (digit - '0');
//     }
// cout << "Checksum is " << checksum << ". \n";
// if (checksum % 10 == 0) {
//     cout << "Checksum is divisible by 10. Valid. \n";
// } else {
//     cout << "Checksum is not divisible by 10. Invalid. \n";
// }

//Experiment, what is the final char? 
// cout << "Enter a number: ";
// char digit;
// while (true) {
// digit = cin.get();
// cout << int(digit) << " "; // output is 49 50 51 52 10, so 10 is the char
// }


//Now accounting for any length, even number
// char digit;
// int checksum = 0;
// int position = 1;
// cout << "Enter a number with an even number of digits: ";
// digit = cin.get();
// while (digit != 10) { 
// if (position % 2 == 0) checksum += digit - '0'; //need to modify for odd length
// else checksum += 2 * (digit - '0');
// digit = cin.get();
// position++;
// }
// cout << "Checksum is " << checksum << ". \n";
// if (checksum % 10 == 0) {
// cout << "Checksum is divisible by 10. Valid. \n";
// } else {
// cout << "Checksum is not divisible by 10. Invalid. \n";
// }


//Final result
char digit;
int oddLengthChecksum = 0;
int evenLengthChecksum = 0;
int position = 1;
cout << "Enter a number: ";
digit = cin.get();
while(digit != 10){
    if(position % 2 == 0) {
        oddLengthChecksum += doubleDigitValue(digit - '0');
        evenLengthChecksum += digit - '0'; 
    }else{
        oddLengthChecksum += digit - '0';
        evenLengthChecksum += doubleDigitValue(digit - '0');
    }
    digit = cin.get();
    position++;
}
int checksum; 
//position -1 because last char is 10
if ((position -1) % 2 == 0) checksum = evenLengthChecksum; 
else checksum = oddLengthChecksum;
cout << "Checksum is " << checksum << ". \n";
if (checksum % 10 == 0) {
    cout << "Checksum is divisible by 10. Valid \n";
} else {
    cout << "Checksum is not divisible by 10. Invalid \n";
}

}