#include<iostream>

using namespace std;

int main(){
    int  m;
    int n;
    int  x;
    int  y;
    cin>> x>>y;

    m= x*(x+1)/2;
    n= y*(y+1)/2;
    x=0;
    
    for(m; m<=n; m++){
        x=x+m;
    }
    cout<<x;



    return 0;
}