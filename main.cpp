#include <iostream>
using namespace std;

int main() {
    // Declarations phase I
    int m1x; int m1y; int m2x; int m2y;
    int maxrandomvalue = 9;

    // Getting user input
    cout << "\nEnter the number of rows of the first array: "; cin >> m1x;
    cout << "\nEnter the number of columns array: "; cin >> m1y;
    cout << "\nEnter the number of rows second array: "; cin >> m2x;
    cout << "\nEnter the number of columns array: "; cin >> m2y;

    // Making sure the input is valid
    if((m1y != m2x) || (m1x != m2y)){
        cout << "\nSorry! The product for the matrices you entered is not calculable!";
        return 1;
    }

    // Declarations phase II
    int m1[m1x][m1y];
    int m2[m2x][m2y];
    int lox; int loy;
    int hix;

    // Filling the arrays with random numbers
    for (int x = 0; x < m1x; x++){for (int y = 0; y < m1y; y++){
        m1[x][y] = rand()%maxrandomvalue;
    }}
    for (int x = 0; x < m2x; x++){for (int y = 0; y < m2y; y++){
        m2[x][y] = rand()%maxrandomvalue;
    }}

    // Determining los
    if (m1x < m2x){
        lox = m1x;
        hix = m2x;
    }else{
        lox = m2x;
        hix = m1x;
    }
    if (m1y < m2y){
        loy = m1y;
    }else{
        loy = m2y;
    }

    // Declarations phase III
    int result[lox][loy];

    // Filling the result array with 0s
    for (int x = 0; x < lox; x++){for (int y = 0; y < loy; y++){
            result[x][y] = 0;
    }}

    // Multiplying the matrices
    for(int i = 0; i < lox; i++){
        for(int j = 0; j < loy; j++){
            for (int k = 0; k < hix; k++){
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Printing the arrays
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