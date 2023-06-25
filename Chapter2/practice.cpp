#include <iostream>
using std::cin;
using std::cout;

int main() {

//Write a program using only two output statements, cout<< '#' and cout << '\n' to 
//produce a half 5x5 square

for (int row = 1; row <= 5; row++){
    for(int hasNum = 1; hasNum <= 6 - row; hasNum++) {
        cout << "#";
    }
    cout << "\n";
}

}