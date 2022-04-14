// Cabecera con todas las librerias necesarias
#include <bits/stdc++.h>

// Ejemplo de como definir una variable con un valor
#define ll long long int

// Esto nos acorta mucho usar como std::cout
using namespace std;

// Definiendo funciones externas
int candies()
{
    int n = 0, m = 0, actu = 0;
    ll sum = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> actu;
        sum += actu;
    }
    // cout<< sum % m;
    return sum % m;
}

// Funcion principal
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