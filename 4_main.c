//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

// 计算a的b次幂的函数
double power(int a, int b) 
{
    double result = 1.0;
    int i;
    
    // 处理指数为0的情况
    if (b == 0) 
    {
        return 1.0;
    }
    
    if (b > 0) 
    {
        for (i = 0; i < b; i++) 
        {
            result *= a;
        }
    } 

    else {
        for (i = 0; i < -b; i++) 
        {
            result *= a;
        }
        result = 1.0 / result;
    }
    
    return result;
}

int main() 
{
    int i;
    double sum = 0;
    
    for (i = 1; i <= 5; i++) 
    {
        sum += power(i, 2);  
    }
    
    printf("%.0f\n", sum); 
    
    return 0;
}

