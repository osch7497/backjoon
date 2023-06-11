#include <iostream>

using namespace std;
int N,ds;
int DP[5000001]{0,};
int display(int x,int y){
    for(int i = 1; i <= N/2;i++)
        printf("[%3d]",DP[i]);
    cout<<endl;
    for(int i = 1; i <= N/2;i++)
        printf("%s",(i == x||i == y)?"  ^  ":"     ");
    cout<<endl;
}
int main()
{
    scanf("%d",&N);
    int i = 0;
    for(i = 1; i <= N/2;i++){
        DP[i] = i+DP[i-1];
    }
    for(i = 1; i <= N/2;i++){
        printf("[%3d]",DP[i]);
    }cout<<endl;
    for(int i = 1; i <= N;i++)for(int n = i; n >= 0; n--){
        if(DP[i]-DP[n] == N){ds++;break;}
    }
    printf("%d\n",ds+1);
}
