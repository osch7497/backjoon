#include <iostream>
#include <algorithm>
using namespace std;
int nujuckhap[1025][1025];
int N,M; 
int main(){
    scanf("%d %d",&N,&M);
    for(int i = 1; i <= N; i++){
        for(int n = 1;n<=N; n++){
            int t;scanf("%d",&t);nujuckhap[n][i]=nujuckhap[n][i-1]+t;}
    }
    /*
    for(int i = 1; i <= N; i++){
        for(int n = 1;n<=N; n++){
            printf("[%3d]",nujuckhap[i][n]);}
        printf("\n");
    }
    */

    for(int i = 1; i <= M; i++){
        int x1,y1,x2,y2,t=0;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        for(int ys = y1;ys <= y2;ys++){
            t+=(nujuckhap[ys][x2]-nujuckhap[ys][x1-1]);}
        printf("%d\n",t);
    }
}
