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





