#include<iostream>
#include<vector>

using namespace std;

vector<int> vec= { 1,2 ,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};

bool f( int inicio, int fin, int x){
    while(inicio <= fin){
        if( x<= vec[(inicio+fin)/2]){
            if(vec[(inicio+fin)/2]== x){
                return true;
            }else{
                inicio= inicio;
                fin= (inicio+fin)/2;
            }
        }else{
           inicio= (inicio+ fin)/2+1;
            fin=  fin;
        }

    }
    return false;
}






int main(){
    int x;
    int n;
    cout<<"Cuantos Numeros Vas a Buscar? ";
    cin>>n;

    int ini= 0;
    int fin= vec.size()-1;

    while( n!=0){
        cout<< "Ingresa el Numero"<< endl;
        cin >> x;

        cout<<"Existe El Numero? : ";
        if(f(ini, fin, x)){
            cout<< "Si"<<endl;
        }else{
            cout<< "No"<<endl;
        }
        n--;
    }
    return 0;
}