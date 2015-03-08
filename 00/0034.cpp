#include<iostream>

using namespace std;

int data[11];
int sum=0;
bool input(){
	fill(data,data+11,0);
	char c;
	int x;
	for(int i=1;i<=10;i++){
		if(!(cin>>x))return false;
		cin>>c;
		data[i]=data[i-1]+x;
	}
	return true;
}
int main(){
	while(input()){
		int v1,v2;
		char c;
		cin>>v1>>c>>v2;
		double t=1.*data[10]/(v1+v2);
		
		for(int i=1;i<=10;i++){
			if(v1*t<=data[i]){
				cout<<i<<endl;
				break;
			}
		}
	}
}
