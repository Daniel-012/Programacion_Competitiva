#include<iostream>

using namespace std;

int main (){

    int n;
    int m;
    int k;
    int x;
    int y;
    int r=0;
    int i=1;
    int f=0;;

    cin>>n>>m>>k>>x>>y;

    while(r <= k && r<=n*m){
        r=x*y*i+r;
       
        f=f+m;
        i++;


    }



    cout<< f;






    return 0;
}


