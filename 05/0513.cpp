#include<iostream>

using namespace std;

int pre[300];
int now[300];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<300;i++){
		pre[i]=i+1;
	}
	int m;
	cin>>m;
	for(int j=0;j<m;j++){
		int x;
		cin>>x;
		if(x==0){
			for(int i=0;i<n;i++){
				now[2*i]=pre[i];
				now[2*i+1]=pre[i+n];
			}
		
		}
		else {
			int k=x;
			for(int i=0;i<2*n-k;i++){
				now[i]=pre[i+k];
			}
			for(int i=0;i<k;i++){
				now[i+2*n-k]=pre[i];
			}
		}
		for(int i=0;i<2*n;i++)pre[i]=now[i];
	}
	
	for(int i=0;i<2*n;i++)cout<<now[i]<<endl;
	
}
