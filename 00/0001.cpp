#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int data[10];
 
int main(){
for(int i=0;i<10;i++)cin>>data[i];
sort(data,data+10,greater<int>());
 
for(int i=0;i<3;i++)cout<<data[i]<<endl;
 
}
