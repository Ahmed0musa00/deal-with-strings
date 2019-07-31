#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[22];
    scanf("%s",arr);
    int res = strlen(arr);
    if(res>10)
    {
        int i;
        for(i=5;i<=9;i++)
        printf("%c",arr[i]);
    }

    return 0;
}
