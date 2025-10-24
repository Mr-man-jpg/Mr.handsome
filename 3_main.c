//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    // 输入两个整数和运算符
    printf("请输入两个整数和一个运算符（+、-、*、/）：");
    scanf("%d %d %c", &a, &b, &op);
    
    // 根据运算符进行计算
    switch(op) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            // 检查除数是否为0
            if(b != 0) {
                printf("%d / %d = %.2f\n", a, b, (double)a / b);
            } else {
                printf("错误：除数不能为0！\n");
            }
            break;
        default:
            printf("错误：无效的运算符！\n");
            break;
    }
    
    return 0;
}
