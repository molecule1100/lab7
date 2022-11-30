#include<iostream>
#include<func.hpp>

using namespace std;

void addMat(int mat[100][100], int columns, int rows)
{
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cin >> mat[i][j];
        }
    }
}


bool isZeroSum(int mat[100][100], int columns, int rows)
{
    bool res = false;

    for (int i = 0; i < columns; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += mat[i][j];
        }
        if (sum == 0)
        {
            res = true;
        }
    }
    return res;
}


bool isPrime(int N)
{
    bool res = true;

    switch (N)
    {
    case 0: res = false;
        break;
    case 1: res = false;
        break;
    case 2: res = true;
        break;
    case 3: res = true;
        break;
    default:
        for (int i = 2; i < N; i++)
        {
            if (0 == (N % i))
            {
                res = false;
                break;
            }
        }
    }

    return res;
}


void sortMat(int mat[100][100], int columns, int rows)
{
    int temp = 0;
    for (int k = 0; k < rows; k++)
    {
        for (int i = 0; i < columns - 1; i++)
        {
            for (int j = 0; j < columns - i - 1; j++)
            {
                if (mat[j + 1][k] >= mat[j][k])
                {
                    temp = mat[j][k];
                    mat[j][k] = mat[j + 1][k];
                    mat[j + 1][k] = temp;
                }
            }
        }
    }
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}


void outputMat(int mat[100][100], int columns, int rows)
{
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}