#include<bits/stdc++.h>

using namespace std;

int main(){
    

    int n;
    int c=0;
    int x;
    long int meter;
    int quitar;
    vector<long int> vec(5000000);


    cin>> n;
    int y=-1;

    int a;
    int b;

    for(int i=0; i<n; i++){
        cin>> x;
        if(x==0){

            if(y== -1){
                cout<<0<<"\n";
            }else{

                c=0;
                for(a= y; a>=0; a--){
                    if(vec[y]<= vec[a]){
                        c++;
                    }
                }

                cout<<c<<"\n";

            }
    

        }else if(x==1){
            y++;
            cin>> meter;

            vec[y]= meter;
            


        }else{
            cin>> quitar;
            if( quitar-1 >= y){
                y= -1;
            }else{
                y-= quitar;

            }
            

        }
    } 


    return 0;
}