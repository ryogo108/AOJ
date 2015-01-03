#include<iostream>
#include<map>
using namespace std;

map<int,int>data;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n*(n-1)/2;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(c>d)data[a]+=3;
		else if(c<d)data[b]+=3;
		else {
			data[a]+=1;
			data[b]+=1;
		}
	}
	map<int,int>ans;
	int c=1;
	int cc=0;
	while(cc!=data.size()){
		int ma=0;
		int count=0;
		for(map<int,int>::iterator itr=data.begin();itr!=data.end();itr++){
			if(itr->second>ma)ma=itr->second;
		}
		for(map<int,int>::iterator itr=data.begin();itr!=data.end();itr++){
			
			if(itr->second==ma){
				ans[itr->first]=c;
				cc++;
				itr->second=-5;
				count++;
			}
		}
		c+=count;
	}
	for(map<int,int>::iterator itr=ans.begin();itr!=ans.end();itr++){
		cout<<(itr->second)<<endl;
	}
}

