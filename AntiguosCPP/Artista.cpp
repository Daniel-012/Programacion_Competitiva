#include<bits/stdc++.h>

using namespace std;



int main(){
    //Dimensiones de la cartulina
    int t1;
    int t2;
    //Grosor y color de la cartulina
    int g;
    int c;
    //Numeros de movimientos que planea hacer
    int n;
    // Variables que representan :
    // Color de el cuadrado; si es -1 se va ha arrancar el papel
    int ca;
    // Largo y Ancho de el papel a colorcar  o de el papel que se va arrncar
    int l;
    int a;
    // Inicio del pegado del papel en la esquina superior izaquierda
    int x;
    int y;
    //variables seguidoras
    int i;
    int j;
    int k;



    cin>> t1>> t2>> g>> c>>n;

    stack<int> cartulina[t1][t2];

    for( i=0; i<t1; i++){
        for(j=0; j< t2; j++){
            for(k=0; k<g; k++){
                cartulina[i][j].push(c);
            }
            
        }
    } 
    

    while( n!=0){
        cin>> ca;
        if(ca== -1){
            cin>> l>> a>> x>>y;
            for( i=y-1; i<t1 && i< y+a-1; i++){
                for( j=x-1; j<t2 && j< x+l-1; j++){
                    if( cartulina[i][j].empty()== false){
                        cartulina[i][j].pop();
                    }
                    
                }
            }

        }else{
            cin>> l>> a>> x>>y;
            for( i=y-1; i<t1 && i< y+a-1; i++){
                for( j=x-1; j<t2 && j< x+l-1; j++){
                    cartulina[i][j].push(ca);
                }
            }


        }

        n--;
    }

   for( j=0; j<t1; j++){
        for(i=0; i< t2; i++){
            if( cartulina[j][i].empty()== true){
                cout<<-1<<" ";
            }
            else{
                cout<<" "<<cartulina[j][i].top()<<" ";
            }
            
        }

        cout<<"\n";
    }







    return 0;
}