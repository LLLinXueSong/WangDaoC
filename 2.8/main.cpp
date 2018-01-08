#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int N;
    while(scanf("%d",&N)!=EOF&&N!=0){
        int Hash[101]={0};
        for(int i=1;i<=N;i++){
            int x;
            scanf("%d",&x);
            Hash[x]++;
        }
        int y;
        scanf("%d",&y);
        printf("%d\n",Hash[y]);
    }
    return 0;
}
