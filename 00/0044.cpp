#include<iostream>
#include<set>
using namespace std;
set<int>data;
int main(){
	data.insert(2);
	for(int i=3;i<60000;i++){
		for(int j=2;j*j<=i;j++){
			if(i%j==0)goto fail;
		}
		data.insert(i);
		fail:;
	}
	
	int x;
	while(cin>>x){
		set<int>::iterator itr=data.lower_bound(x);
		cout<<*(--itr)<<" ";
		if(*(++itr)==x)itr++;
		cout<<*itr<<endl;
	}
}
