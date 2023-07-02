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
int rows = 4;
int spaces = 0;

for (int i = 0; i < rows; i++) {
    int numHashes = 8 - spaces * 2;
    cout << string(spaces, ' ') << string(numHashes, '#') << "\n";
    spaces++;
}

//Clean up mess of notes for next time, 2-1 is now correct

// int currentHashes = 8;
// int numSpaces = 1;

// for(int i = 0; i < currentHashes; i++){
//         cout << (numSpaces, " ") << "#"; }

// while (currentHashes >= 2){
//     for(int i = 0; i < currentHashes; i++){
//         cout << string(numSpaces, ' ') << "#"; 
//     }
//     cout << "\n";
//     currentHashes -= - 2;
//     numSpaces += 1;
// }


//2-2
//Start with 2 hashes, had 2 until 8, have 2 rows of 8, 
//then start subtacting back to 2

//Above does bottom half, maybe change the 2 to a value
//that turns negative when reaching 8

//Did first wrong, saw wrong shape
//After experimenting for a while, realized it is printing both emppty and hashes, so
//First row is 6 empty, 2 hash, next 4 empty 4 hash
//Or could see 3 empty on left, then 2, 2 empty then 4, 1 empty then 6, 8, 8, then decrease...
//SO number of empty spaces is (8 - currentHashes/2)
//OR number of hashes is (8 - leftEmptySpaces * 2)
// int targetNum = 8;
// int increment = 2;
// int currentHashes = 2;
// int leftEmptySpaces = 3;
// while (leftEmptySpaces >= 0){
//     for(int i = 0; i < 8 - (leftEmptySpaces * 2); i++){
//         cout << "#"; 
//     }
//     cout << "\n";
//     if(currentHashes == targetNum){
//         increment *= -1;
//         targetNum = 2;
        
//     }
//     currentHashes = currentHashes + increment;
// }




}