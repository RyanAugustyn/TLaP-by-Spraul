#include <iostream>
using std::cin;
using std::cout;

//All problems must only use two output statements, one that outputs the hash, and one that
//outputs the newline char. 


int main() {
//2-1
//starting with 8 hashes, decrease by 2 for each row

int startNum = 8;
while (startNum >= 2){
    for(int i = 0; i < startNum; i++){
        cout << "#"; 
    }
    cout << "\n";
    startNum = startNum - 2;
}






}