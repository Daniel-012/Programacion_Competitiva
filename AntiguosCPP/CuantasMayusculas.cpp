#include<iostream>
#include<string>

using namespace std;

int main(){
    int ma=0;
    int min=0;
    string pala;
    cin>> pala;
    for(int i=0; i<pala.size(); i++){
        if( pala[i]>= 65 && pala[i]<=90){
            ma++;
        }else{
            min++;
        }

    }

    cout<< min<<" "<<ma;

    return 0;
}