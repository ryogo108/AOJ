#include<iostream>
#include<complex>
#include<map>
#include<vector>
#include<algorithm>
#define INF 20000000
using namespace std;
typedef complex<double> P;
map<int,P>data;
double gr[1200][1200];


int prev[1200];
double d[1200];
int used[1200];
void dijkstra(int s){
	fill(d,d+1200,INF);
	fill(used,used+1200,false);
	fill(prev,prev+1200,-1);
	d[s]=0;
	while(true){
		int v=-1;
		for(int u=0;u<1200;u++){
			if(!used[u]&&(v==-1||d[u]<d[v]))v=u;
		}
		if(v==-1)break;
		used[v]=true;
		
		for(int u=0;u<1200;u++){
			if(d[u]>d[v]+gr[v][u]){
				d[u]=d[v]+gr[v][u];
				prev[u]=v;
			}
		}
	}
}
vector<int>get_path(int t){
	vector<int>path;
	for(;t!=-1;t=prev[t])path.push_back(t);
	reverse(path.begin(),path.end());
	return path;
}
int main(){
	int n;
		while(cin>>n &&n){
		fill((double*)gr,(double*)gr+1200*1200,INF);
		for(int i=0;i<n;i++){
			int b,x,y;
			cin>>b>>x>>y;
			data[b].real()=x;
			data[b].imag()=y;
		}
		for(map<int,P>::iterator itr=data.begin();itr!=data.end();itr++){
			for(map<int,P>::iterator it=data.begin();it!=data.end();it++){
				if(abs(itr->second-it->second)<=50 &&abs(itr->second-it->second)>0){
					gr[itr->first][it->first]=abs(itr->second-it->second);
				}
			}
		}
	
		int m;
		cin>>m;
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			dijkstra(a);
			if(d[b]==INF){
				cout<<"NA"<<endl;
				continue;
			}
			else{
		
				vector<int>ans;
				ans=get_path(b);
				for(int i=0;i<ans.size();i++){
					if(i)cout<<" ";
					cout<<ans[i];
				}
				cout<<endl;
			}
		}
	}
}
