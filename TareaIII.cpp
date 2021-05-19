#include<iostream>
#include<string>

using namespace std;

int main(){
    string todo;
    string nom1;
    string nom2;
    string nom3;
    for( int i=1; i<=9; i++){
        cin>> todo;
        if( i==1 || i== 4 || i== 7){
        for( int j=0; j<todo.size(); j++){
            nom1.push_back(todo[j]);
        }
        }else if( i==2 || i== 5 || i== 8){
        for( int j=0; j<todo.size(); j++){
            nom2.push_back(todo[j]);
        }
        }else if( i==3 || i== 6 || i== 9){
        for( int j=0; j<todo.size(); j++){
            nom3.push_back(todo[j]);
        }
        }
        if( i==1 || i== 4 || i== 7){
            nom1.push_back(' ');
        }else if( i==2 || i== 5 || i== 8){
            nom2.push_back(' ');
        }else if( i==3 || i== 6 || i== 9){
            nom3.push_back(' ');
        }
        
    }


    nom1.push_back(' ');
    nom2.push_back(' ');
    nom3.push_back(' ');
    for( int i=1; i<=3; i++){
        int j=0;
        if( i==1){
            cout<<"Nombre "<<i<<": ";
            while( nom1[j]!=' '){
                cout<<nom1[j];
                j++;
            }
            j=j+1;
            cout<<endl;
            cout<<"Apellido Paterno "<<i<<": ";
            while( nom1[j]!=' '){
                cout<<nom1[j];
                j++;
            }
            cout<<endl;
            j=j+1;
            cout<<"Apellido Materno "<<i<<": ";
            while( nom1[j]!=' '){
                cout<<nom1[j];
                j++;
            }
            cout<<endl;
        }else if( i==2){
            j=0;
            cout<<"Nombre "<<i<<": ";
            while( nom2[j]!=' '){
                cout<<nom2[j];
                j++;
            }
            j=j+1;
            cout<<endl;
            cout<<"Apellido Paterno "<<i<<": ";
            while( nom2[j]!=' '){
                cout<<nom2[j];
                j++;
            }
            cout<<endl;
            j=j+1;
            cout<<"Apellido Materno "<<i<<": ";
            while(nom2[j]!=' '){
                cout<<nom2[j];
                j++;
            }
            cout<<endl;
        }else if( i==3){
            j=0;
            cout<<"Nombre "<<i<<": ";
            while(nom3[j]!=' '){
                cout<<nom3[j];
                j++;
            }
            j=j+1;
            cout<<endl;
            cout<<"Apellido Paterno "<<i<<": ";
            while( nom3[j]!=' '){
                cout<<nom3[j];
                j++;
            }
            cout<<endl;
            j=j+1;
            cout<<"Apellido Materno "<<i<<": ";
            while( nom3[j]!=' '){
                cout<<nom3[j];
                j++;
            }
            cout<<endl;
        }
    }

    return 0;
}