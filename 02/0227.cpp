#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int data[1010];
	
	int n,m;
	while(cin>>n>>m && n &&m){
		for(int i=0;i<n;i++){
			cin>>data[i];
		}
		sort(data,data+n,greater<int>());
		int ans=0;
		
		for(int i=0;i<n;i++){
			if((i+1)%m!=0)ans+=data[i];
		}
		
		cout<<ans<<endl;
	}
}
