#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

bool es_posible(vector<lli>& chocolates, lli cantidad) {
    lli chocolate_total = 0;
    for (int i = 0; i < chocolates.size(); i++) {
        chocolate_total += chocolates[i];
        chocolate_total -= cantidad;
        if (chocolate_total < 0){
            return false;
        } 
    }
    return true;
}

lli upper_bound(vector<lli>& valores, lli ini, lli fin) {
    while (ini < fin) {
        lli mitad = ini + (fin - ini + 1) / 2;
        if (es_posible(valores, mitad) == true) {
            ini = mitad;
        }
        else {
            fin = mitad - 1;
        }
    }
    if (es_posible(valores, ini) == true) {
        return ini;
    }
    return -1;
}

int main() {
    lli dias;
    cin >> dias;

    vector<lli> chocolates(dias);

    lli chocolate_total = 0;

    for (int i = 0; i < chocolates.size(); i++) {
        cin >> chocolates[i];
        chocolate_total += chocolates[i];
    }

    lli cantidad_diaria_maxima = chocolate_total / dias + 1;
 

    cout << upper_bound(chocolates, 0, cantidad_diaria_maxima)  << "\n";

    return 0;
}