#include<iostream>

using namespace std;

int d[4][2];

int c(double x){
	if(x<0.2)return 3;
	if(x<0.6)return 2;
	if(x<1.1)return 1;
	return 0;
}
int main(){
	double a,b;
	while(cin>>a>>b){
		d[c(a)][0]++;
		d[c(b)][1]++;
	}
	for(int i=0;i<4;i++)cout<<d[i][0]<<" "<<d[i][1]<<endl;
}
