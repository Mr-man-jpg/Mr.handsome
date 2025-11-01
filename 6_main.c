//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

int main() 
{
    int arr[5]; 
    int count = 0; 
    
    while (count < 5) 
    {
        int num;
        scanf("%d", &num); 
        
        if (num % 2 == 0) 
        {
            arr[count] = num; 
            count++; 
        }
    }
    
    for (int i = 0; i < 5; i++) 
    {
        printf("%d", arr[i]);
        if (i < 4) {
            printf(" "); 
        }
    }
    
    return 0;
}
