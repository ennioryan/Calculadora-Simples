#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int num1, num2;
    char operator;

    printf("Insira um operador (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Insira dois operandos: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%d %c %d = %d\n", num1, operator, num2, num1 + num2);
            break;
        case '-':
            printf("%d %c %d = %d\n", num1, operator, num2, num1 - num2);
            break;
        case '*':
            printf("%d %c %d = %d\n", num1, operator, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d %c %d = %.2f\n", num1, operator, num2, (float)num1 / num2);
            else
                printf("Erro! A divisão por zero não é permitida.\n");
            break;
        default:
            printf("Erro! Operador inválido.\n");
    }

    return 0;
}
