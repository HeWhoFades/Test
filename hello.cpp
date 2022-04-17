#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a, b, c; 
        cin>>a>>b>>c;
        
        if(c% __gcd(a,b) == 0)
        {
            if(i==t) cout<<"Case "<<i<<": Yes";
            else cout<<"Case "<<i<<": Yes\n";
        }
       
        
        else{
            if(i==t) cout<<"Case "<<i<<": No";
            else cout<<"Case "<<i<<": No\n";
        }
    }
    
    return 0;

}
