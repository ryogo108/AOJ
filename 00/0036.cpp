#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
char data[8][8];


struct P{
	P(){};
	P(int a,int b){
		x=a;
		y=b;
	}
	int x,y;
};

bool input(){
	for(int i=0;i<8;i++){
		if( scanf( "%s",data[i] ) == EOF )return false;
	}
	return true;
}
int main(){
	
	while(input()){
		P o=P(-1,-1);
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(data[i][j]=='1'){
					o=P(j,i);
					goto suc;
				}
			}
		}
		suc:;
		{
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					if(o.y+i>=8 || o.x+j>=8)goto fail1;
					if(data[o.y+i][o.x+j]!='1')goto fail1;
				}
			}
			cout<<"A"<<endl;
			continue;
			fail1:;
		}
		{
			for(int i=0;i<4;i++){
				if(o.y+i>=8)goto fail2;
				if(data[o.y+i][o.x]!='1')goto fail2;
			}
			cout<<"B"<<endl;
			continue;
			fail2:; 
		}
		{
			for(int i=0;i<4;i++){
				if(o.x+i>=8)goto fail3;
				if(data[o.y][o.x+i]!='1')goto fail3;
			}
			cout<<"C"<<endl;
			continue;
			fail3:;
		}
		{
			if(o.y+2>=8 || o.x-1<0)goto fail4;
			if(data[o.y+1][o.x]!='1')goto fail4;
			if(data[o.y+1][o.x-1]!='1')goto fail4;
			if(data[o.y+2][o.x-1]!='1')goto fail4;
			cout<<"D"<<endl;
			continue;
			fail4:;
		}
		{
			if(o.x+2>=8 || o.y+1>=8)goto fail5;
			if(data[o.y][o.x+1]!='1')goto fail5;
			if(data[o.y+1][o.x+1]!='1')goto fail5;
			if(data[o.y+1][o.x+2]!='1')goto fail5;
			cout<<"E"<<endl;
			continue;
			fail5:;
		}
		{
			if(o.x+1>=8 || o.y+2>=8)goto fail6;
			if(data[o.y+1][o.x]!='1')goto fail6;
			if(data[o.y+1][o.x+1]!='1')goto fail6;
			if(data[o.y+2][o.x+1]!='1')goto fail6;
			cout<<"F"<<endl;
			continue;
			fail6:;
		}
		{
			if(o.x!=-1)cout<<"G"<<endl;
		}
	}
}	
