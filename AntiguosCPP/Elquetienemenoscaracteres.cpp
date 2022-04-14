#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	string p1;
	string min = "                                                         ";
	
	cin>>n;
	
	for (int i=0;i<n;i++){
		cin>> p1;
		if(p1.size()<min.size()){
			min=p1;
		}
        
	}
	
	if(min.size()%2==0){
		//int i=0;
		cout<<min<<"\n"<<min.size()<< "\n"<<"par";
	}else{
		cout<<min<<"\n"<<min.size()<< "\n"<<"impar";
	}
	
	return 0;
}
