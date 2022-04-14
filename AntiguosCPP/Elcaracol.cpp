#include<iostream>
#include<vector>

using namespace std;

int main(){
	long int  p ;
	long int  s;
	long int  r;
	long int  q=0;
    int c=0;
    cin>>p>>s>>r;
int i=1;
  int d=0;      
    
    while(q<=p){
       
        q=(s-r)*i;
        if(q>=p ){
            cout<<i;
        }
        i++;
         d++;
    }


	return 0;
}