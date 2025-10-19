#include <iostream>
using namespace std;

int main() {

    int matrix[5][5];
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

}
