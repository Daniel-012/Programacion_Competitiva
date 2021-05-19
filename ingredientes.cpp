#include<bits/stdc++.h>

using namespace std;

bool para= false;
int x=0;
int n;
int i=0;

vector< int> vec(100000);
vector< int> vec2(100000);
vector< int> actual(100000);

void checa( ){
    x=0;
    x=0;

    while(vec[x]< vec[x+1] && x< n-1){
        if(vec[x]< vec[x+1] ){
            x++;
        }else{
            return;
        }
    }


    if( x+1== n){
        para= true;
        return;
    }

}






int main(){

    cin>> n;

    for(i=0; i<n; i++){
        cin>> vec[i];
        vec2[i]= vec[i];
    }


    long long int c=0;

    while(para != true){
        
        for(i=0; i<n; i++ ){
            actual[i]= vec2[vec[i]-1];
            
        }
    
        vec= actual;


        checa();
        c++;
    }

    cout<<c+1;



    return 0;
}