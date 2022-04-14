#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a;
    int c = 0;

    cin >> n;

    if (n % 2 == 1)
    {
        a = n / 2;
        c = 1;
    }
    else
    {
        a = n / 2;
        c = 0;
    }

    int j = a;
    int sum = 0;

    for (int i = a; i >= 1; i--)
    {
        j = i;
        sum = 0;
        while (sum < n && j >= 1)
        {
            sum += j;
            j--;
        }
        if (sum == n)
        {
            c++;
        }
        if (j <= 1)
        {
            break;
        }
    }

    cout << c + 1;

    return 0;
}