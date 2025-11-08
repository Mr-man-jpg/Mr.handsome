//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

// 求数组元素和的函数
int arraySum(int arr[], int length) 
{
    int sum = 0;
    int i;
    for (i = 0; i < length; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

int arrayProduct(int arr[], int length) 
{
    int product = 1;
    int i;
    for (i = 0; i < length; i++)
        {
        product *= arr[i];
    }
    return product;
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
    

    int sum = arraySum(arr, 5);
    int product = arrayProduct(arr, 5);
    
  
    printf("%d %d\n", sum, product);
    
    return 0;
}

