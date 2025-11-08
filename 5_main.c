//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

int arithmeticSum(int a1, int an, int step) 
{
    int n; 
    

    if (step == 0)
    {
        return 0;  
    }
    
    n = (an - a1) / step + 1;
    
    // 等差数列求和公式：S = n * (a1 + an) / 2
    return n * (a1 + an) / 2;
}

int main() 
{
    // 计算从1加到100的值
    int result = arithmeticSum(1, 100, 1);
    printf("%d\n", result);
    
    return 0;
}







