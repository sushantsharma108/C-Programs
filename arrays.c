#include <stdio.h>
int main()
{
    int number,i, arr[4];
    scanf("%d\n",number);
    for(i=0;i<4;i++)
        {
            scanf("%d ",&arr[i]);
        }
    for(i=3; i>=0;i--)
        {
            printf("%d\n",arr[i]);
        }
    return 0;
}