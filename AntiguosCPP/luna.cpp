#include<bits/stdc++.h>

using namespace std;

int mat[501][501];

int c=0;
int x=0;
 int a;
int b;
long long int suma=0;
long long int maxi=0;

void luna( int x,int y, long long int& s){
    
    if( x<0 || y>=b || x>=a || y<0){
        return;
    }
    if( mat[x][y]==0){
        return ;
    }
    if(mat[x][y]==0){
        return ;
    }

    s += mat[x][y];
    mat[x][y]= 0;
    

    luna(x+1,y,s);
    luna(x-1,y,s);
    luna(x,y+1,s);
    luna(x,y-1,s);





}





int main(){
   
    cin>> a>> b;

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>> mat[i][j];
        }
    }
    for(int j=0; j<b; j++){
        for(int i=0; i<a; i++){
            if(mat[i][j]!= 0 ){
                suma=0;
                luna(i,j,suma);
                c++;
                if( suma> maxi){
                    maxi=suma;
                    x= c;
                }
            }
        }
        
    }
    if( x==0){
        cout<<0<<" "<<0;
    }else{
        cout<< x<<" "<<maxi;
    }

    
    


    return 0;
}