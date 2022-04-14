#include<bits/stdc++.h>

using namespace std;


int mat[10][10];


vector<int> veca(4);
vector<int> vecb(4);
vector<int> vecc(4);
vector<int> vecd(4);





int main(){
    
    

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>> mat[i][j];
        }
    }

    int n;
    string pala;
    int c;
    long int suma=0;
    cin>> n;


    for(int i=0; i<n; i++){
        cin>> pala;
        if( pala[0]== 'A'){
            c= pala[1]-'0'-1;
            suma += mat[0][c];
            veca[c]++;


        }else if( pala[0]== 'B'){
            c= pala[1]-'0'-1;
            suma += mat[1][c];
            vecb[c]++;

        }else if( pala[0]== 'C'){
            c= pala[1]-'0'-1;
            suma += mat[2][c];
            vecc[c]++;

        }else{  
            c= pala[1]-'0'-1;
            suma += mat[3][c];
            vecd[c]++;

        }
    }

    int p=0;

    int i=0;

    while( veca[i] !=0){

        veca[i]--;
        if( i== 3){
            p++;
        }
        i++;
        if(i== 4 ){
            i=0;
        }
    }
    
    suma = suma - (p*10 );
    
    p= 0;
    i=0;
    while( vecb[i] !=0){

        vecb[i]--;
        if( i== 3){
            p++;
        }
        i++;
        if(i== 4 ){
            i=0;
        }
    }
    
    suma = suma - (p*10 );

    p= 0;
    i=0;
    while( vecc[i] !=0){

        vecc[i]--;
        if( i== 3){
            p++;
        }
        i++;
        if(i== 4 ){
            i=0;
        }
    }
    
    suma = suma - (p*10 );
    p= 0;
    i=0;
    while( vecd[i] !=0){

        vecd[i]--;
        if( i== 3){
            p++;
        }
        i++;
        if(i== 4 ){
            i=0;
        }
    }
    
    suma = suma - (p*10 );


    cout<<suma;


    return 0;
}
