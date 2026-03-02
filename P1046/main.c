#include<stdio.h>
#define UP 30

int main()
{
    int apples[10] = {0};
    int hands = 0;
    int sum = 0;
    scanf("%d%d%d%d%d%d%d%d%d%d", &apples[0], &apples[1], &apples[2], &apples[3], &apples[4], &apples[5], &apples[6], &apples[7], &apples[8], &apples[9]);
    scanf("%d", &hands);
    for(int i = 0; i < 10; i++)
    {
        if(hands + UP >= apples[i])
        {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}