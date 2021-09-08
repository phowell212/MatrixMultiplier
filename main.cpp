#include <iostream>
using namespace std;

int main() {
    // Initializing phase 1
    int m1x; int m1y; int m2x; int m2y;
    int maxrandomvalue = 100;

    // Getting user input
    cout << "\nEnter the number for the first x value: "; cin >> m1x;
    cout << "\nEnter the number for the first y value: "; cin >> m1y;
    cout << "\nEnter the number for the second x value: "; cin >> m2x;
    cout << "\nEnter the number for the second y value: "; cin >> m2y;

    // Initializing phase 2
    int m1[m1x][m1y];
    int m2[m2x][m2y];

    // Filling the first array
    for (int x = 0; x < m1x; x++){for (int y = 0; y < m1y; y++){
        m1[x][y] = rand()%maxrandomvalue;
    }}

    // Filling the second array
    for (int x = 0; x < m2x; x++){for (int y = 0; y < m2y; y++){
            m2[x][y] = rand()%maxrandomvalue;
        }}

    // Determining the
    return 0;
}
