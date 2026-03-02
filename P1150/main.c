#include<stdio.h>

int main(){
    int n, k;
    int a = 0;
    scanf("%d %d", &n, &k);
    for(int i = 0; ; i++){
        n--;
        a++;
        if(a == k){
            n++;
            a = 0;
        }
        if(n == 0){
            printf("%d", i + 1);
            break;
        }
    }
    return 0;
}