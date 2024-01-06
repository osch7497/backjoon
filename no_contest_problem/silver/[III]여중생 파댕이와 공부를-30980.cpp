#include <iostream>

using namespace std;
char paper[210][560];
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);getchar();
    for(int i = 0; i < N*3; i++){
        for(int n = 0; n < M*8; n++){
            scanf("%c",&paper[i][n]);
        }
        getchar();
    }
    for(int i = 0; i < N; i++){
        for(int n = 0; n < M; n++){
            bool l=0;
            int f = paper[i*3+1][n*8+1]-'0';
            char c = paper[i*3+1][n*8+2];
            int s = paper[i*3+1][n*8+3]-'0';
            int result = (paper[i*3+1][n*8+5]-'0');
            if(paper[i*3+1][n*8+6] != '.'){
                result = result*10+(paper[i*3+1][n*8+6]-'0');
                l=1;
            }
            if(f+s==result){
                paper[i*3+1][n*8] = '*';
                paper[i*3+1][n*8+6+l] = '*';
                for(int v = 1; v < 6+l; v++){
                    paper[i*3][n*8+v] = '*';
                    paper[i*3+2][n*8+v] = '*';
                }
            }
            else{
                for(int v = 0; v < 3; v++){
                    paper[i*3+(2-v)][n*8+v+1] = '/';
                }
            }
        }
    }
    for(int i = 0; i < N*3; i++){
        for(int n = 0; n < M*8; n++){
            printf("%c",paper[i][n]);
        }
        printf("\n");
    }
}
