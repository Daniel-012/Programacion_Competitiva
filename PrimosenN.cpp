/*
*   Criba de Eratostenes - C++
*   Copyright 2014 Martin Cruz Otiniano
*   Description : Esta funcion devuelve un vector(STL) con los numeros primos hasta un rango n enviado como parametro.
*   Site        : martincruz.me
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void mostrar_criba(vector<long int> criba)
{
    cout << endl;

    for (long int i = 0; i < criba.size(); i++)
        cout << criba[i] << " ,";

}

vector<long int> criba_eratostenes(long int n)
{
    vector<long int> criba;
    long int current_primo;  // numero primo que iremos tomando del vector

    // vector con numeros desde 2 hasta n
    for (long int i = 2; i <= n; i++)
        criba.push_back(i);
        
    if (n == 2 || n == 3) 
        return criba;

    // iterador para el vector criba
    vector<long int>::iterator it = criba.begin();

    current_primo = *it;  // El primer primo es el 2

    do
    {
        vector<long int>::iterator it2 = it + 1;

        for(; it2 <= criba.end(); it2++)
            if(*it2 % current_primo == 0)
                criba.erase(it2);

        it++;
        current_primo = *it;

    } while (pow(current_primo, 2) < n);

    return criba;
}

int main()
{
    long int   n;      // Limite de criba
    vector<long int> num_primos;
    
    cout << "Numero limite de numeros: ";
    cin >> n;

    num_primos = criba_eratostenes(n);

    mostrar_criba(num_primos);

    return 0;
}