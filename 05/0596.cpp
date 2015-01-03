#include<iostream>
#include<map>
#include<vector>
#include<queue>
#define INF (1<<25)
using namespace std;
 
typedef pair<int,int> P;
 
struct range{
    int reg,cost;
};
 
range co[5050];
 
map<int,vector<int> > es;
int n_map[5050][5050];
 
 
bool used[5050];
void bfs(int s){

    queue<P> que;
    que.push(P(s,0));
    while(que.size()){
        P p=que.front();que.pop();
        if(n_map[s][p.first]!=INF)continue;
        if(p.second>co[s].reg)break;
        n_map[s][p.first]=co[s].cost;
        used[p.first]=true;
        for(int i=0;i<es[p.first].size();i++){
           que.push(P(es[p.first][i],p.second+1));
        }
    }
}
 
int n,k;
 
int d[5050];
int dijkstra(int s){
    fill(used,used+5050,false);
    fill(d,d+5050,INF);
    d[s]=0;
    while(true){
        int v=-1;
        for(int u=1;u<5050;u++){
            if(!used[u] && (v==-1|| d[u]<d[v]))v=u;
        }
        if(v==-1)break;
         
        used[v]=true;
        for(int u=1;u<5050;u++){
            d[u]=min(d[u],d[v]+n_map[v][u]);
        }
    }
    return d[n];
}
int main(){
    fill((int*)n_map,(int*)n_map+5050*5050,INF);
    cin>>n>>k;
     
    for(int i=1;i<=n;i++){
        cin>>co[i].cost>>co[i].reg;
    }
    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
        es[a].push_back(b);
        es[b].push_back(a);
    }
     
    for(int i=1;i<=n;i++)bfs(i);
     
     
    cout<<dijkstra(1)<<endl;
     
    //for(int i=0;i<10;i++)cout<<d[i]<<endl;
}
