#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    double x;
    double s = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s = s + x;
    }
     
    if (s / n <= 6)
    {
        double a=(pow((s / n), 2)) / 60;
        round(a);
        cout << fixed<<setprecision(3)<< a;
    }
    else
    {
        double b= 1 - (pow((10 - (s / n)), 2)) / 40;
        round(b);
        cout << fixed<<setprecision(3)<< b;

    }

    return 0;
}