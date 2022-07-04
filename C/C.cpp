#include<bits/stdc++.h>

using namespace std;

int main()
{
    char op;
    int a,b;

    cin>>a>>op>>b;

    int result = op == '+'  ? a+b : a-b;

    cout<<result;
    return 0;
}

