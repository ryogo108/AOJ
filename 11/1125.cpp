#include<iostream>

using namespace std;
int map[150][150];
int main(){
	int n;
	while(cin>>n &&n){
		fill((int*)map,(int*)map+150*150,0);
		int w,h;
		cin>>w>>h;
		
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			map[y][x]++;
		}
		for(int i=0;i<150;i++){
			for(int j=1;j<150;j++){
				map[i][j]+=map[i][j-1];
			}
		}
		
		int s,t;
		cin>>s>>t;
		int ans=0;
		for(int i=0;i+t-1<=h;i++){
			for(int j=1;j+s-1<=w;j++){
				int tmp=0;
				for(int k=0;k<t;k++){
					tmp+=map[i+k][j+s-1]-map[i+k][j-1];
				}
				ans=max(ans,tmp);
			}
		}
		cout<<ans<<endl;
	}
}
