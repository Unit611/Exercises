#include<stdio.h>

int main()
{
    int K, flag = 0;
    scanf("%d", &K);
    for(int i = 10000; i <= 30000; i++){
        if(((i / 100) % K == 0) && ((i / 10 % 1000) % K == 0) && ((i % 1000) % K == 0)){
            printf("%d\n", i);
            flag = 1;
        }
    }
    if(flag == 0){
        printf("No\n");
    }
    return 0;
}