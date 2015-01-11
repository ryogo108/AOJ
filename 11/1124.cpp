#include<iostream>
#include<map>
using namespace std;
int data[1000];
int main(){
	int n,q;
	while(cin>>n>>q && n){
		for(int i=0;i<1000;i++)data[i]=0;
		
		for(int i=0;i<n;i++){
			int m;
			cin>>m;
			for(int j=0;j<m;j++){
				int x;
				cin>>x;
				data[x]++;
			}
		}
		int ma=0,ans=0;
		for(int i=0;i<1000;i++){
			if(data[i]>ma){
				ma=data[i];
				ans=i;
			}
		}
		if(ma>=q)cout<<ans<<endl;
		else cout<<0<<endl;
	}
}
