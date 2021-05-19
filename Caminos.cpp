#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a;
    int b;

    cin >> a >> b;
    a++;
    b++;

    long long int mat[a][b] = {};

    for (int i = 0; i < a; i++)
    {
        mat[i][0] = 1;
    }

    for (int j = 0; j < b; j++)
    {
        mat[0][j] = 1;
    }

    for (int i = 1; i < a; i++)
    {
        for (int j = 1; j < b; j++)
        {
            mat[i][j] = mat[i - 1][j] + mat[i][j - 1];
        }
    }

    cout << mat[a - 1][b - 1];

    return 0;
}