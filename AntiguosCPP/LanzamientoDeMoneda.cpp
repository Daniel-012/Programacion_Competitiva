#include<bits/stdc++.h>

using namespace std;

int n;

void lanzo(int c, string& p){
    if( c>= n){
        return ;
    }
    
    for(int i=1; i<=2; i++){
        if( i==1 ){
            p.push_back('A');
        }else{
            p.push_back('X');
        }
        lanzo(c+1, p);

        if( p.size()== n){
            cout<<p<<"\n";
        }
        p.pop_back();
    }


}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin>> n;
    string p;
    lanzo(0, p);

    return 0;
}