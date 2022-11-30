#include<iostream>
#include<func.hpp>

using namespace std;

int main()
{
    int mat[100][100];
    int columns;
    int rows;
    bool flag = false;
    cin >> columns >> rows;
    addMat(mat, columns, rows);
    

    for (int i = 0; i < columns; i++)
    {
        cout << endl;
        for (int j = 0; j < rows; j++)
        {
            if (isPrime(mat[i][j]))
            {
                sortMat(mat, columns, rows);
                break;
            }    
            if (isZeroSum(mat, columns, rows))
            {
                sortMat(mat, columns, rows);
                break;
            }
        }
    }

    return 0;
}