#include<iostream>

using namespace std;

int main(){
    int d;
    int n;
    cin>> d>> n;
    int c=d;
    cout<<"Sun Mon Tue Wed Thr Fri Sat"<<endl;
    for( int i=1; i<=n; i++){

        if( i== 1){
            if (d== 1){
                cout<<" ";
            }else if(d==2  ){
                cout<<"     ";
            }else if(d==3  ){
                cout<<"         ";
            }else if(d==4  ){
                cout<<"             ";
            }else if(d==5  ){
                cout<<"                 ";
            }else if(d==6  ){
                cout<<"                     ";
            }else{
                cout<<"                         ";
            }
                
        }
 
        if( c== 7){
            if( i<10){
                cout<<" ";
            }
            cout<<i<<"  "<<endl;
            cout<<" ";
            c=1;
        }else{
            if( i<10){
                cout<<" ";
            }
            cout<<i<<"  ";
            c++;
        }

    }




    return 0;
}