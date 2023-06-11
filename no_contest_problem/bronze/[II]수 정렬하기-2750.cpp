#include <iostream>
#include <algorithm>
using namespace std;
int vs[1000];
int main() 
{
    int a;
    scanf("%d",&a);
    for(int i = 0; i < a; i++)
        scanf("%d",&vs[i]);
    sort(vs,vs+a);
    for(int i = 0; i < a; i++)
        printf("%d\n",vs[i]);
}
