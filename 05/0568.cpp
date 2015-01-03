#include<iostream>
#include<map>

#define MOD 10000

using namespace std;

map<int,int>data;

int dp[200][3][3]={0};

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		int a,b;
		cin>>a>>b;
		data[a]=b;
	}
	
	for(int i=1;i<=n;i++){
		map<int,int>::iterator pa;
		bool it=false;
		if(data.find(i)!=data.end()){
			pa=data.find(i);
			it=true;
		}
		
		if(i==1){
			if(it){
				dp[i][pa->second-1][1]=1;
			}
			else {
				for(int j=0;j<3;j++){
					dp[i][j][1]=1;
				}
			}
		}
		else {
			if(it){
				for(int j=0;j<3;j++){
					if(j!=pa->second-1)dp[i][pa->second-1][1]+=dp[i-1][j][1]+dp[i-1][j][2];
					dp[i][pa->second-1][1]%=MOD;
				}
				dp[i][pa->second-1][2]=dp[i-1][pa->second-1][1];
			}
		
			else {
				for(int k=0;k<3;k++){
					for(int j=0;j<3;j++){
						if(j!=k)dp[i][k][1]+=dp[i-1][j][1]+dp[i-1][j][2];
						dp[i][k][1]%=MOD;
					}
					dp[i][k][2]=dp[i-1][k][1];
				}
				
			}
		}
		
	}
	
	int ans=0;
	for(int i=0;i<3;i++){
		ans+=dp[n][i][1]+dp[n][i][2];
	}
	cout<<ans%MOD<<endl;
}	
