#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin>> a>> b;

    if( a==b){
        cout<<"EMPATE";
        return 0;
    }

    if( a== 4){
        cout<<"FLIX";
        return 0;
    }

    if( b== 4){
        cout<< "MARTONTITO";
        return 0;
    }

    if( a==0){
        if( b==5){
            cout<< "MARTONTITO";
        }
        if( b== 2){
            cout<<"FLIX";
        }
        return 0;
    }

    if( b==0){
        if( a==2){
            cout<< "MARTONTITO";
        }
        if( a== 5){
            cout<<"FLIX";
        }
        return 0;
    }
    if( a==2){
        if( b==0){
            cout<< "MARTONTITO";
        }
        if( b== 5){
            cout<<"FLIX";
        }
        return 0;
    }

    if( b==2){
        if( a==5){
            cout<< "MARTONTITO";
        }
        if( a== 0){
            cout<<"FLIX";
        }
        return 0;
    }
    if( a==5){
        if( b==2){
            cout<< "MARTONTITO";
        }
        if( b== 0){
            cout<<"FLIX";
        }
        return 0;
    }

    if( b==5){
        if( a==0){
            cout<< "MARTONTITO";
        }
        if( a== 2){
            cout<<"FLIX";
        }
        return 0;
    }




    return 0;
}