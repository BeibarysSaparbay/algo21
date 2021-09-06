#include<iostream>
using namespace std;
int nod(long long int n,long long int m){
	if(m==0)
		return n;
	return nod(m, n % m);
}

int main(){
	long long int n,k;
	cin>>n>>k;
	cout<<n*k / nod(n,k);
	
	
	return 0;
}
