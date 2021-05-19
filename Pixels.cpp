#include<bits/stdc++.h>

using namespace std;

bool revi[300][300]={};
char mapa[300][300]={};
int s=0;
int n, m;

int cuadro( int& x, int& y){
    s=0;
    int i=x; 
    int j=y;
    while( mapa[i][j]== 'X' && i<n && j<m){
        j= y;
        while(mapa[i][j]== 'X' && i<n && j<m){
            revi[i][j]=true;
            s++;
            j++;
        }
         j= y;
        i++;
    }
   

    //cout<<s<<"] ";

    return s;

}




int main(){
    ios_base:: sync_with_stdio(0);
    cin.tie();

    int maxi=0, mini= 90000000;
    cin>> n>> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin>> mapa[i][j];
        }
    }
    int num;

    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if( mapa[i][j]== 'X'){
                if( revi[i][j]){
                    continue;
                }
                num= cuadro(i, j);

                if(num>= maxi){
                    maxi= num;
                }
                if( num<= mini){
                    mini= num;
                }
            }
        }
    }

    cout<<maxi<<"\n";
    if( mini== 90000000){
        cout<<0;
    }else{
        cout<<mini;
    }

    return 0;
}