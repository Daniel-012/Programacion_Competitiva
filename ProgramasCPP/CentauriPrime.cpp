#include <bits/stdc++.h>

using namespace std;

vector<char> letras = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

string candies()
{
    string kingdom = "";

    cin >> kingdom;

    char ultima = kingdom[kingdom.size() - 1];

    if (ultima == 'y' || ultima == 'Y')
    {
        // cout<< ultima;
        return kingdom + " is ruled by nobody.";
    }
    else
    {
        for (int i = 0; i < letras.size(); i++)
        {
            if (letras[i] == ultima)
            {
                return kingdom + " is ruled by Alice.";
            }
        }
        return kingdom + " is ruled by Bob.";
    }
}

int main()
{

    int t = 0;

    cin >> t;

    for (int i = 1; i <= t; i++)
    {

        cout << "Case #" << i << ": " << candies() << '\n';
    }

    return 0;
}