#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int ans;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        int y;
        cin>>y;
        int z;
        cin>>z;
           

    
        int ans1;
        ans1 = (n + (x+y) - 1) / (x+y);

        int ans2;

        if (z * x >= n) {
            ans2 = (n + x - 1) / x;
        }
        else {
            
            int remaining = n - z * x;

            
            int extra = (remaining + (x + 10 * y) - 1) / (x + 10 * y);

            ans2 = z + extra;
        }
        // ans2 = (z +ceil((n-z*x)/(x+10*y))); 
 
        ans = min(ans1,ans2);

        cout<<ans<<endl;

    };
};