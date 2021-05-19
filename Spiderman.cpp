#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    lli n, m, k, x, y, a, c = 0;

    cin >> n >> m >> k >> x >> y;

    a = m;

    lli maxi= max(x, y);
    lli mini= min(x, y);


    while (k >= mini * m && a != 0)
    {
        k -= mini * m;
        c += m;
        if (k >= maxi && n != 0)
        {
            k -= maxi;
            c++;
        }
        a--;
    }

    //cout<<k<<"\n";

    a= c + k/mini + 1 ;

    cout<<a;

    return 0;
}