#include <iostream>
#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

int main(){
	int prime[MAX],i,j,n;
	cin>>n;
	for (i = 2; i < MAX; ++i){
		prime[i]=1;
	}
	for(i=2; i<MAX; i++){
		if(prime[i]){
			for (j = i; j < MAX/i; ++j)
				prime[i*j] = 0;
		}
	}
	for (i = 2; i < n-1; ++i){
		if(prime[i])
			cout<<i<<endl;
	}
	return 0;
}