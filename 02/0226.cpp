#include<iostream>
#include<string>

using namespace std;

int main(){
	string str1,str2;
	
	while(cin>>str1>>str2 && str1!="0" &&str2!="0"){
		int h=0,b=0;
		for(int i=0;i<str1.size();i++){
			int tmp=str2.find(str1[i]);
			if(tmp==i)h++;
			else if(tmp!=string::npos)b++;
		}
		cout<<h<<" "<<b<<endl;
	}
}
