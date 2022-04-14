#include<iostream>

using namespace std;

int main(){
    int n;
    int m;
    int c=1;
    cin>> n>> m;
    for( int i=1; i<=n; i++){
        if( i%2!=0){
            int j=m; 
            while(j!=0 ){
                cout<<"#";
                j--;
            }
            cout<<endl;
        }else{
            if( c%2== 0){
                cout<<"#";
                int j=m-1;
                while(j!=0 ){
                    cout<<".";
                    j--;
                }
                cout<<endl;
                
            }else{
            int j=m-1;
            while(j!=0 ){
                cout<<".";
                j--;
            }
            cout<<"#"<<endl;
            }
            c++;
        }

    }




    return 0;
}