#include<bits/stdc++.h>

using namespace std;

// bool operator<(map<int,int> a, map<int,int> b){
//     if( a.first> b.first){
//         return  true;
//     }else{
//         return false;
//     }
// }
// a

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int c=0;
    int a, b;
    int i=0;
    cin>> n;
    map<int,int> mapa;

    while( n!=0){
        cin>> a>> b;
        if(a== 1 ){
            mapa[b]++;
            //sort(mapa.begin(), mapa.end());
            
        }else{
            c=0;
            for(auto x: mapa){
               if( x.first<= b){
                   c+=x.second;
               }
            }
           
            cout<<c<<'\n';

        }
        


        n--;
    }


    return 0;
}