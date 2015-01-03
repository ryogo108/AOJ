#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int ans=0;
	for(int co=0;co<n;co++){
		string s;
		cin>>s;
		int now=0;
		for(int i=0;i<s.size();i++){
			if(s[i]==str[0]){
				for(int j=i+1;j<s.size();j++){
					if(s[j]==str[1]){
						int no=2;
						for(int k=j+(j-i);k<s.size();k+=(j-i),no++){
							if(s[k]!=str[no])goto fail;
							if(no>=str.size()-1){
								ans++;
								goto suc;
							}
						}
					}
					fail:;
				}
				
			}
			
		}
		suc:;
	}
	cout<<ans<<endl;
}
