#include <iostream>
using namespace std;

int main() {
    // Initializing phase I
    int m1x; int m1y; int m2x; int m2y;
    int maxrandomvalue = 99;

    // Getting user input
    cout << "\nEnter the number of rows of the first array: "; cin >> m1x;
    cout << "\nEnter the number of columns array: "; cin >> m1y;
    cout << "\nEnter the number of rows second array: "; cin >> m2x;
    cout << "\nEnter the number of columns array: "; cin >> m2y;

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
        hiy = m2y;
    }else{
        loy = m2y;
        hiy = m1y;
    }

    // Initializing phase III
    int result[lox][loy];

    // Filling the result array with 0s
    for (int x = 0; x < lox; x++){for (int y = 0; y < loy; y++){
            result[x][y] = 0;
    }}

    for(int x = 0; x < lox; x++){for(int y = 0; y < loy; y++){
        // here we are essentially looping through result
        // mulval is the value of two integers in m1 and m2 multiplied together
        int mulval = 0;

        // this is the tricky part How do I do this without going out of bounds?
        for(int i = 0; i < hix; i++){for(int j = 0; j < hiy; j++){
            mulval += m1[i][j]*m2[j][i];
            // is there a way to do: if not in bounds; skip?

        }}
        result[x][y] = mulval;
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
