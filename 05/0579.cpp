#include<iostream>

using namespace std;

struct clo{
	int l,h;
	int v;
};

int abs(int x){
	if(x<0)return x*-1;
	return x;
}

int tem[300];
clo data[300];
int dp[300][300]={0};

bool che(clo c,int t){
	if(c.l<=t && c.h>=t)return true;
	else return false;
}
int main(){
	int D,n;
	cin>>D>>n;
	for(int i=0;i<D;i++){
		cin>>tem[i];
	}
	for(int i=0;i<n;i++){
		cin>>data[i].l>>data[i].h>>data[i].v;
	}
	for(int i=0;i<n;i++){
		dp[0][i]=0;
	}
	for(int i=1;i<D;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(che(data[k],tem[i]) && che(data[j],tem[i-1]))dp[i][k]=max(dp[i][k],dp[i-1][j]+abs(data[k].v-data[j].v));
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,dp[D-1][i]);
	}
	cout<<ans<<endl;
	
}




