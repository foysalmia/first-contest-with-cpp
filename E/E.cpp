#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int total = 0;
    if( n <= k )
        total += n*x;
    else if(k<n){
        total +=  k * x;
        total += (n-k)*y;
    }
    cout<<total<<endl;
    return 0;
}



