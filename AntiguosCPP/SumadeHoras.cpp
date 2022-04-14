#include<bits/stdc++.h>

using namespace std;

int main(){
    int h1;int m1;
    int h2; int m2;

    cin>> h1>>m1>>h2>>m2;

    if(m1+m2>=60){
        if(h1+h2+1> 23){
          cout<< h1+h2+1-24<<" "<<m1+m2-60;  
        }else{
        cout<< h1+h2+1<<" "<<m1+m2-60;
        }
    }else{
        if(h1+h2> 23){
          cout<< h1+h2-24<<" "<<m1+m2;  
        }else{

        cout<< h1+h2<<" "<<m1+m2;
    }}





    return 0;
}