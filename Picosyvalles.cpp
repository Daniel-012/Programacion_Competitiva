#include<iostream>
#include<vector>

using namespace std;

bool  comprueba( vector <int>  vec){

    if( vec[0]== vec[1]){
        return false;
    }else{


    if( vec[0]> vec[1]){
        for(int i=0; i< vec.size()-1; i++){
        
                if( vec[i]> vec[i+1]){
                    i++;
                }else{
                    return false;
                }
        }
        return true;
    }else{
         for(int i=0; i< vec.size()-1; i++){
        
                if( vec[i]< vec[i+1]){
                    i++;
                }else{
                    return false;
                }
        }
        return true;

    }
    }
}



int main(){

    int n;
    int x;
    vector<int> vec;

    cin>> n;

    for (int i=0; i<n; i++){
        cin >> x;
        vec.push_back(x);
    }

    if( comprueba(vec) ){

        cout<< 1;

    }else{

        cout<< 0;

    }





    return 0;
}