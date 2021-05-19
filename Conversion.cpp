#include <bits/stdc++.h>
using namespace std;

vector<char> vec{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

unsigned long long int potencia( int i){
    unsigned long long int s= 26;
    if ( i== 1){
        return 26;
    }
    if ( i==0){
        return 1;
    }
    for(int j=1; j< i; j++){
        s *= 26;
    }
    
    return s;
}




void num_a_letras(unsigned long long int x)
{
    string pala;
    while (x != 0)
    {
        pala.push_back(vec[(x % 26) -1 ]);
        x = x / 26;
    }

    for (int i = pala.size() - 1; i >= 0; i--)
    {
        cout << pala[i];
    }
}

void letras_a_numeros(string cadena)
{
    unsigned long long int sum = 0;
    int a = cadena[0] - 64;
    int p = cadena.size() - 1;

        for (int i = 0; i < cadena.size(); i++)
        {
            a = cadena[i] - 64;
            sum += a * potencia(p);

            p--;
        }

        cout << sum;
    
}

int main()
{
    int a;
    cin >> a;

    if (a == 0)
    {
        unsigned long long int x;
        cin >> x;
        num_a_letras(x);
    }
    else
    {
        string cadena;
        cin >> cadena;
        letras_a_numeros(cadena);
    }

    return 0;
}