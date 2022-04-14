#include<bits/stdc++.h>

using namespace std;


void valorabsoluto(int a){
	if(a<=0){
		a=a*-1;
	}
	cout<< a<<"\n";

}

void maximo(int a, int b ){
	int maxi=  max(a,b);
	cout<<maxi<<"\n";
}

void minimo(int a, int b){
	int mini= min(a, b);
	cout<<mini<<"\n";
}

void raiz(int a){
	cout<< fixed<< setprecision(2)<< sqrt(a)<<"\n";
}

void potencias(int a, int b){
	
	cout<<fixed<< setprecision(0)<<pow(a,b)<<"\n";
	
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n ;
	int c;
	int a;
	int b;
	
	cin>> n;
	
	for(int i=0 ; i< n;i++ ){
		cin>>c;
		if(c==1){
			cin >>a;
			valorabsoluto(a);
			
		}else if(c==2){
			cin>>a>>b;
			maximo(a,b);
			
		}else if(c==3){
			cin>> a>>b;
			minimo(a,b);
			
		}else if(c==4){
			cin>>a;
			raiz(a);
			
		}else if(c==5){
			cin>>a>>b;
			potencias(a,b);
		}	
	}
	
	

	return 0;
}
