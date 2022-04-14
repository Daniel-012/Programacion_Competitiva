#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

double promedio( int n){
    vector<int > vec;
    double s=0;
    for( int i=0; i<n; i++){
        double x;
        cin>> x;
        s=s+x;
        vec.push_back(x);
    }
    double c=0;
    double p=s/n;
    for( int i=0; i<n; i++){
        if( vec[i]> p){
            c++;
        }
    }
    double x= c*100/n;
    return x;

}


int main(){
    int n;
    cin>> n;
    while( n!=0){
        int n2;

        cin>> n2;
        
        cout<<fixed<<setprecision(3)<<promedio(n2)<<"%"<<endl;

        n--;
    }  


    return 0;
}