#include<iostream>

#define INF 1000000
using namespace std;

int main(){
	int data[2][110][110];
	
	int n,m;
	while(cin>>n>>m && n|m){
		for(int i=0;i<110;i++){
		for(int j=0;j<110;j++){
				data[1][i][j]=INF;
				data[0][i][j]=INF;
			
		}
	}
	int a,b,cost,time;
	for(int i=0;i<n;i++){
		cin>>a>>b>>cost>>time;
		data[0][a][b]=cost;
		data[0][b][a]=cost;
		data[1][a][b]=time;
		data[1][b][a]=time;
	}

	for(int count=0;count<2;count++){
		for(int k=1;k<=m;k++){
			for(int i=1;i<=m;i++){
				for(int j=1;j<=m;j++)data[count][i][j]=min(data[count][i][j],data[count][i][k]+data[count][k][j]);
			}
		}
	}			

	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int p,q,r;
		cin>>p>>q>>r;
		cout<<data[r][p][q]<<endl;
	}
	}
}
