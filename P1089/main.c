#include<stdio.h>

int main()
{
    int i;
    int cash = 0, save = 0;
    int temp;
    int yusuan[12];
    int n = 0;
    for(i = 0; i < 12; i++){
        scanf("%d", &yusuan[i]);
    }
    for(i = 0; i < 12; i++){
        cash += 300;
        temp = cash - yusuan[i];
        if(temp < 0) temp = 0;
        save += temp / 100 * 100;
        cash = cash - temp / 100 * 100 - yusuan[i];
        if(cash < 0){
            n = 1;
            break;
        }
    }
    if(n == 1){
        printf("%d",-(i + 1));
        return 0;
    }
    printf("%d", save * 120 / 100 + cash);
    return 0;
}