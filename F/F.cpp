#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,m;
    cin>>a>>b>>c;
    m=0;
    if(a>b && a>c){
        m = a;
    }else if(b>a && b>c){
        m = b;
    }else{
        m = c;
    }

    if(m==a+b || m == b+c || m==a+c){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}
