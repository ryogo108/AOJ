#include<iostream>
#include<string>

using namespace std;


int map[6][6];

int main(){
	for(int i=0;i<6;i++)for(int j=0;j<6;j++)map[i][j]=-1;
	map[0][1]=map[2][4]=0;
	map[3][5]=map[4][3]=0;
	map[5][1]=0;
	map[0][5]=map[1][2]=1;
	map[2][3]=map[3][1]=1;
	map[4][5]=1;
	string str;
	while(cin>>str && str!="#"){
		int now=0;
		for(int i=0;i<str.size();i++){
			int tmp=str[i]-'0';
			for(int j=0;j<6;j++){
				if(map[now][j]==tmp){
					now=j;
					break;
				}
				if(j==5){
					cout<<"No"<<endl;
					goto fail;
				}
			}
		}
		if(now==3)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		fail:;
	}
}
