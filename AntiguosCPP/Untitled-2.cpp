#include <iostream>
#include <algorithm>
 
using namespace std;
 
/*
Método para hallar el Máximo Común Divisor
*/
int mcd(int num1, int num2) {
    int mcd = 0;
    int a = std::max(num1, num2);
    int b = std::min(num1, num2);
    do {
        mcd = b;
        b = a%b;
        a = mcd;
    } while(b!=0);
    return mcd;
}
 
/*
Método para hallar el Mínimo Común Múltiplo
*/
int mcm(int num1, int num2) {
    int mcm = 0;
    int a = std::max(num1, num2);
    int b = std::min(num1, num2);
    mcm = (a/mcd(a,b))*b;
    return mcm;
}
 
/*
Método principal
*/
int main() {
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        int num1, num2;
        cin >> num1>> num2;
        int maxi= min(num1, num2);
        cout <<mcm(num1, num2)/maxi<<endl;
    }
    return 0;
}