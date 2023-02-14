#include <stdio.h>
#include <ctype.h>

int main() {
    char mensagem[1000];
    int i, deslocamento = 3;

    printf("Digite uma mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    for (i = 0; mensagem[i] != '\0'; i++) {
        // Verifica se a letra é maiúscula ou minúscula
        if (isalpha(mensagem[i])) {
            // Realiza a codificação
            mensagem[i] = (mensagem[i] - 'a' + deslocamento) % 26 + 'a';
        }
    }

    printf("Mensagem codificada: %s", mensagem);

    return 0;
}
