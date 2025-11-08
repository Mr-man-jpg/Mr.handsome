//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    
   
    printf("请输入3*3矩阵：\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
    printf("转置矩阵：\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", matrix[j][i]);  
        }
        printf("\n");
    }
    
    return 0;
}




void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    int swapped;
    
    for (i = 0; i < n - 1; i++)
        {
        swapped = 0;
        for (j = 0; j < n - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if (!swapped) 
        {
            break;
        }
    }
}
