#include<iostream>

using namespace std;

int main(){
	double ma=-1,mi=-1;
	double x;
	while(cin>>x){
		if(ma==-1 || ma<x)ma=x;
		if(mi==-1 || mi>x)mi=x;
	}
	
	cout<<ma-mi<<endl;
}
