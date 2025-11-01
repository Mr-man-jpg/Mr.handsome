//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>
int main() 
{
    int n;
    printf("请输入一个小于50的正整数：");
    scanf("%d", &n);
    
    if (n <= 0 || n >= 50) 
    {
        printf("输入无效，请输入小于50的正整数\n");
        return 0;
    }
    
    if (n == 1) 
    {
        printf("密钥不安全，请重新输入\n");
        return 0;
    }
    
    int i; 
    for ( i = 2; i < n; i++) 
    {
        if (n % i == 0)
        { 
            break;       
        }
    }
    
    if (i == n) 
    {
        printf("密钥安全，密码设置成功\n");
    } 
    else 
    {
        printf("密钥不安全，请重新输入\n");
    }
    
    return 0;
}
    

