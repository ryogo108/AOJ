#include<iostream>
#include<string>
using namespace std;

bool che(int x,int y,char c){
	switch(c){
	case 'J':if((x>>0&1)!=1)return false;break;
	case 'O':if((x>>1&1)!=1)return false;break;
	case 'I':if((x>>2&1)!=1)return false;break;
	}
	
	for(int i=0;i<3;i++){
		if(x>>i&1==1&&y>>i&1==1)return true;
	}
	return false;
}

int dp[1500][10]={0};
int main(){
	int n;
	string str;
	cin>>n>>str;
	dp[0][1]=1;
	for(int i=1;i<=n;i++){
		for(int x=0;x<8;x++){
			for(int y=0;y<8;y++){
				if(che(x,y,str[i-1])){
					dp[i][x]+=dp[i-1][y];
					dp[i][x]%=10007;
					
				}
			}
		}
	}
	int ans=0;
	for(int i=0;i<8;i++){
		ans+=dp[n][i];
		ans%=10007;
	}
	
	cout<<ans<<endl;

}
