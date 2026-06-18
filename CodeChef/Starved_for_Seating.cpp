// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count=0;
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    vector<int>v(n);
	    int sum = 0;
	    for(int i = 0; i<n;i++){
	        cin>>v[i];
	        sum = sum+v[i];
	        
	    }
	    int count = 0;
	    for(int j =n-1;j>=0;j--){
	        for(int w = j-1;w>=0;w--){
	            
	            int pre = sum/2.0+v[j]/2.0+v[w]/2.0;
	            
	            
	            if(pre>k){
	                count++;
	            }
	            
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;

}
