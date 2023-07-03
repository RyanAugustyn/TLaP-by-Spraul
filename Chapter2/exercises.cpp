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

int rows = 8;
int spaces = 3;
int modifier = -1;

for (int i = 0; i < rows; i++) {
    //Reset after printing row of 8 hashes, same as 2-1 now
    if(spaces == -1) {
        modifier = 1;
        spaces = 0;
    }
    int numHashes = 8 - spaces * 2;
    cout << string(spaces, ' ') << string(numHashes, '#') << "\n";
    spaces += modifier;

}






}