#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int a;
	int sum=0;
	vector<int> si;
	vector<int> no;
	
	for(int i=0;i<5;i++){
		cin>>a;
		si.push_back(a);
	}

	sort(si.begin(),si.end());

	int b=1;
	for(int j=0;j<5;j++){
		
		for(int i=0; i<4;i++){
			if(si[i+b]%si[j]==0 && si[i+b]!=0 && si[j]!=0){
				no.push_back(1);
			}else{
				no.push_back(0);
			}
		
		}
		b++;
	}

	for(int i=0;i<no.size();i++){
		sum=sum+no[i];
	}

	if(sum==0){
		cout<<"No existen";
	}else{
		cout<<"Existen";
	}
	
	return 0;
}
