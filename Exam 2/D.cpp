#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ull unsigned long long
#define mod (int)(1e9+7)

int main(){
    int n,m;
    cin>>n>>m;
    int x=n+m;
    for(int i=3; i<=(x/2)+5; ++i){
        if(x%i == 0){
            int k=i, p=x/i;
            if(2*k+2*p-4 == n && ((k-2)*(p-2)) == m){
                cout<<max(k,p)<<" "<<min(k,p)<<"\n";
                return 0;
            }
        }
    }
}
