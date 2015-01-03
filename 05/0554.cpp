#include<iostream>

using namespace std;

int main(){
	int ans=0;
	for(int i=0;i<4;i++){
		int x;
		cin>>x;
		ans+=x;
	}
	cout<<ans/60<<endl<<ans%60<<endl;
}
