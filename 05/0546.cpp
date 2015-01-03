#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int bit_s(int x){
	int re=0;
	for(int i=0;i<31;i++){
		if(x&1<<i)re++;
	}
	
	return re;
}	

int main(){
	int n,k;
	while(cin>>n>>k && n && k){
		set<int> ans;
		int data[50];
		for(int i=0;i<n;i++)cin>>data[i];
		
		for(int i=0;i<2<<(n-1);i++){
			if(bit_s(i)==k){
				vector<int> tmp;
				for(int j=0;j<n;j++){
					
					if(i&1<<j)tmp.push_back(data[j]);
				}
				vector<int> loop;
				for(int i=0;i<tmp.size();i++)loop.push_back(i);
				do{
					int a=0;
					for(int i=0;i<loop.size();i++){
						if(tmp[loop[i]]<10)a=a*10+tmp[loop[i]];
						else a=a*100+tmp[loop[i]];
					}
					ans.insert(a);
				}while(next_permutation(loop.begin(),loop.end()));
			}
		}
		cout<<ans.size()<<endl;
		//for(set<int>::iterator itr =ans.begin();itr!=ans.end();itr++)cout<<(*itr)<<endl;
	}
	
	
}
