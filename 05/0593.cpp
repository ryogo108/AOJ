#include<iostream>

using namespace std;

int data[2][1500]={0};

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>data[0][i];
	}
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		for(int j=0;j<n;j++){
			if(x>=data[0][j]){
				data[1][j]++;
				break;
			}
		}
	}
	int ma=0;
	int ans=0;
	for(int i=0;i<n;i++){
		if(data[1][i]>ma){
			ma=data[1][i];
			ans=i;
		}
	}
	cout<<ans+1<<endl;
}
