#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> vec;
    int x;
    int suma=0;
    int c=0;

    while( c!=3){
        cin>> x;
        vec.push_back(x);
        c++;
    }
    sort( vec.begin(), vec.end());
    c=1;
    x=0;
    while( x!=2){
        if( vec[x]== vec[x+1]){
            c++;
        }
        x++;

    }
   

    suma= vec[0]+vec[1]-vec[2];

    if( suma<=0){
        cout<<"Invalid";
    }else{
        if(c==1 ){
            cout<< "Scalene";
        }else if( c==2){
            cout<< "Isosceles";
        }else if( c==3){
            cout<< "Equilateral";
        }
    }



    return 0;
}