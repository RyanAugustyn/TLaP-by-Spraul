#include <iostream>
using std::cin;
using std::cout;
using std::string;


//All problems must only use two output statements, one that outputs the hash, and one that
//outputs the newline char. 


int main() {
//2-1
//starting with 8 hashes, decrease by 2 for each row and add 1 space
//Can't find way to use only cout << '#' and cout << '\n', need another cout for spacing
// int rows = 4;
// int spaces = 0;

// for (int i = 0; i < rows; i++) {
//     int numHashes = 8 - spaces * 2;
//     cout << string(spaces, ' ') << string(numHashes, '#') << "\n";
//     spaces++;
// }

//2-2
//Start with 2 hashes, add 2 until 8, have 2 rows of 8, then start subtacting back to 2
//When 8 hashes, stop p

// int rows = 8;
// int spaces = 3;
// int modifier = -1;

// for (int i = 0; i < rows; i++) {
//     //Reset after printing row of 8 hashes, same as 2-1 now
//     if(spaces == -1) {
//         modifier = 1;
//         spaces = 0;
//     }
//     int numHashes = 8 - spaces * 2;
//     cout << string(spaces, ' ') << string(numHashes, '#') << "\n";
//     spaces += modifier;

// }


//2-3
//Printing a star shape: 
//row 1 positions 1 and 14 hashes (rest spaces, 12 inner)
//row 2 positions 2,3 and 12,13 hashes (8 inner spaces)
//row 3 positions 3,4,5 and 10,11,12 (4 inner spaces)
//row 4 positions 4-12 hashes, then repeat in reverse (0 inner spaces)

//Taking idea of having a modifier that reverses from above and doing that check when
//value goes out of range, reset everything and simply increment the left and inner spaces, 
//plus the hashes for each line 

int rows = 8;
int leftSpaces = 0;
int innerSpaces = 12;
int numHashes = 1;
int leftSpaceModifier = 1;
int innerSpaceModifier = -4;
int hashesModifier = 1;

for(int i = 0; i < rows; i++){
    if(innerSpaces < 0){
        numHashes = 4;
        innerSpaces = 0;
        leftSpaces = 3;
        leftSpaceModifier *= -1;
        innerSpaceModifier *= -1;
        hashesModifier *= -1;
    }
    cout << string(leftSpaces, ' ') << string(numHashes, '#') 
    << string(innerSpaces, ' ') << string(numHashes, '#') << "\n";
leftSpaces += leftSpaceModifier;
innerSpaces += innerSpaceModifier;
numHashes += hashesModifier;


}




}