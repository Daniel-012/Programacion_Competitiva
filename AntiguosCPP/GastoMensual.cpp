#include<bits/stdc++.h>

using namespace std;

int n;
int d;
long int i=0;
long long int c=0;
long long int suma=0;

vector<int> vec(100000);

bool se_puede(long long int cantidad){

    c=0;
    for(i=0; i<n; i++){
        suma=vec[i];
        if( suma> cantidad){
            c++;
            return false;
            
        }else{

            while( suma<= cantidad && i<n){
                i++;
                suma += vec[i];
            
            }
            c++;
            i--;

        }

        
    }
    

    if(c<= d){
        return true;
    }else{
        return false;
    }
}




int Busca(long long int ini, long long int fin){

    long long int  mitad;

    while(ini<fin){
        mitad= (ini+fin)/2;
        if(se_puede(mitad)== true){
            fin= mitad;
        }else{
            ini= mitad+1;
        }

    }

    //cout<<ini<<" "<<mitad<< " "<<fin;

    return ini;



}




int main(){
    long long int maxi=INT_MIN;
    int ini= INT_MAX;
    long long int fin= 0;
    cin>> n>> d;;

    for(i=0; i<n; i++){
        cin>> vec[i];
        if(vec[i]>=maxi){
            maxi= vec[i];
        }
        if( vec[i] <= ini){
            ini = vec[i];
        }
        fin  += vec[i];
    }

    
        cout<< Busca(ini, fin);
    

    




    return 0;
}