#include<bits/stdc++.h>

using namespace std;


int suma2(int a){
    int sum=0;
    while (a>0){
        sum+= a%10;
        a/= 10;
    }

    return sum;
    
}


int suma( int a, int b){

    int sum=0;

    for( int i=a; i<= b; i++){
        sum+= suma2(i);
    }

    return sum;

}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int a, b;
    int x;

    cin>>n;


    for(int i=0; i<n; i++){
        cin>> a>> b;
        x=suma( a, b);

        while ( x>= 10){
            x= suma2(x);
        }
        cout<<x<<"\n";


    }




    return 0;
}