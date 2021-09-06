#include<iostream>
#include<cmath>
using namespace std;

bool prime(long long n){ 
	for(long long i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}

int main(){
	long long n;
	cin>>n;
	if(prime(n) == true){
		cout<<"prime";
	}
	else{
		cout<<"composite";
	}
	return 0;
}
