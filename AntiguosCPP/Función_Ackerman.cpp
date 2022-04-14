#include <iostream>
#include<conio.h>
using namespace std;
int AckermanR(int n,int m)
{
 if (!n) 
    return (m+1);
 else if (!m) 
    return (AckermanR(n-1, 1));
 else 
    return (AckermanR(n-1, AckermanR(n,m-1)));
}
int main()
{
    int m, n;
    cout<<"Ingresa el valor de m: ";
    cin>>m;
    cout<<"Ingresa el valor de n: ";
    cin>>n;
    cout<<"Ackerman("<<m<<","<<n<<") = "<<AckermanR(n,m)<<endl;
    cout<<"_____________________________";

    getch();
    return(0);
}