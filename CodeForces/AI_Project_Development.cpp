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
        ans1 = ceil(n/(x+y));

        int ans2;
        int rem = (n - z*x);
        // ans2 = (z +ceil((n-z*x)/(x+10*y))); 
        ans2 = z + ceil(rem / (x + 10 * y));

 
        ans = min(ans1,ans2);

        cout<<ans<<endl;

    };
};