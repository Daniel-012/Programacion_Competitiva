#include<iostream>

using namespace std;

int main(){
    int x;
    cin>>x;

    int b=1;
    int r=x;

    if( x>1){
        while(x>1){
            x= x-1;
            r=r*x;
        }
        if(r>=0){
            if(r==0){
                cout<< b;
            }else{
                cout << r;
            }
        }else{
            cout<<"Error";
        }
        
    }else{
        if(r>=0){
            if(r==0){
                cout<< b;
            }else{
                cout << r;
            }
        }else{
            cout<<"Error";
        }
    }








    return 0;
}