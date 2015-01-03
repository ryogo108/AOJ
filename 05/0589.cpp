#include<iostream>
#include<map>
#include<string>
using namespace std;

typedef pair<int,string> P;
map<P,int>ans;


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		int x;
		cin>>str>>x;
		ans[P(str.size(),str)]+=x;
	}
	for(map<P,int>::iterator itr=ans.begin();itr!=ans.end();itr++){
		cout<<((itr->first).second)<<" "<<(itr->second)<<endl;
	}

}
