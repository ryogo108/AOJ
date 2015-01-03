#include<iostream>

using namespace std;

int main(){
	int sum=0;
	double num=0;
	int cou=0;
	int a,b;
	char ch;
	while(cin>>a>>ch>>b){
		sum+=a*b;
		num+=b;
		cou++;
	}
	
	cout<<sum<<endl<<(int)(num/(double)cou+0.5)<<endl;
}
