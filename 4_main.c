//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

int main() {
    int a, b, c;
    
    // 输入三条线段长度
    printf("请输入三条线段的长度（三个整数）：");
    scanf("%d %d %d", &a, &b, &c);
    
    // 判断能否组成三角形
    if (a + b > c && a + c > b && b + c > a) {
        printf("可以组成三角形\n");
    } else {
        printf("不能组成三角形\n");
    }
    
    return 0;
}
