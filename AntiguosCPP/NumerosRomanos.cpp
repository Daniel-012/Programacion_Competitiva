#include<iostream>
#include<string>
using namespace std;

int main (){
    string numero;
    cin>> numero;

    int s=0;
    int c=0;

    for(int i=0; i<numero.size(); i++){
        if( numero[i]== 'I'){
            s=s+1;
        }else if( numero[i]== 'V'){
            s=s+5;
        }else if( numero[i]== 'X'){
            s=s+10;
        }else if( numero[i]== 'L'){
            s=s+50;
        }else if( numero[i]== 'C'){
            s=s+100;
        }else if( numero[i]== 'D'){
            s=s+500;
        }else if( numero[i]== 'M'){
            s=s+1000;
        }
    }

    for(int i=numero.size()-1; i>=0; i--){
        if( numero[i]=='V'  && numero[i-1]=='I' ){
            s=s-2;
        }else if( numero[i]=='X'  && numero[i-1]=='I' ){
            s=s-2;
        }else if( numero[i]=='L'  && numero[i-1]=='X' ){
            s=s-20;
        }else if( numero[i]=='C'  && numero[i-1]=='X' ){
            s=s-20;
        }else if( numero[i]=='D'  && numero[i-1]=='C' ){
            s=s-200;
        }else if( numero[i]=='M'  && numero[i-1]=='C' ){
            s=s-200;
        }

    }
    for(int i=numero.size()-1; i>=0; i--){
        if( numero[i]== 'M' && numero[i-1]=='I' ){
            c++;
        }else if( numero[i]== 'M' && numero[i-1]=='V' ){
            c++;
        }else if( numero[i]== 'M' && numero[i-1]=='X' ){
            c++;
        }else if( numero[i]== 'M' && numero[i-1]=='L' ){
            c++;
        }else if( numero[i]== 'C' && numero[i-1]=='L' ){
            c++;
        }else if( numero[i]== 'L' && numero[i-1]=='I' ){
            c++;
        }else if( numero[i]== 'X' && numero[i-1]=='V' ){
            c++;
        }


    }
    
    if( s< 4000 && s>=1   && c==0 ){
        cout <<s;
    }else{
    cout<<endl;
    }
    return 0;
}