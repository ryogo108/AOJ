#include<iostream>
#include<set>
using namespace std;
set<int>prime;
int main(){
	prime.insert(2);
	for(int i=3;i<15000;i++){
		for(int j=2;j*j<=i;j++){
			if(i%j==0)goto fail;
		}
		prime.insert(i);
		fail:;
	}
	int x;
	while(cin>>x && x){
		set<int>::iterator itr=--prime.upper_bound(x);
		while(*itr-*--itr!=2);
		cout<<*--itr<<" "<<*++itr<<endl;
	}
}
