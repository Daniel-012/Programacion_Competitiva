#include<bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int maxi= 0;
    int pos=0;
    int n;
    int j;
    int actu;
    int dias;
    string comi;
    map<string , int > mapa;
    mapa["LUNES"]=1;
    mapa["MARTES"]=2;
    mapa["MIERCOLES"]=3;
    mapa["JUEVES"]=4;
    mapa["VIERNES"]=0;
    vector<string> vec= {"VIERNES", "LUNES", "MARTES", "MIERCOLES", "JUEVES"};

    cin>> n;

    for(int i=0; i<n; i++){
        cin>> dias>> comi;
        vector<int> presuma(dias+1);

        for(j=1; j<=dias; j++){
            cin>>presuma[j];
            presuma[j]+= presuma[j-1];
        }

        for(j=3; j<=dias; j++){
            actu= presuma[j]-presuma[j-3];
            if( actu> maxi){
                pos= j-2;
                maxi= actu;
            }
        }
        int c=mapa[comi];
        for(j=1; j<=dias; j++ ){
            if( j== pos){
                for( int k= j; k<j+3; k++){
                    cout<<vec[c]<<" "<<presuma[k]-presuma[k-1];
                    c++;
                    c= c%5;
                    if( k+1<j+3){
                        cout<<", ";
                    }
                }
                cout<<"\n";
                break;
            }
            c++;
            c= c%5;

        }
        

    }




    return 0;
}