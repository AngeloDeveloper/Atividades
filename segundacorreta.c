#include <stdio.h>
#include <math.h>

#define MAX_N 10

double fatorial(double valor)
{
    if (valor == 0) {
        return 1;
    }

    return valor * fatorial(valor-1);
}

int main(int argc, char const *argv[])
{
    int escolha, n;
    double x, resultado;

    do {
        printf(
        "Monitoria POO - Lista 1 - Questão 2\n"
        "===================================\n\n"
        "Entre com o valor de x: \n");

        scanf("%lf", &x);

        resultado = 0;

        for (n = 0; n <= MAX_N; n++) {
            resultado += pow(-1,n) * pow(x,(2*n + 1)) / fatorial(2*n + 1);
        }

        printf("Resultado: %lf\n\n", resultado);

        printf(
            "Deseja continuar?\n"
            "[1] Sim, calcular para outro x\n"
            "[0] Não, sair do programa\n"
            "Escolha: ");

        scanf("%d", &escolha);

        printf("\n\n");
    } while (escolha != 0);

    return 0;
}