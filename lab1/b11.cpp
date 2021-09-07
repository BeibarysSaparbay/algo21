#include<iostream>
using namespace std;

const int mx = 100000;
int s[mx];

int main(){
	string d;
	int cursor = 0;
	int n;
	while(cin>>d){
		if(d =="push"){
			cin>>n;
			s[cursor] = n;
			cursor++;
			cout<<"ok"<<endl; 
		}
		else if(d == "front"){
			if(cursor == 0)
				cout<<"error"<<endl;
			else
				cout<<s[0]<<endl;
		}
		
		else if(d == "pop"){
			if(cursor == 0)
				cout<<"error"<<endl;
			else{
			cout<<s[0]<<endl;
			for(int i=0;i<cursor - 1;i++){
				s[i] = s[i+1];
				}
				cursor --;
			}	
		}
		
		else if(d == "size"){
			cout<<cursor<<endl;
		}
		
		else if(d == "clear"){
			for(int i=0;i<cursor;i++){
				s[i] = 0; 
			}
			cursor = 0;
			cout<<"ok"<<endl;
		}
		else if(d =="exit"){
			cout<<"bye"<<endl;
			break;
		}
	}
	
	return 0;
}
