#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int pessoasMesa, totalPessoasMesa = 0, opcaoMenu;
    float valorConta, totalConta, valorGarcom;
    char resp = 's', dividirConta;

    printf("------------------\n");
    printf (" BAR DO ZE - MENU");
    printf("\n------------------\n");

    do{
        printf("\n\n1 - ADICIONAR PESSOAS NA MESA");
        printf("\n2 - ADICIONAR CUSTOS");
        printf("\n3 - ENCERRAR CONTA");
        printf("\n\nDigite uma opcao: ");
        scanf("%d", &opcaoMenu);

        switch(opcaoMenu){
            case 1:
                printf("\nAdicione o numero de pessoas: ");
                scanf("%d", &pessoasMesa);
                totalPessoasMesa = totalPessoasMesa + pessoasMesa;
                break;
            case 2:
                printf ("\nAdicione o valor: ");
                scanf("%f", &valorConta);
                totalConta = totalConta + valorConta;
                break;
            case 3:
                //printf("\nTOTAL: %.2f", totalConta);
                printf("\n\nGostaria de dividir o valor entre as pessoas da mesa?(s/n): ");
                scanf(" %c", &dividirConta);

                if (dividirConta == 's'){
                    valorGarcom = totalConta * 0.1;
                    printf("\n-----------------------------------------------------\n");
                    printf("\n\tTOTAL MESA:\t\t\t%.2f", totalConta);
                    printf("\n\tTAXA GARSOM:\t\t\t%.2f", valorGarcom);
                    printf("\n\tTOTAL A PAGAR:\t\t\t%.2f", (totalConta + valorGarcom));
                    printf("\n\tTOTAL DIVIDO POR PESSOA:\t%.2f", (totalConta + valorGarcom) / totalPessoasMesa);
                    printf("\n\n-----------------------------------------------------\n");
                    resp = 'n';
                 }
                 break;
            default:
                printf("\nopcao invalida\n");
        }
    }while (resp == 's');
return 0;
}
