#include<iostream>

using namespace std;


int main(){
    int hi;
    int mi;
    int hf;
    int mf;
    cin>>hi>> mi>> hf>> mf;
    if( hi==0){
        hi=24;
    }else if( hf==0){
        hf=24;
    }

    if( hi== hf && mi== mf){
        cout<<1440;
    }else if  (hi== hf){
        if( mf>mi){
            cout<< mf-mi;
        }else{
            cout<<(24)*60-mi+mf; 
        }
    }else if( hf> hi){
        cout<< hf*60-hi*60+mf-mi ;
    }else if( hi> hf){
        hi= hi+1;
        cout<< ((24 -hi)*60)+(60-mi)+( hf*60)+mf;;

    }






    return 0;
}