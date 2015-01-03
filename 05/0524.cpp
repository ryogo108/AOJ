#include<iostream>
#include<set>
using namespace std;
typedef pair<int,int> P;

set<P> data;
set<P>star;

bool dfs(set<P>::iterator d,set<P>::iterator s){
	if(d==data.end())return false;
	if(s==--star.end())return true;
	set<P>::iterator tmp=++s;
	--s;
	P now=P((*tmp).first-(*s).first,(*tmp).second-(*s).second);
	P next=P((*d).first+now.first,(*d).second+now.second);
	
	return dfs(data.find(next),++s);
}

int main(){
	int n;
	while(cin>>n && n){
		data.clear();
		star.clear();
		for(int i=0;i<n;i++){
			P a;
			cin>>a.first>>a.second;
			star.insert(a);
		}
		int m;
		cin>>m;
		for(int i=0;i<m;i++){
			P a;
			cin>>a.first>>a.second;
			data.insert(a);
		}
		P ans;
		for(set<P>::iterator itr=data.begin();itr!=data.end();itr++){
			if(dfs(itr,star.begin()))ans=P((*itr).first-(*star.begin()).first,(*itr).second-(*star.begin()).second);
		}
		
		cout<<ans.first<<" "<<ans.second<<endl;
	}
}
