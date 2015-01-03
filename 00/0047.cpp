#include<iostream>
#include<map>
using namespace std;


map<char,int>st;
int data[3]={0};
int main(){
	data[0]=1;
	st['A']=0;
	st['B']=1;
	st['C']=2;
	
	char cha,ch,chb;
	while(cin>>cha>>ch>>chb){
		int tmp=data[st[cha]];
		data[st[cha]]=data[st[chb]];
		data[st[chb]]=tmp;
	}
	
	for(int i=0;i<3;i++){
		if(data[i]==1){
			char ans='A'+i;
			cout<<ans<<endl;
		}
	}
}
