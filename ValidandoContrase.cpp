#include<bits/stdc++.h>

using namespace std;

bool comprueba( string contra){
    int ma=0;
    int mi=0;
    int nu=0;

    for(int i=0; i< contra.size(); i++){
        if( contra[i]>= 65 &&  contra[i]<=90){
            ma++;
        }else if(   contra[i]>= 97 && contra[i]<=122 ){
            mi++;
        } else if(  contra[i]>= 48 && contra[i]<=57  ){
            nu++;
        }

    }

    if( ma>=1 && mi>=1 && nu>=1){
        return true;
    }else{
        return false;
    }

}




int main(){
    int n;
    string contra;
 
    cin>> n;
    if(getchar() == 10){

    }

    for(int i=0; i<n; i++){
           int c=0;
        getline(cin, contra);
        for(int j=0; j< contra.size(); j++){
            if( contra[j]>= 65 && contra[j]<=90 ||   contra[j]>= 97 && contra[j]<=122  ||  contra[j]>= 48 && contra[j]<=57 ){
                c++;
            }

        }
        if( c== contra.size()  && contra.size()>=6 && contra.size()<=32   && comprueba(contra)){
            cout<< contra<< ":"<< " Valido"<<endl;
        }else{
           cout<< contra<< ":"<< " Invalido"<<endl;
        }

    }


    return 0;
}