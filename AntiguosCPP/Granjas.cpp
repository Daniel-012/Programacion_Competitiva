#include<bits/stdc++.h>

using namespace std;

long long int total( vector<long long int>& vec){
    unsigned long long int z=vec[0];
    unsigned long long int a;
    unsigned long long int b;

    if (vec.size()== 1){
        return z;
    }

    for(int i=0; i<vec.size()-1; i++){
        a= vec[i];
        b= vec[i+1];
        z= a*(b/__gcd(a,b));
        vec[i+1]= z;
        
    }

    return z;

}







int main(){
    int n;
    cin>> n;
    vector< int > vec(n);

    vector<long long int > numeros;
    vector<bool> vis(n);

    for(int i=0; i<n; i++){
        cin>> vec[i];

    }

    int origen;
    int actual;
    long long int c=0;

    for(int i=1; i<=n; i++){
        origen= i;
        actual= origen;
        c=0;

        if(vis[i-1]== true){
            continue;
        }

        do{
            actual= vec[actual-1];
            c++;
            vis[actual-1]= true;

        }while( actual != origen);

        numeros.push_back(c);
        
        
    }

    cout<< total(numeros);



    return 0;
}