#include <bits/stdc++.h>

using namespace std;

void tests()
{
    string initial = "";
    string joined = "";
    int medidador = 0;
    int count = 0;

    cin >> initial;
    cin >> joined;

    if (joined.size() < initial.size())
    {
        cout << "IMPOSSIBLE\n";
        return;
    }
    int i = 0;
    for (i = 0; i < initial.size(); i++)
    {

        while (joined[medidador] != initial[i] && medidador < joined.size())
        {
            medidador++;
            count++;
            if (medidador == joined.size() - 1 && joined[medidador] != initial[i])
            {
                cout << "IMPOSSIBLE\n";
                return;
            }
        }
        if (medidador < joined.size())
        {
            medidador++;
        }
    }

   // cout << "Si\n" << i << ' ' << medidador<<'\n';

    

    if ((medidador - count) == initial.size())
    {
        if (medidador < joined.size())
    {
        count += (joined.size() - medidador);
    }
        cout << count << '\n';
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }

    return;
}

int main()
{

    int t = 0;

    cin >> t;

    for (int i = 1; i <= t; i++)
    {

        cout << "Case #" << i << ": ";
        tests();
    }

    return 0;
}