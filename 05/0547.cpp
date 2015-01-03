#include<iostream>

using namespace std;
struct st{
	st(){};
	st(int f1,int f2,int n1,int n2){
	fx=f1;
	fy=f2;
	nx=n1;
	ny=n2;
}
int fx;int fy;
int nx;int ny;
};

st dp[150][150];
int main(){
	
	for(int i=0;i<150;i++){
		dp[0][i]=st(0,1,0,0);
		dp[i][0]=st(1,0,0,0);
	}
	
	for(int i=1;i<150;i++){
		for(int j=1;j<150;j++){
			dp[i][j].fx=(dp[i-1][j].fx+dp[i-1][j].nx)%100000;
			dp[i][j].fy=(dp[i][j-1].fy+dp[i][j-1].ny)%100000;
			dp[i][j].nx=dp[i-1][j].fy;
			dp[i][j].ny=dp[i][j-1].fx;
		}
	}
	int w,h;
	while(cin>>w>>h && w &&h){
		w--;
		h--;
		int ans=dp[w][h].fx+dp[w][h].fy+dp[w][h].nx+dp[w][h].ny;
		cout<<ans%100000<<endl;
	}
}
