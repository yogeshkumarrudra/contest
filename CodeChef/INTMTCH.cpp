// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// input for x
	int x;
	cin>>x;
	//input for y 
	int y;
	cin>>y;
	if(abs(x-y)<=2){
	    cout<<"Interesting";
	}
	else{
	    cout<<"Boring";
	}
	return 0;

}
