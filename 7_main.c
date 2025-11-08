//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

void reverseArray(int arr[], int length) 
{
    int i, temp;
    for (i = 0; i < length / 2; i++) 
    {
      
        temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

int main() 
{
    int arr[5];
    int i;
    

    printf("请输入5个整数：\n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    

    reverseArray(arr, 5);
    

    for (i = 0; i < 5; i++) 
    {
        printf("%d", arr[i]);
        if (i < 4)
        {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
