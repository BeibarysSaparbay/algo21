#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x;
	set<int> st;
	for(int i=0;i<n;i++){
		cin>>x;
		st.insert(x);
	}
	
	set<int>::iterator it;
	int cnt = 0,cnt1= 0;
	for (it = st.begin(); it != st.end(); ++it)
        cnt ++;
        
	for (it = st.begin(); it != st.end(); ++it){
		cnt1 ++;
		if( cnt1 == cnt - 1 ){
			cout<<*it;
		}
	}
	return 0;
}
