#include<stdio.h>

using namespace std;

int main(){
	int x;
	while(scanf("%d",&x)){
		x=x%39;
		if(x==0)x=39;
		printf("3C%02d\n",x);
	}
}
