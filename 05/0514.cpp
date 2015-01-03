#include<iostream>
#include<vector>
using namespace std;

struct tes{
int i,j,k,r;
};
int data[500];

int main(){
	
	
	int a,b,c,N,n;
while(cin>>a>>b>>c &&a &&b&&c){
vector<tes> in;
for(int i=0;i<500;i++)data[i]=2;
	cin>>N;
	n=a+b+c;
	
	for(int i=0;i<N;i++){
		tes tmp;
		cin>>tmp.i>>tmp.j>>tmp.k>>tmp.r;
		in.push_back(tmp);
	}
	
	bool up_date=true;;
	while(up_date){
		up_date=false;
		for(int i=0;i<N;i++){
			tes tmp=in[i];
			if(tmp.r==1 &&(data[tmp.i]!=1 || data[tmp.j]!=1 || data[tmp.k]!=1)){
				data[tmp.i]=1;
				data[tmp.j]=1;
				data[tmp.k]=1;
				up_date=true;
			}
			else{
					if(data[tmp.i]==1 && data[tmp.j]==1 &&data[tmp.k]==2){
						data[tmp.k]=0;
						up_date=true;
					}
					else if(data[tmp.j]==1 && data[tmp.k]==1 && data[tmp.i]==2){data[tmp.i]=0;up_date=true;}
					else if(data[tmp.i]==1 && data[tmp.k]==1 && data[tmp.j]==2){up_date=true;data[tmp.j]=0;}
					
				
			}
		}
	}
	
	for(int i=1;i<=n;i++)cout<<data[i]<<endl;
	
	}
}
