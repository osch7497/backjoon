#include <iostream>
#include <algorithm>
using namespace std;

int ci[15001];
int main()
{
    int N,M,counts = 0;
    scanf("%d %d",&N,&M);
    for(int i = 0; i < N; i++)
        scanf("%d",&ci[i]);
    sort(ci,ci+N);
    int *p1 = &ci[0];
    int *p2 = &ci[0];
    int *last = &ci[N];
    while(p1 < last){
        p2++;
        if(p2 >= last){
            p2 = p1+2;
            p1++;}
        if((*p1 + *p2)== M){
            counts++;}
    }
    printf("%d",counts);
}
