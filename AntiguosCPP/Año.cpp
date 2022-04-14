#include<iostream>

using namespace std;

int main(){
    int n;
    int m;
    cin>> m;

    for(int i=0; i<m; i++){
        cin>>n;
    if(n==1){
        cout<<"Enero"<<endl;
    }else if(n==2){
        cout<<"Febreo"<<endl;
    }else if(n==3){
        cout<<"Marzo"<<endl;
    }else if(n==4){
        cout<<"Abril"<<endl;
    }else if(n==5){
        cout<<"Mayo"<<endl;
    }else if(n==6){
        cout<<"Junio"<<endl;
    }else if(n==7){
        cout<<"Julio"<<endl;
    }else if(n==8){
        cout<<"Agosto"<<endl;
    }else if(n==9){
        cout<<"Septiembre"<<endl;
    }else if(n==10){
        cout<<"Octubre"<<endl;
    }else if(n==11){
        cout<<"Noviembre"<<endl;
    }else if(n==12){
        cout<<"Diciembre"<<endl;
    }else {
        cout<<"Error"<<endl;
    }
    }



    return 0;
}