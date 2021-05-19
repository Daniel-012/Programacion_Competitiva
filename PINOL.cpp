#include<iostream>

using namespace std;

int main(){

    for(int i = 0 ; i<15 ; i++){
    	if(i % 2 == 0){
		
        for(int j=15 ; j>=i ; j--)
        cout<<" ";
		 for(int c=0 ; c<=i ; c++)	

        cout<<"*";
        cout<<"    ";
        cout<<endl;
}}
    cout<< endl;

    return 0;
}

