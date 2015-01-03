#include<iostream>
#include<vector>
#include<map>
#include<set>

using namespace std;

int main(){
	int n;
	while(cin>>n && n){
	
	vector<int> v;
	
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int co=0;
	while(co<=10001){
		for(int i=0;i<v.size();i++){
			if(i+1!=v[i])break;
			else if(i+1==v.size()){
				cout<<co<<endl;
				goto suc;
			}
		}
		int s=v.size();
		co++;
		for(vector<int>::iterator ite=v.begin();ite!=v.end();++ite){
			(*ite)--;
			if(*ite==0){
				ite=v.erase(ite);
				--ite;
				}
			}
			v.push_back(s);
		}
		cout<<-1<<endl;
		suc:;
	}
}
