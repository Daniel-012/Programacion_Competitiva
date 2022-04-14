#include<bits/stdc++.h>

using namespace std;

char mapa[100][100];
bool vis[100][100]= {};
vector<char> vec;
struct nom{
    char no;
    int num;
};
vector<nom> mis;



int main(){
    int n;
    int m;

    cout<<"Ingrese el largo por ancho del mapa"<<"\n";
    cin>> n>> m;
    cout<<"Ingrese el Mapa"<<"\n";

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> mapa[i][j];
            if ( mapa[i][j] != 'X' && mapa[i][j] != '.' ){
                vec.push_back(mapa[i][j]);
            }
        }
    }

    for(int i=0; i<vec.size(); i++){
        nom actu;
        actu.no= vec[i];
        actu.num= 100;
        mis.push_back(actu);

    }

    for(int i=0; i< mis.size(); i++){
        cout<<mis[i].no<<" ";
    }



    return 0;
}