//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>
int main() 
{
    int count = 0; 
    
    for (int num = 100; num <= 999; num++) 
    {
        int a = num / 100;        
        int b = (num / 10) % 10;  
        int c = num % 10;         
        
        int sum = a * a * a + b * b * b + c * c * c;
        
        if (sum == num) 
        {
            if (count > 0) 
            {
                printf(" "); 
            }
            printf("%d", num);
            count++;
        }
    }
    
    return 0;
}
