#include<bits/stdc++.h>
#define INF 1e9

using namespace std;
typedef long long int lli;

lli n, ans;
vector<lli> vec(100001);

lli balance( lli f , lli s )
{
    lli tmp = 0;
    lli diff = s - f;
    for( lli i = 0; i < n; i ++ )
    {
        lli aux = abs( vec[i] - ( f + diff * i ) );abs()
        if( aux > 1 )
            return INF;
        tmp += aux;
    }
    return tmp;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for( lli i = 0; i < n; i ++ ){
        cin >> vec[i];
    }
    
    
    ans = balance( a[0] , a[1] );
    for( lli i = -1; i <= 1; i ++ )
        for( lli j = -1; j <= 1; j ++ )
            ans = min( ans , balance( a[0] + i , a[1] + j ) );
    
    if( ans == INF ){
        ans = -1;
    }else{
        cout << ans;
    }
        

    


    return 0;
}
