#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

	int num;
	
	vector<int> vec1;
	vector<int> vec2;
	
	for(int i=0; i < 5; i++){
		cin>> num;
		vec1.push_back(num);
			
	}
	
	sort(vec1.begin(),vec1.end());
	
	for(int j=0; j<=5; j++){
		int a=0;
		for(int i=0; i <= 5; i++){
				
			if(vec1[j]==vec1[i]){
				a++;
				vec2.push_back(a);
			}else{
			}
		
		}	
	}
	int max=0;
	for(int i=0; i< vec2.size(); i++){
		if(vec2[i]>=max){
			max=vec2[i];
		}
		
	}

	if (max==5){
		cout<< "Identicamente iguales"  ;
	}else if (max==4){
		cout<<  "Muy iguales" ;
	}else if (max==3){
		cout<<  "Iguales" ;
	}else if (max==2){
		cout<<  "Diferentes" ;
	}else {
		cout<< "Muy diferentes";
		
	}
	
	
	
	return 0;
}

