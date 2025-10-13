#include <iostream>
using namespace std;

int main() {
    int r1, c1,r2,c2;
    cout<<"Enter row and column for first matrix: ";
    cin >> r1 >> c1;
    cout<<"Enter row and column for second matrix; ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible with these dimensions." << endl;
        
    }
    else{
    int matrix1[r1][c1], matrix2[r2][c2], product[r1][c2];

    cout<<"Enter first matrix: \n";
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++)
            {cin >> matrix1[i][j];}
}
     cout<<"Enter second matrix: \n";
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++)
            {cin >> matrix2[i][j];}
}

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            {
                product[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
}
cout<<"Product is: "<<endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << product[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}
}