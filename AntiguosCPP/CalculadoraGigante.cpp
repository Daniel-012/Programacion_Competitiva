#include<bits/stdc++.h>

using namespace std;

vector<string> numeros= { "/--a|  ||  ||  |a--/", "/-|   |   |   |  ---","---a   |/--/|   a---","---a   |---|   |---/","|  ||  |a--|   |   |","/---|   a--a   |---/","/---|   |--a|  ||--/","----   /  /  /  /   ","/--a|  ||--||  |a--/","/--a|  |a--|   |a--/",   };

int main(){
    int n;
    char a= 92;
    int c=0;
    int h;

    cin>> n;

    while( n!=0){
    long long int x, y, sum;
    vector<int> suma;
    cin>> x>>y;
    sum= x+y;

    if(sum==0){
        c=0;
        
        for(int j=1; j<=5; j++){
            for(int i=c; i<4*j; i++){
                if( numeros[0][i]== 'a'){
                    cout<<a;
                }else{
                    cout<<numeros[0][i];
                }
                
                c++;
                
            }
            cout<<"\n";
        
        }
        n--;
        continue;
    }
    
    while(sum!=0){
        suma.push_back(sum%10);
        sum= sum/10;
    }

    int l=0;
    int con;

    reverse(suma.begin(), suma.end());


    for(int i=1; i<=5; i++){

        for(int z=0; z<suma.size(); z++){
            l= i*4;
            for(con=l-4; con<l; con++ ){
                if(numeros[suma[z]][con]== 'a' ){
                    cout<<a;
                }else{
                    cout<<numeros[suma[z]][con];
                }
                
            }
            cout<<" ";
        }
        cout<<"\n";
    }

    
    n--;

    }
    



    
    


    return 0;
}