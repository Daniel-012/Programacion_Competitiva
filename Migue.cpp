#include<iostream>

using namespace std;

int main(){
    int d,m,a;
    int d2, m2, a2;
    cin>> d>> m>> a>> d2>> m2>> a2;

    cout<< (d2-d)+((m2-m)*31)+ ((a2-a)*365);




    return 0;
}