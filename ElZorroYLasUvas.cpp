#include<iostream>
#include<vector>


int main(){
	int a, a1, b, b1;

	std::vector<int> vec1;
	
	std::cin>> a;
	for(int i=0; i<a;i++){
		std::cin>> a1;
		vec1.push_back(a1);
	}
	
	std::cin>> b;
	for(int i=0;i<b; i++){
		std::cin>>b1;
			 int s=0;
		for(int j=0;j<vec1.size();j++){
			if(b1>=vec1[j]){
				s++;
			}			
		}
		std::cout<<s<<" ";
	}
	return 0;
}
