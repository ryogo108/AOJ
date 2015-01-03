//蟻本初級練習問題No.2

//  14/5/11  accepted

#include<iostream>
#include<string>
#include<map>

using namespace std;

typedef pair<int,int> P;

int W,H;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

char data[101][101];

void fi(P now){
	if(data[now.first][now.second]=='.')return;
	else{
		char temp=data[now.first][now.second];
		data[now.first][now.second]='.';
		for(int i=0;i<4;i++){
			int nx=now.second+dx[i],ny=now.first+dy[i];
			if(nx>=0 && nx<W && ny>=0 && ny<H && data[ny][nx]==temp){
				fi(P(ny,nx));
			}
		}
		
	}
	
return ;
}


int main(){

	while(cin>>H>>W && H!=0 && W!=0){	
		for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
		cin>>data[i][j];
		}
		}
		int ans=0;
		
		for(int i=0;i<H;i++)for(int j=0;j<W;j++){
			if(data[i][j]!='.'){
				ans++;
				fi(P(i,j));
			}
			
		}
		cout<<ans<<endl;
		
	}
	
}
