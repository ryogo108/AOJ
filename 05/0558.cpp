//蟻本初級練習問題No.4

// 14/5/13  accepted

#include<iostream>
#include<map>
#include<queue>

#define INF 1000000
using namespace std;

typedef pair<int ,int> P;

char map_data[1001][1001];
int data[1001][1001];
int W,H;

int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int bfs (P s,P g){
	fill((int*) data,(int*)(data +1001),INF);
	data[s.first][s.second]=0;
	queue<P> que;

	que.push(s);
	while(que.size()){
		P p=que.front();que.pop();
		
		for(int i=0;i<4;i++){
			int nx=p.second+dx[i],ny=p.first+dy[i];
			if(0<=nx && nx<W && 0<=ny && ny<H && map_data[ny][nx]!='X' && data[p.first][p.second]+1<data[ny][nx]){
				que.push(P(ny,nx));
				data[ny][nx]=data[p.first][p.second]+1;
				
			}

		}

	}
return data[g.first][g.second];	
}

int main(){
	int n;
	cin>>H>>W>>n;

	P ar[10];

	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin>>map_data[i][j];
			if(map_data[i][j]!='.' && map_data[i][j]!='X'){
				if(map_data[i][j]=='S')ar[0]=P(i,j);
				else{
				ar[map_data[i][j]-'0']=P(i,j);
				}
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=bfs(ar[i],ar[i+1]);
	}

	cout<<ans<<endl;
}
