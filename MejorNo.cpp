#include<iostream> 

using namespace std;


bool comprobar(int n){
    int i=0;
    int r=0;
    int x=1;
    int y=2;

    while(i<=n){
        r=x+y;;
        x=y;
        y=r;

    if( r==n){
        return false;
    }
    i++;

    }
        return true;
    


}






int main(){
    int s;
    cin>> s;

    for(int i=3; i< s; i++){

    if (comprobar(i)){
        cout <<i << " ";
    }
    }


    return 0;
}