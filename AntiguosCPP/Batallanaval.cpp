#include<bits/stdc++.h>

using namespace std;









int main(){
    int suma=0;
    int n;
    cin>> n;
    vector<int> vec1(n);
    vector<int> vec2(n);

    int i;
    for(i=0; i<n; i++){
        cin>> vec1[i];
    }
    for(i=0; i<n; i++){
        cin>> vec2[i];
    }

    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());

    int j=n-1;
    for(i=n-1; i>=0; i--){

        while( vec1[i] <= vec2[j] ){
            j--;
        }
        

        if( j< 0){
            break;
        }else if( vec1[i] > vec2[j] && j>=0){
            suma += vec1[i];
        }
        
        j--;
          
        
    }
    

    cout<< suma;

    return 0;
}