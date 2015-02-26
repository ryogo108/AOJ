#include<iostream>

using namespace std;

int main(){
	
	double v;
	while(cin>>v){
		double t=v/9.8;
		double y=4.9*t*t;
		y/=5.0;
		int ans=(y-(int)y==0.0)?y:(int)y+1;
		cout<<ans<<endl;
	}
}
