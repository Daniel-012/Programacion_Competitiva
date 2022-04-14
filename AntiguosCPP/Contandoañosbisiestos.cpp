#include<iostream>
#include<vector>

using namespace std;

int main(){
    int ao;
    int c=0;
    vector<int> aos;

    for(int i =1; i<=10;i++){
        cin>> ao;
        aos.push_back(ao);
    }

    for(int i=0; i<10;i++){
        if(aos[i] % 4==0){
            c++;
        }
         if(aos[i] % 4==0 && aos[i] % 100==0 ){
            c--;
        }
         if(aos[i] % 400==0){
            c++;
        }
    }


    cout<<c;


    return 0;
}