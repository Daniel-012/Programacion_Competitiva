#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int i;
    long int min= 1000000000;
    long int suma=0;
    cin>> n;
    vector<long int> vec(n);
    for( i=0; i<n; i++){
        cin>> vec[i];
        if(vec[i]<= min){
            min= vec[i];
        }
    }
    n=0;
    i=0;
    while(vec[n]!= min){
        suma= suma+ vec[n];
        n++;
        i++;
        
    }
    n=1;
    while((suma-(n*i))+min >= n ){
        n++;
    }
    cout<< n-1;

    return 0;
}