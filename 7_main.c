//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

int main() 
{
    int records[5]; 
    
    for (int i = 0; i < 4; i++) 
    {
        scanf("%d", &records[i]);
    }
    
    for (int i = 4; i > 0; i--) 
    {
        records[i] = records[i-1];
    }
    
    records[0] = 0;
    
    for (int i = 0; i < 5; i++) 
    {
        printf("%d", records[i]);
        if (i < 4) 
        {
            printf(" "); 
        }
    }
    
    return 0;
}
