#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
    vector<int>v;
        int n, ans=0;
        cin>>n;
        for(int i = 0; i<n;i++){
           cin>> v[i];
        }
        sort(v.begin(),v.end());
        ans =v[n-1]- v[0]+1;
        

        cout<<ans<<endl;

    }
    return 0;

}


