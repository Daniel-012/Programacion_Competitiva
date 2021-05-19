#include<iostream>
#include<string>
using namespace std;

int main(){
	int voc=0;
	int ac=0;
	string par;
	getline(cin,par);
	
	for(int i=0;i<par.size();i++){
		if(par[i]!=' '){
		
		if(par[i]=='a' || par[i]=='e' || par[i]=='i' ||par[i]=='o' ||par[i]=='u' ){
			voc++;
		}else{
			ac++;
		}}
	}
	
	cout<< voc<<" "<<ac+voc <<"\n"<<par<<"\n";
	
	int i= par.size()-1;
	
	while(par[i] !=' ' && i!=-1){
		cout<< par[i];
		i--;
		
		
	}
	
	
	
	return 0;
}
