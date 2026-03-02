#include<stdio.h>

int main()
{
    int a, b, i;
    int n[7] = {0};
    int cnt = 0;
    for(i = 0; i < 7; i++){
        scanf("%d %d", &a, &b);
        n[i] = a + b - 8;
        if(n[i] <= 0) cnt++;
    }
    if(cnt == 7){
        printf("0");
        return 0;
    }
    for(a = 0, i = 1; i < 7; i++){
        if(n[i] > n[a]){
            a = i;
        }
    }
    printf("%d", a + 1);
    return 0;
}