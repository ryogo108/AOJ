#include<iostream>
#include<set>
using namespace std;

int data[510][510];
int main(){
	int n;
	int m;
	while(cin>>n>>m &&n&&m){
		fill_n((int*)data,510*510,0);
		set<int>ans;
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			data[x][y]=data[y][x]=1;
		}
		
		for(int i=1;i<=n;i++){
			if(data[1][i]==1){
				ans.insert(i);
				for(int j=2;j<=n;j++){
					if(data[i][j]==1)ans.insert(j);
				}
			}
		}
		cout<<ans.size()<<endl;
	}
}
