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


// //Final result
// char digit;
// int oddLengthChecksum = 0;
// int evenLengthChecksum = 0;
// int position = 1;
// cout << "Enter a number: ";
// digit = cin.get();
// //check for end char
// while(digit != 10){ 
//     //track both possibilities to end
//     if(position % 2 == 0) {
//         oddLengthChecksum += doubleDigitValue(digit - '0');
//         evenLengthChecksum += digit - '0'; 
//     }else{
//         oddLengthChecksum += digit - '0';
//         evenLengthChecksum += doubleDigitValue(digit - '0');
//     }
//     digit = cin.get();
//     position++;
// }
// int checksum; 
// //position -1 because last char is 10
// if ((position -1) % 2 == 0) checksum = evenLengthChecksum; 
// else checksum = oddLengthChecksum;
// cout << "Checksum is " << checksum << ". \n";
// if (checksum % 10 == 0) {
//     cout << "Checksum is divisible by 10. Valid \n";
// } else {
//     cout << "Checksum is not divisible by 10. Invalid \n";
// }




//Starting New problem

// //Reading 2 char string and cast into int
// cout << "Enter a two-digit number: ";
// char digitChar1 = cin.get();
// char digitChar2 = cin.get();
// int digit1 = digitChar1 - '0';
// int digit2 = digitChar2 - '0';
// int overallNumber = digit1 * 10 + digit2;
// cout << "That number as an integer: " << overallNumber << "\n";


//Reduced 
// cout << "Enter a two-digit number: ";
// char digitChar = cin.get();
// int overallNumber = (digitChar - '0') * 10;
// digitChar = cin.get();
// overallNumber += (digitChar - '0');
// cout << "That number as an integer: " << overallNumber << "\n";


//Problem checking between 3 or 4 digit number
// cout << "Enter a three-digit or four-digit number: ";
// char digitChar = cin.get();
// int threeDigitNumber = (digitChar - '0') * 100;
// int fourDigitNumber = (digitChar - '0') * 1000;
// digitChar = cin.get();
// threeDigitNumber += (digitChar - '0') * 10;
// fourDigitNumber += (digitChar - '0') * 100;
// digitChar = cin.get();
// threeDigitNumber += (digitChar - '0');
// fourDigitNumber += (digitChar - '0') * 10;
// digitChar = cin.get();
// if (digitChar == 10) {
// cout << "Numbered entered: " << threeDigitNumber << "\n";
// } else {
// fourDigitNumber += (digitChar - '0');
// cout << "Numbered entered: " << fourDigitNumber << "\n";
//}

//Constraied ourselves with only having one integer and one char, what now? 
//Four digit number is 10 times 3 digit, so can just track one and multiply by 10
// cout << "Enter a three-digit or four-digit number: ";
// char digitChar = cin.get();
// int number = (digitChar - '0') * 100;
// digitChar = cin.get();
// number += (digitChar - '0') * 10;
// digitChar = cin.get();
// number += (digitChar - '0');
// digitChar = cin.get();
// if (digitChar == 10) {
// cout << "Numbered entered: " << number << "\n";
// } else {
// number = number * 10 + (digitChar - '0');
// cout << "Numbered entered: " << number << "\n";
// }

//With 5 numbers start to see pattern
// cout << "Enter a number with three, four, or five digits: ";
// char digitChar = cin.get();
// int number = (digitChar - '0') * 100;
// digitChar = cin.get();
// number += (digitChar - '0') * 10;
// digitChar = cin.get();
// number += (digitChar - '0');
// digitChar = cin.get();
// if (digitChar == 10) {
//     cout << "Numbered entered: " << number << "\n";
// } else {
//     number = number * 10 + (digitChar - '0');
//     digitChar = cin.get();
//     if (digitChar == 10) {
//         cout << "Numbered entered: " << number << "\n";
//     } else {
//         number = number * 10 + (digitChar - '0');
//         cout << "Numbered entered: " << number << "\n";
//     }
// }


//Write a loop to keep checking and multiply by 10 if not end char (10 on this OS)
// cout << "Enter a number with as many digits as you like: ";
// char digitChar = cin.get();
// int number = (digitChar - '0');
// digitChar = cin.get();
// while(digitChar != 10) {
//     number = number * 10 + (digitChar - '0');
//     digitChar = cin.get();
// }
// cout << "Number entered: " << number << "\n";


//Read full comma line 
// char digitChar;
//     do {
//         digitChar = cin.get();
//         int number = (digitChar - '0');
//         digitChar = cin.get();
//         while ((digitChar != 10) && (digitChar != ',')) {
//             number = number * 10 + (digitChar - '0');
//             digitChar = cin.get();
//         }
//         cout << "Numbered entered: " << number << "\n";
// } while (digitChar != 10);

//Convert to uppercase
// cout << "Enter a number 1-26: ";
// int number;
// cin >> number;
// char outputCharacter;
// outputCharacter = number + 'A' - 1;
// cout << "Equivalent symbol: " << outputCharacter << "\n";


//Punctuation table
// cout << "Enter a number 1-8: ";
// int number;
// cin >> number;
// char outputCharacter;
// switch (number) {
// case 1: outputCharacter = '!'; break;
// case 2: outputCharacter = '?'; break;
// case 3: outputCharacter = ','; break;
// case 4: outputCharacter = '.'; break;
// case 5: outputCharacter = ' '; break;
// case 6: outputCharacter = ';'; break;
// case 7: outputCharacter = '"'; break;
// case 8: outputCharacter = '\''; break;
// }
// cout << "Equivalent symbol: " << outputCharacter << "\n";


//Using mode switch with enumerated type
// enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};
// int number;
// modeType mode = UPPERCASE;
// cout << "Enter some numbers ending with -1: ";
// do {
//     cin >> number;
//     cout << "Number read: " << number;
//     switch (mode) {
//         case UPPERCASE:
//             number = number % 27;
//             cout << ". Modulo 27: " << number << ". ";
//             if (number == 0) {
//                 cout << "Switch to LOWERCASE";
//                 mode = LOWERCASE;
//         }
//         break;
//         case LOWERCASE:
//             number = number % 27;
//             cout << ". Modulo 27: " << number << ". ";
//             if (number == 0) {
//                 cout << "Switch to PUNCTUATION";
//                 mode = PUNCTUATION;
//         }
//         break;
//         case PUNCTUATION:
//             number = number % 9;
//             cout << ". Modulo 9: " << number << ". ";
//             if (number == 0) {
//                 cout << "Switch to UPPERCASE";
//                 mode = UPPERCASE;
//             }
//             break;
//     }
//     cout << "\n";
// } while (number != -1);




//Solved 'Decode a Message' problem
char outputCharacter;
enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};
modeType mode = UPPERCASE;
char digitChar;
do {
    digitChar = cin.get();
    int number = (digitChar - '0');
    digitChar = cin.get();
    while ((digitChar != 10) && (digitChar != ',')) {
        number = number * 10 + (digitChar - '0');
        digitChar = cin.get();
    }
    switch (mode) {
        case UPPERCASE:
            number = number % 27;
            outputCharacter = number + 'A' - 1;
            if (number == 0) {
                mode = LOWERCASE;
                continue;
            }
        break;
        case LOWERCASE:
            number = number % 27;
            outputCharacter = number + 'a' - 1;
            if (number == 0) {
                mode = PUNCTUATION;
                continue;
            }
        break;
        case PUNCTUATION:
            number = number % 9;
            switch (number) {
            case 1: outputCharacter = '!'; break;
            case 2: outputCharacter = '?'; break;
            case 3: outputCharacter = ','; break;
            case 4: outputCharacter = '.'; break;
            case 5: outputCharacter = ' '; break;
            case 6: outputCharacter = ';'; break;
            case 7: outputCharacter = '"'; break;
            case 8: outputCharacter = '\''; break;
            }
            if (number == 0) {
            mode = UPPERCASE;
            continue;
            }
        break;
    }
    cout << outputCharacter;
} while (digitChar != 10);
cout << "\n";

}