#include<iostream>
#include<cstdio>
using namespace std;
int data[15][15]={0};
int main(){
	
	int x,y,s;
	char c;
	while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
		
		while(1){
			data[x][y]++;
			if(y-1>=0)data[x][y-1]++;
			if(x+1<10)data[x+1][y]++;
			if(y+1<10)data[x][y+1]++;
			if(x-1>=0)data[x-1][y]++;
			if(s==1)break;
			if(x+1<10 && y+1<10)data[x+1][y+1]++;
			if(x+1<10 && y-1>=0)data[x+1][y-1]++;
			if(x-1>=0 && y-1>=0)data[x-1][y-1]++;
			if(x-1>=0 && y+1<10)data[x-1][y+1]++;
			if(s==2)break;
			if(x+2<10)data[x+2][y]++;
			if(y-2>=0)data[x][y-2]++;
			if(y+2<10)data[x][y+2]++;
			if(x-2>=0)data[x-2][y]++;
			break;
		}
		
	}
	int white=0,ma=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(data[i][j]==0)white++;
			ma=max(ma,data[i][j]);
		}
	}
	
	cout<<white<<endl<<ma<<endl;
}
	
