#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float m;
    float s;

    cin >> m >> s;

    cout << fixed << setprecision(2)<< (m / (m+s)) * 100 << "%";

    return 0;
}