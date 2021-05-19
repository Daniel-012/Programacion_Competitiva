#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

int n, t;
lli maxi=INT_MIN;


struct  nodo
{
    lli uno;
    lli dos;
    int tres;

};

vector<nodo> vec(1001);

lli f(int i, lli sum, lli hasta){
    
    if(sum>=maxi){
        maxi=sum;
    }
    if( i>= n){
        return 0;
    }
    if( hasta>t){
        return 0;
    }
    cout<<sum<<" ";


    return f(i+1, sum + ( vec[i].uno-((vec[i].tres+hasta)*vec[i].dos)), hasta+vec[i].tres);
    return f(i+1, sum, hasta);



}







int main(){
    
    cin>> n>> t;

    for(int i=0; i<n; i++){
        cin>> vec[i].uno>> vec[i].dos>> vec[i].tres;
    }


    f(0, INT_MIN, 0);

    cout<<maxi;

    return 0;
}
