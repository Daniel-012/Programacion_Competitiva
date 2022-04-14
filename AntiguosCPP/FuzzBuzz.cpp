#include<iostream>

using namespace std;
int main(){
    int n;
    cin>> n;
    if( n%3==0 && n%5==0){
        cout<<"FuzzBuzz"<<endl;
    }else if( n%5==0){
        cout<<"Buzz"<<endl;
    }else if( n%3==0){
        cout<<"Fuzz"<<endl;
    }else{
        cout<<n<<endl;
    }
    int x;
    int i=0;
    int c=0;
    while( i<n && c<n){
        cin>>x;
        if( x%3==0 && x%5==0){
        cout<<"FuzzBuzz"<<endl;
    }else if( x%5==0){
        cout<<"Buzz"<<endl;
    }else if( x%3==0){
        cout<<"Fuzz"<<endl;
    }else{
        cout<<x<<endl;
        c++;
    }
    i++;
    }



    return 0;
}