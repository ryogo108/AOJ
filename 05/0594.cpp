#include<iostream>

using namespace std;
struct P{
int x,y;
};
int main(){
	int W,H,n;
	cin>>W>>H>>n;
	
	P now;
	cin>>now.x>>now.y;
	int ans=0;
	for(int i=1;i<n;i++){
		P tmp;
		cin>>tmp.x>>tmp.y;
		while(now.x!=tmp.x ||now.y!=tmp.y){
			ans++;
			if(now.x>tmp.x){
				if(now.y>tmp.y){
					now.x--;
					now.y--;
				}
				else now.x--;
			}
			else if(now.x==tmp.x){
				if(now.y>tmp.y)now.y--;
				else now.y++;
			}
			else if(now.x<tmp.x){
				if(now.y<tmp.y){
					now.x++;
					now.y++;
				}
				else now.x++;
			}
		}
	
	}
	cout<<ans<<endl;
}
