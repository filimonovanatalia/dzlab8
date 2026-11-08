#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    double a;
    int n;
    printf("¬ведите значение a: ");
    scanf("%lf", &a);
    printf("¬ведите целое значение n: ");
    scanf("%d", &n);
    if (a == 0) {
        printf("ќшибка: параметр 'a' не может быть равен 0.\n");
        return 1;
    }
    double sum = 0.0;
    double term = 1.0; 
    for (int i = 0; i <= n; i++) {
        term = term / (a + i); 
        sum = sum + term;     
    }
    printf("«начение р€да: %.6lf\n", sum);
    return 0;
}