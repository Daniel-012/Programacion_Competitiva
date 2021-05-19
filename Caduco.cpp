#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int c=0;
    int i=0;
    int n;
    int x;
    string nombre;
    vector<int > vec= {0};
    vector<int> vec2= {0};
    cin>> n;
    for(i=0; i<n; i++){
        cin>> nombre;
        for(int j=0; j<3; j++){
            cin>> x;
            vec.push_back(x);
        }
    }
    for(i=0; i<3; i++){
        cin>> x;
        vec2.push_back(x);
    }
    x=0;
    int y=0;
    for(i=1; i<=n; i++){
        if( vec[i*3] == vec2[3]  && vec[i*2+x] == vec2[2]  && vec[i+y]<vec2[1] ){
            c++;
        }else if( vec[i*3] == vec2[3]  && vec[i*2+x] < vec2[2] ){
            c++;
        }else if ( vec[i*3] < vec2[3]){
            c++;
        }
        x++;
        y=y+3;
    }


    cout<< c;


    return 0;
}