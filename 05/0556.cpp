#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int x,y;
		cin>>x>>y;
		
		int w=min(x,n-x+1);
		int h=min(y,n-y+1);
		int ans=min(w,h);
		cout<<(ans-1)%3+1<<endl;
	}
}
