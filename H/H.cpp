
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int y = 0,x = 0;
    if(n>15){
        y = n/15;
    }
    x = n * 800;
    int result = x - (y * 200);

    cout<<result<<endl;

    return 0;
}

