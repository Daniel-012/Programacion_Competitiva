#include<iostream> 

using namespace std;

int main(){
    int n;
    int s;
    int max=0;
    cin>> n>> s;
    max= n*s/(n-1);

    if(max%n== 0 || max%s==0){
        cout<< max-1<< " "<<max;
    }else{

    cout<<max<< " " << max;

    }
    



    return 0;
}