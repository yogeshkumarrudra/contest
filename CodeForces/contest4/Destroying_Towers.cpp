#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        //number of tower = n
        int n;
        cin>>n;
        //height of tower = array
        vector<int>v;
        for(int i = 0;i <n;i++){
            cin>>v[i];
        }



        int sum = INT_MIN;
        for(int i =0; i<n;i++){
            if(v[i]<v[i+1]){
                sum = sum+v[i];
                v[i+1]=v[i];
                if(v[i+1]==v[n-1]){
                    sum=sum+v[i]+v[i+1];
                }
            }
            else{
                // v[i+1]=v[i];
                sum = sum+v[i];
                if(v[i+1]==v[n-1]){
                    sum=sum+v[i]+v[i+1];
                }
            }
        }
        return sum;








    }
    return 0;
}