#include<iostream>
#include<vector>
using namespace std;

int main(){
	int x;
	while(cin>>x){
		vector<int>ans;
		for(int i=0;i<10;i++){
			if((x>>i)&1)ans.push_back(1<<i);
		}
		for(int i=0;i<ans.size();i++){
			if(i>0)cout<<" ";
			cout<<ans[i];
		}
		cout<<endl;
	}
}
