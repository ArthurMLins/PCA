#include <stdio.h>
#include <math.h>

// Função para solicitar do usuário um número real positivo no range [0,1].
double get_number() {
    double x;
    printf("Digite um número real positivo no intervalo [0,1]: ");
    scanf("%lf", &x);
    while (x <= 0 || x >= 1) {
        printf("Entrada inválida. Digite um número real positivo no intervalo [0,1]: ");
        scanf("%lf", &x);
    }
    return x;
}

// Função arctan que recebe o número real x [0,1] e devolve uma aproximação do arco tangente de x (em radianos) através da série.
double arctan(double x) {
    double term = x, result = x;
    int i = 1;
    while (fabs(term) > 1e-10) {
        term = -term * x * x / (2 * i + 1);
        result += term;
        i++;
    }
    return result;
}

// Função que imprime na tela uma mensagem com o número real e o arco tangente do número em radianos.
void print_result(double x) {
    printf("O arco tangente de %lf é aproximadamente %lf radianos.\n", x, arctan(x));
}

int main() {
    double x = get_number();
    print_result(x);
    return 0;
}
