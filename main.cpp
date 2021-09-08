#include <iostream>
using namespace std;

int main() {
    // Initializing phase I
    int m1x; int m1y; int m2x; int m2y;
    int maxrandomvalue = 99;

    // Getting user input
    cout << "\nEnter the number for the first x value: "; cin >> m1x;
    cout << "\nEnter the number for the first y value: "; cin >> m1y;
    cout << "\nEnter the number for the second x value: "; cin >> m2x;
    cout << "\nEnter the number for the second y value: "; cin >> m2y;

    // Making sure the input is valid
    if((m1y != m2x) || (m1x != m2y)){
        cout << "\nSorry! The dot product for the matrices you entered is not calculable!";
        return 1;
    }

    // Initializing phase II
    int m1[m1x][m1y];
    int m2[m2x][m2y];
    int lox; int loy;
    int hix; int hiy;

    // Filling the arrays with random numbers
    for (int x = 0; x < m1x; x++){for (int y = 0; y < m1y; y++){
        m1[x][y] = rand()%maxrandomvalue;
    }}
    for (int x = 0; x < m2x; x++){for (int y = 0; y < m2y; y++){
        m2[x][y] = rand()%maxrandomvalue;
    }}

    // Determining his and los
    if (m1x < m2x){
        lox = m1x;
        hix = m2x;
    }else{
        lox = m2x;
        hix = m1x;
    }
    if (m1y < m2y){
        loy = m1y;
        hiy = m2y;
    }else{
        loy = m2y;
        hiy = m1y;
    }

    // Initializing phase III
    int result[lox][loy];

    // multiplying the matrices DOES NOT WORK
    for(int x = 0; x > hix; x++){ for(int y = 0; y > hiy; y++){ for(int z = 0; z > lox; z++){
        result[x][y] = m1[x][z]*m2[z][y];
    }}}

    // Printing
    cout << "Matrix 1: \n";
    for (int x = 0; x < m1x; x++){
        for (int y = 0; y < m1y; y++){
            cout << m1[x][y] << " ";
        }
        cout << "\n";
    }
    cout << "Matrix 2: \n";
    for (int x = 0; x < m2x; x++){
        for (int y = 0; y < m2y; y++){
            cout << m2[x][y] << " ";
        }
        cout << "\n";
    }
    cout << "Result: \n";
    for (int x = 0; x < lox; x++){
        for (int y = 0; y < loy; y++){
            cout << result[x][y] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
    return 0;
}
