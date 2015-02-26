#include<iostream>
#include<string>
using namespace std;

string solve(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]>='a' && s[i]<='z'){
			s[i]=(s[i]-'a'+'A');
		}
	}
	return s;
}

int main(){
	string str;
	
	while(getline(cin,str)){
		cout<<solve(str)<<endl;
	}
}
