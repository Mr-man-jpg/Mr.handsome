//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>
int main() 
{
    int arr[5]; 
    
    for (int i = 0; i < 4; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    arr[4] = 0; 
    for (int i = 0; i < 4; i++) 
    {
        arr[4] += arr[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
        if (i < 4) 
        {
            printf(" "); 
        }  
    }
    
    return 0;
}

