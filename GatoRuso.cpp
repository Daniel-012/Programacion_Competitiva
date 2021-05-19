#include<bits/stdc++.h>

using namespace std;
struct nodo
{
    int x;
    int y;
};

int n;
char mat[101][101];

int k=0, l=0, s=0;
int ar=0, ab=0, de=0, iz=0, daz=0, dad=0, dbz=0, dbd=0;

int sumar(int& x, int& y){
    k= x-1;
    l= y;
    s=0;
    while(k>=0 && mat[k][l]== 'o' ){
        s++;
        k--;
    }
    return s;
}

int sumab(int& x, int& y){
    k= x+1;
    l= y;
    s=0;
    while(k<n && mat[k][l]== 'o' ){
        s++;
        k++;
    }
    return s;
}

int sumde(int& x, int& y){
    return 0;
}

int sumiz(int& x, int& y){
    return 0;
}

int sumdaz(int& x, int& y){
    return 0;
}

int sumdad(int& x, int& y){
    return 0;
}

int sumdbz(int& x, int& y){
    return 0;
}

int sumdbd(int& x, int& y){
    return 0;
}








bool com(int& x, int& y){
    ar= sumar(x, y);
    ab= sumab(x, y);
    de= sumde(x, y);
    iz= sumiz(x, y);
    daz= sumdaz(x, y);
    dad= sumdad(x, y);
    dbz= sumdbz(x, y);
    dbd= sumdbd(x, y);
    cout<<ar<<" "<<ab<<"] ";
    if( ar>=4 || ab>= 4 || ar+ab>=4){
        return true;
    }
    if( de>=4 || iz>= 4 || de+iz>=4){
        return true;
    }
    // Diagonales

    if( daz>=4 || dbd>= 4 || daz+dbd>=4){
        return true;
    }
    if( dad>=4 || dbz>= 4 || dad+dbz>=4){
        return true;
    }


    return false;

}




int main(){ 
    int k;
    cin>> n>> k;

    for(int i=0;i<n; i++){
        for(int j=0; i+j<n; j++){
            mat[i][j]='.';
        }
    }

    nodo ac;
    int x;

    for(int i=0; i<k; i++){
        cin>> ac.x>> ac.y>>x;
        ac.x--;
        ac.y--;
        if( x==1){
            mat[ac.x][ac.y]='x';
        }else{
            mat[ac.x][ac.y]='o';
        }
        
    }
    vector<nodo> vec;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( mat[i][j] != 'x' && mat[i][j] != 'o' ){
                if( com(i, j)){
                ac.x=i;
                ac.y=j;
                vec.push_back(ac);
                }
            }
           
        }
    }

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i].x<<" "<<vec[i].y<<"\n";
    }


    return 0;
}