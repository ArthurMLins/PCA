#include <stdio.h>

int main()
{
    int a,b,porcentagem,salariomaisbonus;

    printf("Digite seu salário: ");
    scanf("%d", &a);

    porcentagem = a*10/100;

    salariomaisbonus = a + porcentagem;

    printf("%d" ,salariomaisbonus);
    return 0;

}
