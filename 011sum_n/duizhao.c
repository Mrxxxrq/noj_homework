#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double sum = 0.0;
    
    for (int i = 1; i <= n; i++) {
        int next = i + 1;
        double current_val;
        
        // 计算 next 的位数，以此决定小数部分的除数
        // 例如 next=2，除数为10；next=10，除数为100
        
        while (next > 1) {
            next /= 10.0;
        }
        
        
        // 计算当前项的值（例如 1 + 2/10.0 = 1.2；9 + 10/100.0 = 9.10）
        current_val = i + next;
        
        // 累加到总和
        sum += current_val;
        
        // 格式化输出当前项
        // %g 会自动去掉浮点数末尾多余的0（比如把 9.10 输出为 9.1）
        if (i == 1) {
            printf("%g", current_val);
        } else {
            printf("+%g", current_val);
        }
    }
    
    // 输出等号和总和，保留两位小数
    printf("=%.2f\n", sum);
    
    return 0;
}