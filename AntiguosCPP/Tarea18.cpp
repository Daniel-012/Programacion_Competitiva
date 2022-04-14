#include<iostream>
#include<vector>

using namespace std;


int sumamax( vector <int> vec){
    int sumamax=0;
    for(int i=0; i< vec.size(); i++){

        for(int j=i; j< vec.size(); j++){

            int segundasum = 0;

            for( int k= i; k<= j; k++){

                segundasum = segundasum + vec[k];

                if( segundasum > sumamax){

                    sumamax = segundasum;
                }
            } 

        }
    }
    return sumamax;
}






int main(){
    int n;
    int x;
    vector<int> vec;

    cin>> n;

    for(int i=0; i<n; i++){
        cin>> x;
        vec.push_back(x);

    }
    cout<< sumamax(vec);



    return 0;
}