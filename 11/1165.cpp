#include<iostream>
 
using namespace std;
 
struct point{
    point(){};
    point(int a,int b){
        x=a,y=b;
    }
    int x,y;
};
 
 
point data[300];
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int main(){
    data[0]=point(0,0);
    int N;
    while(cin>>N &&N){
        int l=0,r=0,u=0,md=0;
        for(int i=1;i<N;i++){
            int n,d;
            cin>>n>>d;
            data[i]=point(data[n].x+dx[d],data[n].y+dy[d]);
            l=min(l,data[i].x),r=max(r,data[i].x),u=max(u,data[i].y),md=min(md,data[i].y);
        }
        cout<<r-l+1<<" "<<u-md+1<<endl;
    }
}
