#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int firstArea = a*b;
    int secondArea = c*d;

    if(firstArea >= secondArea)
        cout<<firstArea;
    else if(secondArea > firstArea)
        cout<<secondArea;


    return 0;
}

