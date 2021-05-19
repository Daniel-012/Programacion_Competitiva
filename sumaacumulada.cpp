#include<iostream>
#include<vector>

using namespace std;

int main(){
    long long int a;
    long long int b;
    long long int c;
    long long int x;

    cin>> a;
    vector<long long int> vec(a);

    for(long long int i=0; i<a; i++){
        cin>> vec[i];

    }
    cin>> b;

    for(long long int i=0;i<b;i++){
        cin>>x;
        cin>> c;
        long long int s=0;
        for(long long int j=x; j<=c; j++){
            s=s+vec[j-1];
        }

        cout<< s<<"\n";

    }
    return 0;
}