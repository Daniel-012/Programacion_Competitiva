#include<iostream>
#include<vector>

bool esprimo(int n){
    if(n<=1){
        return false;
    }

    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;


}



using namespace std;

int main (){
    int n;
    vector<int> vec;
    cin>> n;

    for(int i=0;i<n;i++){
        int numero;
        cin>>numero;
        vec.push_back(numero);
    }
    int in, fin;
    cin>>in>>fin;
    int c=0;
    for(int i=0;i<n;i++){
        if(esprimo(vec[i]) && vec[i]>=in && vec[i] <= fin){
            c++;
        }
    }

    cout<<c;


    return  0;
}