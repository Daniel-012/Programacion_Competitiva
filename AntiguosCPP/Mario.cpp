#include<bits/stdc++.h>

using namespace std;

void f(vector<int>& vec, int& n, int& c){
    int sb=0;
    int sa=0;
    int i=0;
    
    while( n!=1){
        if(vec[i]< vec[i+1] ){
            sa++;
        }else if(vec[i] > vec[i+1]){
            sb++;
        }
        i++;
        n--;
    }

    cout<< "Escenario "<<c<<": "<< sa<<" "<<sb<<"\n";

}



int main(){
    int t;
    int n;
    int c=1;
    cin>> t;
    while( t!=0){
        cin>> n;
        vector<int> vec(n);

        for(int i=0; i<n; i++){
            cin>> vec[i];
        }

        f(vec, n, c);
        c++;
        t--;
    }



    return 0;
}

