#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
	    	if (arr[mid] == x)
            	return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	for(int i=0;i<m;i++){
		int x = b[i];
		int result = binarySearch(a,0,n-1,x);
		if(result == -1){
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
		}
	}
	
	return 0;
}
