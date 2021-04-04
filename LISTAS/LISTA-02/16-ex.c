#include <stdio.h>

int main(){
    int matricula, ndependentes;
    float salmin, salario, taxaimposto;
    float impbruto, taxa1 , taxa2, impliquido, resultado;

    scanf("%d" "%f" "%d" "%f" "%f", &matricula, &salmin, &ndependentes, &salario, &taxaimposto);

    printf("MATRICULA = %d\n", matricula);

    taxa1= 12*salmin;
    taxa2= 5*salmin;

    if (salario > taxa1)
    {
        impbruto = (salario*20)/100;

        printf("IMPOSTO BRUTO = %.2f \n", impbruto);

    } else if (salario > taxa2)
    {
        impbruto = (salario*8)/100;
        printf("IMPOSTO BRUTO = %.2f \n", impbruto);

    } else

        printf("IMPOSTO BRUTO = 0.00 \n");

    impliquido= impbruto - (ndependentes * 300);
    resultado= impliquido - (salario * taxaimposto) / 100;

    printf("IMPOSTO LIQUIDO = %.2f \n", impliquido);
    printf("RESULTADO = %.2f \n", resultado);

    if (resultado < 0)
    {
        printf("IMPOSTO A RECEBER \n");

    } else if (resultado > 0)
    {
        printf("IMPOSTO A PAGAR \n");
    
    } else

        printf("IMPOSTO QUITADO \n");

    return 0;
}
    