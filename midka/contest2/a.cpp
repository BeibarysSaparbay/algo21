#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int sum = 0;
    while(x != 0){
        x -- ;
        sort(a,a+n);
        sum += a[n-1];
        a[n-1] --;
    }
    cout<<sum;
    return 0;
}