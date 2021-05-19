#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    double n;
    double x;
    double s=0;
    cin>> n;

    for( int i=0; i<n; i++){
        cin>>x;
        s=s+x;
    }
    if( n==0){
        cout<<"";
    }else{
    if( (s/n)<=6){
    cout<< fixed<<setprecision(3)<< ((pow((s/n), 2))/60)*-1;
    }else{
        long double y;
        y= ( 10-(s/n));
    cout<< fixed<<setprecision(3)<<(1-((y*y )/40))*-1;
    }
    }



    return 0;
}