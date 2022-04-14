#include<bits/stdc++.h>
#define mm 2000
using namespace std;

char mapa[mm][mm];
 int dias;

void mapeo(int x, int y, int& a, int& b){
    if( x>=a || x<0 || y>= b || y<0 ){
        dias++;
        return ;
    }
    if( dias==0){
        dias++;
        return ;
    }
    if( mapa[x][y]== '#' || mapa[x][y] == '*'){
        dias++;
        return;
    }
    mapa[x][y]= '*';
    dias--;
    mapeo(x+1,y,a,b);
    dias--;
    mapeo(x-1,y,a,b);
    dias--;
    mapeo(x,y+1,a,b);
    dias--;
    mapeo(x,y-1,a,b);
    




}




int main(){
    int a, b;
    int x,y;

    cin>> a>> b>> dias;

    for(int j=0; j<a; j++){
        for(int i=0; i<b; i++){
            cin>> mapa[j][i];
            if( mapa[j][i]== '$'){
                x= j;
                y= i;
            }
        }
    }

    mapeo( x, y, a, b);
    cout<<"\n";

    for(int j=0; j<a; j++){
        for(int i=0; i<b; i++){
            cout<< mapa[j][i];
        }
        cout<<"\n";
    }




    return 0;
}