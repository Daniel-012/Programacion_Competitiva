#include<bits/stdc++.h>

using namespace std;

bool valida( string& ip){
    for(int i=0; i<ip.size(); i++){
        if( ip[i]!='0' && ip[i]!='1' &&ip[i]!='2'&&ip[i]!='3' &&ip[i]!='4'&&ip[i]!='5' &&ip[i]!='6' &&ip[i]!='7' &&ip[i]!='8' &&ip[i]!='9' &&ip[i]!='.'  ){
            return false;
        }
    }
    if( ip.size()>17){
        return false;
    }
    int x=0;;
    for(int i=0; i<ip.size(); i++){
        if( ip[i]=='.'){
            x++;
        }
    }
    if( x!=3){
        return false;
    }
    int suma=0;
    int c=1;
    for(int i=ip.size()-1; i>=0; i--){
        suma=0;
        c=1;
        while(ip[i] != '.' && i>=0){
            x= ip[i]-48;
            suma+= x*c;
            i--;
            c*=10;
        }
        if(i>=0 && ip[i] != '.' ){
            return false;
        }
        //cout<<suma<<" ";
        if(suma>255){
            return false;
        }
    }

    return true;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string ip;

    cin>> ip;

    if( valida(ip)){
        cout<<"SI";
    }else{
        cout<<"NO";
    }


    return 0;
}