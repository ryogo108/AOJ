#include<iostream>
#include<map>
#include<string>
using namespace std;

map<string,int> data;
map<string,map<string,int> >tree;

int cal(string str){
	int r=data[str];
	int sum=-1;
	map<string,int>::iterator itr=tree[str].begin();
	for(;itr!=tree[str].end();itr++){
		sum+=cal(itr->first);
	}
	if(sum!=-1)return min(sum+1,r);
	else return r; 
}

int main(){
	int n;
	
	while(cin>>n && n){
		tree.clear();
		string str;
		int cost;
		for(int i=0;i<n;i++){
			cin>>str>>cost;
			data[str]=cost;
		}
		int m;
		cin>>m;
		for(int i=0;i<m;i++){
			string in;
			int num;
			cin>>in>>num;
			for(int j=0;j<num;j++){
				string tmp;
				cin>>tmp;
				tree[in][tmp]=1;
			}
		}
		
		string ma;
		cin>>ma;
		
		cout<<cal(ma)<<endl;
		
		
	}
	
}
