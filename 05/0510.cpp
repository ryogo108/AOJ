#include<iostream>

using namespace std;

int main(){
	int a=0,b=0;
	for(int i=0;i<4;i++){
		int x;
		cin>>x;
		a+=x;
	}
	for(int i=0;i<4;i++){
		int x;
		cin>>x;
		b+=x;
	}
	cout<<max(a,b)<<endl;
}
