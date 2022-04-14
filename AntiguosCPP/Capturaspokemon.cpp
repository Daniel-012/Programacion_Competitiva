#include<iostream>

using namespace std;

int pokemon(  int a){
    int x;
   for (int i=1; i<=3; i++){
        cin>> x;
        if(i==1){
            a=a+x*1;
        }else if(i==2){
            a=a+x*2;
        }else if(i==3){
            a=a+x*3;
        }
    }
    return a;

}


int main(){
    int g=0;
    int a=0;
    int b=0;

    g= pokemon(g);
    a= pokemon(a);
    b= pokemon(b);

    if(g > a && g> b){
        cout<< "Gatica";
    }else if(a > g && a> b){
        cout<< "Alexander";
    }else{
        cout<< "Brandon";
    }


    return 0;
}