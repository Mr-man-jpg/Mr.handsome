//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    // 获取用户输入的摄氏温度
    printf("请输入摄氏温度：");
    scanf("%f", &celsius);
    
    // 转换为华氏温度
    fahrenheit = celsius * 9.0f / 5.0f + 32.0f;
    
    // 输出结果，保留1位小数
    printf("华氏温度为：%.1f\n", fahrenheit);
    
    return 0;
}
