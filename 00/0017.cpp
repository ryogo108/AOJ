#include<iostream>
#include<string>
using namespace std;

string change(string s,int num){

	for(int i=0;i<s.size();i++){
		if(s[i]+num>'z')s[i]=(s[i]+num-'z'+'a'-1);
		else s[i]=(s[i]+num);
	}
	return s;
}
char change(char c,int num){
	char re;
	if(c+num>'z')re=c+num-'z'+'a'-1;
	else re=c+num;
	return re;
}

int solve(string s){
	string now;
	
	for(int i=0;i<s.size();i++){
		if(s[i]>='a' && s[i]<='z')now+=s[i];
		else {
			for(int j=0;j<=26;j++){
				string tmp=change(now,j);
				if(tmp=="the" || tmp=="this" || tmp=="that"){
					return j;
				}
			}
			now.clear();
		}
	}
}

string ans(string s){
	int n=solve(s);
	string ans;
	for(int i=0;i<s.size();i++){
		if(s[i]>='a' && s[i]<='z')ans+=change(s[i],n);
		else ans+=s[i];
	}
	return ans;
}

int main(){
	string str;
	
	while(getline(cin,str)){
		cout<<ans(str)<<endl;
	}
}
