    #include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;

    cin>> n;
    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin>> vec[i];
    }

    int sumamayor=0;
    int j= n;
    int sumaactual=0;

    for(int i=0; i<j; i++  ){
        sumaactual += vec[i];
        if(sumaactual>= sumamayor){
            sumamayor= sumaactual;
        }
        if( sumaactual<0){
            sumaactual=0;
        }
    }

    cout<< sumamayor;


    return 0;
}