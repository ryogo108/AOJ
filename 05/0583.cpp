#include<iostream>
#include<vector>
using namespace std;

vector<int> data;

bool che(int x){
	
	for(int i=0;i<data.size();i++){
		if(data[i]%x!=0)return false;
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		data.push_back(a);
	}
	
	for(int i=1;i<156345758;i++){
		if(che(i))cout<<i<<endl;
	}
	
	
	
}
