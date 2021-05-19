#include<bits/stdc++.h>

using namespace std;

vector<int> abi;
vector<int> dan;
vector<bool> esprimo(1000003, true);
vector<int> vec;

void criba(){
    esprimo[0] = esprimo[1] = false;
    for(int i=2; i<1000001; i++){
        if(esprimo[i]){
            vec.push_back(i);
            for(int j=i+ i; j< 1000001; j+=i ){
                esprimo[j]= false;
            }
        }
    }
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    criba();

    

    int a;
    int d;
    cin>> a>> d;
    

    for(long  int i= 0;i< vec.size() ; i++){
        if( a%vec[i]== 0){
            dan.push_back(vec[i]);
        }
        if( d%vec[i]== 0){
            abi.push_back(vec[i]);
        }
    }

    if(dan.size()> abi.size()){
        cout<<"Daniel"<<"\n";
    }else if( abi.size()> dan.size()){
        cout<<"Abigael"<<"\n";
    }else{
        cout<<"Empate"<<"\n";
    }
    
    for(int i=0; i< dan.size(); i++){
        cout<<dan[i]<< " ";
    }
    cout<<"\n";
    for(int i=0; i< abi.size(); i++){
        cout<<abi[i]<< " ";
    }

    



    return 0;
}