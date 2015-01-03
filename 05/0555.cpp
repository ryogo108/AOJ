#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin>>str;
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++){
		string tmp;
		cin>>tmp;
		tmp=tmp+tmp;
		if(tmp.find(str,0)!=string::npos)ans++;
	}
	cout<<ans<<endl;
}
