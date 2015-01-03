#include<iostream>

using namespace std;

int main(){
	int ans=-50;
	{
		int tmp=5000;
		for(int i=0;i<3;i++){
			int x;
			cin>>x;
			tmp=min(tmp,x);
		}
		ans+=tmp;
	}
	{
		int tmp=5000;
		for(int i=0;i<2;i++){
			int x;
			cin>>x;
			tmp=min(tmp,x);
		}
		ans+=tmp;
	}
	
	cout<<ans<<endl;
}
