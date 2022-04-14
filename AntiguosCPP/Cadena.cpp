#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string x;

    cin>> x;

    int c=0;
    string actu;
    string men;

    while (c!=-1){

        for(int i=0; i<x.size(); i++){
            if(x[i]== 'x'){
                if( x[i+1]=='x'&& i<x.size()){
                    actu.push_back(x[i]);
                    i++;
                }else if(x[i+1]=='p' && i<x.size()){
                    actu.push_back('$');
                    i++;
                }else{

                    actu.push_back(x[i]);
                }

            }else{
                actu.push_back(x[i]);
            }
        }
        //cout<<actu;
        if(actu==x){
            break;
        }
        x=actu;
        actu= men;
        


        c++;

    }


    if( c==0){
        cout<<0<<"\nNOSTRING";
    }else{
        cout<<c<<"\n"<<actu;

    }
    



    return 0;
}