#include <iostream>
#include <algorithm>
using namespace std;
long long input[10000000],tree[40000000];
int N,M;
int set_segment(int start,int end,int node){
    if(start==end)return tree[node] = input[start];
    int mid=(start+end)/2;
    return tree[node] = set_segment(start,mid,node*2)+set_segment(mid,end,node*2+1);
}
int sum(int start,int end,int node,int divide){
    if(tree[node] < divide)return 0;
    int mid = (start+end)/2;
    if(tree[node]%divide == 0) return sum(start,mid,node*2,divide)+sum(mid,end,node*2+1,divide)+1;
    else return sum(start,mid,node*2,divide)+sum(mid+1,end,node*2+1,divide);
}
int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i = 1; i <= N; i++){
        scanf("%d",&input[i]);}
    set_segment(0,N-1,1);
    printf("%d",sum(0,N-1,1,M));
}
