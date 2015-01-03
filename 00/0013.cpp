#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int >data;
	int a;
	while(cin>>a){
		if(a==0){
			cout<<data.top()<<endl;
			data.pop();
		}
		else {
			data.push(a);
		}
	
	}
}
