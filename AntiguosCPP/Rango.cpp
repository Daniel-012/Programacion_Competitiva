#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int k;
    cout<<"Ingrese la cantidad de numeros\n";
    cin>> n;
    cout<<"Ingrese el numero objetivo\n";
    cin>> k;
    vector<int> vec(n);
    cout<< "Ingrese los numeros  \n";
    
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    int ini;
    int sum;

    for(int i=0; i<n; i++){
        ini=i;
        sum=vec[i];
        if( sum== k){
            cout<< sum;
        }
        for(int j= i+1; j<n; j++){
            if( sum== k){
                for(int c=ini; c<j; c++){
                    cout<<vec[c]<<" ";
                }
                cout<<"\n";
                break;
            }else{ 
                sum += vec[j];
            }
        }
    }


    return 0;
}