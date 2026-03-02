#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define RES_arr (arr = arr_org)
int main()
{
    int l, m;
    int u, v;
    int i;
    int cnt_stop = 0;
    int cnt = 0;

    scanf("%d %d", &l, &m);
    int *arr_org = malloc(l * sizeof(int));
    int *arr = arr_org;
    memset(arr, 0, l * sizeof(int));
    for(i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        if(u == v) arr[u-1] = 3;
        RES_arr;
        if(arr[u-1] == 2){
            arr[u-1] = 0;
        }else{
            arr[u-1] = 1;
        }
        RES_arr;
        if(arr[v-1] == 1){
            arr[v-1] = 0;
        }else{
            arr[v-1] = 2;
        }
        RES_arr;
    }
    for(arr = arr_org; arr < arr_org + l; arr++){
        if(*arr == 3) continue;
        if(*arr == 1) cnt_stop++;
        if(*arr == 2) cnt_stop--;
        if(cnt_stop == 0) cnt++;
    }
    printf("%d\n", cnt - 1);
    free(arr_org);
    arr_org = NULL;
    return 0;
}