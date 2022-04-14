#include <iostream>
#include <vector> 

using namespace std; 

vector <int> vec ;
int i=0;



void calcula_sumas(int pos,  vector<int>& valores, int objetivo) { 
    int sum=0;
    for( int j=0; j<vec.size(); j++){
            sum += vec[j];
        }
    if( sum>= objetivo){
        cout<< "El Camino: ";
        for( int j=0; j<vec.size(); j++){
            cout<< vec[j]<<" ";
        }
        cout<<"\n"<< "La Suma Es: "<<sum<<"\n";
        
    }
    
    for(int i= pos; i<valores.size(); i++){
        vec.push_back( valores[i]);

        calcula_sumas( i+1, valores, objetivo);

        vec.pop_back();

    }


}




int main() { int n; int x;
	cin >> n >> x; 
	vector<int> valores(n);
	for (int i = 0; i < valores.size(); i++) { 
		cin >> valores[i]; 
	} 
	calcula_sumas(0,  valores, x); 

return 0;
}