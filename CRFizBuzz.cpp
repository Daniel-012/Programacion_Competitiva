#include<iostream>

using namespace std;

int main(){
    int n;
    int z;
    cin>>n>> z;

    for(n; n<=z; n++){
        if( n%3== 0 && n%5==0){
            cout<<"BuzzFizz"<<endl;
        } else if(n%3==0){
            cout<< "Buzz"<< endl;
        }else if( n%5==0){
            cout<<"Fizz"<<endl;
        }else{
            cout<<n<<endl;
        }
    }


    return 0;
}