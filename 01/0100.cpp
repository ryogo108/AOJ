#include<iostream>
#include<map>
#include<set>
#define LIM 1000000
using namespace std;
map<int,long long>data;
set<int>used;
int main(){
	int n;
	while(cin>>n && n){
		used.clear();
		data.clear();
		bool update=false;
		for(int i=0;i<n;i++){
			int id;
			cin>>id;
			long long  ans;
			cin>>ans;
			int tmp;
			cin>>tmp;
			ans*=tmp;
			data[id]+=ans;
			if(data[id]>=LIM &&used.find(id)==used.end()){
				update=true;
				cout<<id<<endl;
				used.insert(id);
			}
		}
		if(!update)cout<<"NA"<<endl;
	}
}
