#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int a;
    long long int antResul = 1;
    long long int result = 1;
    long long int pass = 0;
    cin >> a;
    if (a != 0)
    {
        long long int newA = a % 60;

        int suma = 2;
        for (long long int i = 3; i <= newA; i++)
        {
            pass = antResul + result;
            antResul = result % 10;
            result = pass % 10;
            suma += (result % 10);
            suma = suma % 10;
            // cout<< i << "  -   "<<  result<< '\n';
        }
        if (newA == 0)
        {
            cout << 0;
        }
        else if (newA == 1)
        {
            cout << 1;
        }
        else if (newA == 2)
        {
            cout << 2;
        }
        else
        {
            cout << suma << '\n';
        }
    }
    else
    {
        cout << 0;
    }

    return 0;
}