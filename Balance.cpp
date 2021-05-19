#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

bool balancear( vector<lli>& restas, int& c){

    vector<lli> vec(restas.size()-2);

    for(int i=1; i<restas.size()-1; i++){
        vec[i-1]= restas[i+1]- restas[i];
    }

    for(int i=0; i<vec.size(); i++){
        if( vec[i]>2 || vec[i]<-2){
            return false;
        }
        if( vec[i]== 1){
            c++;
        }
        if( vec[i]== -2){
            c++;
        }
        if( vec[i]== -1){
            if( i== vec.size()-1){
                c++;
            }else if( vec[i+1]== 2){
                c++;
                i++;
            }
        }



    }

    return true;

}






int main(){

    int n;
    int i=0;
    int c=0;
    cin>> n;

    vector<lli> vec(n);
    vector<lli> restas(n);

    for(i=0; i<n; i++){
        cin>> vec[i];
        if( i!=0 ){
            restas[i]= vec[i]-vec[i-1];
        }

    } 
    if( n<= 2){
        cout<<0;
        return 0;
    }

    

    if(balancear(restas, c )){
        cout<<c;
    }else{
        cout<<-1;
    }





    return 0;
}