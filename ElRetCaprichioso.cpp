#include<iostream>
#include<vector>

using namespace std;

long long int mcd( long  long int n1, long int n2){
    int res;
    long int a;
    long int b;
    if(n1>= n2){
        a= n1;
        b= n2;
    }else{
        a= n2;
        b= n1;
    }
    do{
        res=b;
        b= a%b;
        a=res;
    }while(b!=0);
    return res;
}




long long int mcm(long long int a, long long int b){    
    int  x, z, y=1, i=2;
        if (a<b){x=a; z=b;} else {x=b; z=a;}
 
        do{
            if (x%i==0){
                if(z%i==0){
                y=y*i;
                x=x/i; z=z/i;   i=2;
                }else {
                    i++;
                }

            }else {i++;}

        }while(i<=x);

        y=y*z*x;
 
              
    return y;
}







long int eligemcd(vector<int> vec){
    int max1=-100;
    int max2= -100;
    for(int i=0; i<vec.size()-1; i++){
        int ccc= mcd(i, i+1);
        int jjj= mcm(i, i+1);
        if( ccc>= max1 ){
            max1= ccc;
            if( jjj>= max2){
                max2= jjj;
            }
           
        }

    }
    return max2;

}


int main(){
    int n;
    cin>> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>> vec[i];
    }
    cout<< eligemcd(vec);



    return 0;
}