#include<bits/stdc++.h>

using namespace std;
int i=0;
int n;

int pilainter(vector<int>& edi){

    stack<int> indi;
    int maxi= -1000;
    int actu;
    i=0;
    while( i<n){
        if(indi.empty()== true || edi[i]>= edi[indi.top()]){
            indi.push(i++);

        }else{
            int a= indi.top();
            indi.pop();
            if( indi.empty()== true){
                actu= edi[a]*i;
            }else{
                actu= edi[a]*(i-indi.top()-1);
            }
            

            if(actu>= maxi){
                maxi= actu;
            }
        }
    }

    while(indi.empty()== false){
        int a= indi.top();
        indi.pop();
        if( indi.empty()== true){
                actu= edi[a]*i;
            }else{
                actu= edi[a]*(i-indi.top()-1);
            }
            

            if(actu>= maxi){
                maxi= actu;
            }

    }




    return maxi;
}




int main(){
    cin>> n;
    vector<int> edi(n);

    for(i=0; i<n; i++){
        cin>> edi[i];
    }

    cout<< pilainter(edi);


}