#include<iostream>
#include<vector>

using namespace std;

int minimo(int n1, int n2, int n3){
    if( n1<= n2 && n1<= n3){
        return n1;
    }else if( n2<= n1 && n2<= n3){
        return n2;
    }else{
        return n3;
    }
}

int maximo(int n1, int n2, int n3){
        if( n1>= n2 && n1>= n3){
        return n1;
    }else if( n2>= n1 && n2>= n3){
        return n2;
    }else{
        return n3;
    }

}



int main(){
    long int n;
    cin>> n;
    vector<int> vec(6);
    for(int i=0; i<6; i++){
        cin>> vec[i];
    }
    //1
    int sumin= vec[0]+ vec[4]+ vec[2];
    int mini= minimo(vec[0], vec[4], vec[2]);
    int maxi= maximo(vec[0], vec[4], vec[2]); 
    int medi= vec[0]+ vec[4]+ vec[2] - mini- maxi;
    //2
    if( vec[0]+ vec[1]+ vec[2]<= sumin){
        sumin= vec[0]+ vec[1]+ vec[2];
        mini= minimo(vec[0], vec[1], vec[2]);
        maxi= maximo(vec[0], vec[1], vec[2]); 
        medi= vec[0]+ vec[1]+ vec[2] - mini- maxi;
    }
    //3
    if( vec[0]+ vec[1]+ vec[3]<= sumin){
        sumin= vec[0]+ vec[1]+ vec[3];
        mini= minimo(vec[0], vec[1], vec[3]);
        maxi= maximo(vec[0], vec[1], vec[3]); 
        medi= vec[0]+ vec[1]+ vec[3] - mini- maxi;
    }
    //4
    if( vec[0]+ vec[3]+ vec[4]<= sumin){
        sumin= vec[0]+ vec[3]+ vec[4];
        mini= minimo(vec[0], vec[3], vec[4]);
        maxi= maximo(vec[0], vec[3], vec[4]); 
        medi= vec[0]+ vec[3]+ vec[4] - mini- maxi;
    }
    //5
    if( vec[3]+ vec[1]+ vec[5]<= sumin){
        sumin= vec[3]+ vec[1]+ vec[5];
        mini= minimo(vec[3], vec[1], vec[5]);
        maxi= maximo(vec[3], vec[1], vec[5]); 
        medi= vec[3]+ vec[1]+ vec[5] - mini- maxi;
    }
    //6
    if( vec[5]+ vec[1]+ vec[2]<= sumin){
        sumin= vec[5]+ vec[1]+ vec[2];
        mini= minimo(vec[5], vec[1], vec[2]);
        maxi= maximo(vec[5], vec[1], vec[2]); 
        medi= vec[5]+ vec[1]+ vec[2] - mini- maxi;
    }
    //7
    if( vec[0]+ vec[3]+ vec[5]<= sumin){
        sumin= vec[0]+ vec[3]+ vec[5];
        mini= minimo(vec[0], vec[3], vec[5]);
        maxi= maximo(vec[0], vec[3], vec[5]); 
        medi= vec[0]+ vec[3]+ vec[5] - mini- maxi;
    }
    //8
    if( vec[5]+ vec[4]+ vec[2]<= sumin){
        sumin= vec[5]+ vec[4]+ vec[2];
        mini= minimo(vec[5], vec[4], vec[2]);
        maxi= maximo(vec[5], vec[4], vec[2]); 
        medi= vec[5]+ vec[4]+ vec[2] - mini- maxi;
    }



    long long int sumamax= maxi*n*n;
    long long int sumamedia= medi* 4;
    long long int sumamin= (n*4-4)* mini;

    cout<< sumamax+ (sumamedia+sumamin)*n;



    return 0;
}