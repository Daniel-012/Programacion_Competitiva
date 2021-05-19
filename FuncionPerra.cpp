#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
lli s = 0;

lli f(lli n, lli &k)
{
    s = 0;
    if (n == 1)
    {
        return 1;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s += pow(i, k);
            s = s % 1000000000;
        }
    }

    s += pow(n, k);
    // cout << s << " ";

    return s;
}

lli g(lli n, lli &k)
{
    lli suma = 0;
    for (int i = 1; i <= n; i++)
    {
        suma += f(i, k) % 1000000000;
        // cout<<suma<<" ";
    }

    return suma % 1000000000;
}

int main()
{
    lli n;
    lli k;

    cin >> n >> k;

    cout << g(n, k);

    return 0;
}