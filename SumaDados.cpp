#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool suman( int n, vector<int> vec, vector<int> vec2){
    for(int j=0; j<vec.size(); j++){
        for( int i=0; i<vec2.size(); i++){
            if( vec[j]+ vec2[i]  == n){
                return true;
            }
        }
    }

    return false;

}






int main(){
    int x;
    int i;
    int c;
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec3;
    vector<int> vec4;
    for(  i=0;i<6; i++ ){
        cin>> x;
        vec1.push_back(x);
    }
    for(  i=0;i<6; i++ ){
        cin>> x;
        vec2.push_back(x);
    }
    cin>> c;
    vec3.push_back(c);
    c--;
    for(  i=0;i<c; i++ ){
        cin>> x;
        vec3.push_back(x);
    }
    c++;

    for( i=0; i<c; i++){
        if( suman(vec3[i], vec1, vec2)){
            vec4.push_back(vec3[i]);
        }
    }

    sort(vec4.begin(), vec4.end());


    if( vec4.size()<1){
        cout<<0;
    }else{
        vector<int> vec5;
        for( int i=0; i< vec4.size(); i++){
            if( vec4[i] != vec4[i+1] ){
                vec5.push_back( vec4[i]);
            }
        }




        for( i=0; i<vec5.size();  i++){
            cout<<vec5[i]<<" ";
    }
    }


    return 0;
}