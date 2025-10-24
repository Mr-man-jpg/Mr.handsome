//202510116309 
//3368860548@qq.com
//吴振华
#include <stdio.h>

int main() {
    int score;
    
    // 获取用户输入的成绩
    printf("请输入学生成绩（0-100）：");
    scanf("%d", &score);
    
    // 从高分到低分进行判断
    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80 && score < 90) {
        printf("B\n");
    } else if (score >= 70 && score < 80) {
        printf("C\n");
    } else if (score >= 60 && score < 70) {
        printf("D\n");
    } else if (score >= 0 && score < 60) {
        printf("E\n");
    } else {
        printf("输入错误！成绩应该在0-100之间。\n");
    }
    
    return 0;
}
