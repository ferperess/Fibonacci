#include <stdio.h>

int fibonacci(int num) {
    int a = 0; //primeiro valor da sequência de fibonacci
    int b = 1; //segundo valor da sequência de fibonacci

    //trata números negativos
    if (num < 0){
        return 0;
    }

    while (b <= num) {
        if (b == num) {
            return 1; // O número pertence à sequência
        }
        int temp = b;
        b = a + b;
        a = temp;
    }

    return 0; // O número não pertence à sequência
}

int main(void) {

    int num;

    //coleta o número
    printf("Informe um numero: ");
    scanf("%d", &num);

    //resposta final
    if (fibonacci(num)) {
        printf("%d pertence a sequencia de Fibonacci.\n", num);
    } else {
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);
    }

  return 0;
}