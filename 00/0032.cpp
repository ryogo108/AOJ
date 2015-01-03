#include<iostream>

using namespace std;

int pow(int x){
	return x*x;
}

int main(){
	int a,b,c;
	int ans1=0;
	int ans2=0;
	char ch;
	while(cin>>a>>ch>>b>>ch>>c){
		if(pow(a)+pow(b)==pow(c))ans1++;
		else if(a==b)ans2++;
	}
	
	cout<<ans1<<endl<<ans2<<endl;
}
