#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int mx = - 10001;
	int ind;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i] > mx){
			mx = a[i];
			ind = i;
		}
	}
	cout<<ind+1;
	return 0;
}
