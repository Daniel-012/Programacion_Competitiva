#include<iostream>

using namespace std;

int main(){
    int c;
    int l=0;
    int n=0;
    int x;
    cin>>c;
    while(c>0){
        cin>> x;
        if( x%2==0){
            n++;
        }else{
            l++;
        }
        c--;
    }

    cout<<n<<" "<< l;

    return 0;
}
