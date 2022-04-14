#include<iostream>

using namespace std;

int mcm( int k, int o, int d){
    int b=0;
    int c=0;
    int sum1=0;
    int suma2=0;
    while( b==0){
        c++;
        sum1= sum1+ k;
        suma2= suma2 +o;

        if( sum1== suma2- (d*o)){
            b++;
        }
        cout<<sum1<<" "<<suma2<<endl;
    }




    return c ;
}






int main(){
    int k;
    int o;
    int d;
    cin>> k>> o>> d;
    if( k== o || o< k){
        cout<< "Jamas, Koku rifa";
    }else{
        cout<< mcm( k, o , d);
    }





    return 0;
}