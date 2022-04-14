#include<iostream>
#include<string>


using namespace std;

int main(){
	string  n;
	string p;
	string r;
	
	
	getline(cin,n);
	getline(cin,p);
	
	if(n.size()>=p.size()){
		
		for(int j=p.size(); j>=0;j--){
			for(int i=n.size();i>=0;i--){
			r[j]=n[j]+p[i];	
			}
			
			
		}
	
		
		
	}
	
	
	cout<<r;
	
	return 0;
}
