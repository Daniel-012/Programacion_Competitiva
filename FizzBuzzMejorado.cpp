#include<iostream>

using namespace std;

int main(){
    int x;
    int y;
    int a;
    int b;
    cin>>x>>y>>a>>b;

    for(int i=x; i<=y; i++){
        if( i%a ==0 && i%b==0){
            cout<< "FizzBuzz"<<endl;
        }else if( i%a==0){
            cout<< "Fizz"<<endl;
        }else if( i%b==0){
            cout<<"Buzz"<<endl;
        }else{
            cout<< i<<endl;
        }
    }



    return 0;
}