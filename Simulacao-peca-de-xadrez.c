#include <stdio.h>

void moverTorre(int casas)
{
    printf("Movimento da Torre:\n");

    // loop que executa exatamente 5 vezes
    for (int i = 1; i <= casas; i++)
    {
        // i = 1 pois começará na primeira casa movida, e i <= casas pois enquanto i for menor ou 5 a 5 vamos increntar mais 1, até chegar a 5.
        printf("Direita\n"); // A torre andou 5 vezes para direita
    }
    printf("\n");
}

void moverBispo(int casas)
{
    printf("Movimento bispo:\n"); // Inicio do movimento

    int i = 1; // Contagem se inicia a partir da primeira casa movida

    while (i <= casas) // o loop continua enquanto i for menor ou = igual ao número de casas
    {
        printf("Cima,Direita\n"); // o bispo se move em diagonal
        i++;                      // incrementa i para contar o proximo movimento que será feito
    }
    printf("\n");
}

void moverRainha(int casas)
{
    printf("Movimento Rainha:\n");

    int i = 1;

    do
    {
        printf("Esquerda\n"); // A rainha se move para esquerda
        i++;
    } while (i <= casas); // loop será executado até alcançar 'casas'

    printf("\n");
}

void moverCavalo()
{
    printf("Movimento cavalo\n");

    // movimento vertical, duas casas para baixo
    for (int i = 1; i <= 2; i++)
    {
        printf("Baixo\n");
    }

    int j = 0;
    while (j < 1)

    {
        printf("Esquerda\n");
        j++;
    }

    printf("\n");
}
// Função para exibir o menu e capturar a escolha do usuário
void exibirMenu()
{
    int opcao; // Variável para armazenar a escolha do usuário

    do
    {
        // Exibe as opções do menu
        printf("========= MENU =========\n");
        printf("1 - Mover Torre\n");
        printf("2 - Mover Bispo\n");
        printf("3 - Mover Rainha\n");
        printf("4 - Mover Cavalo\n");
        printf("0 - Sair\n");
        printf("========================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao); // mostra a escolha do usuário

        switch (opcao)
        {
        case 1:
            moverTorre(5);
            break;
        case 2:
            moverBispo(5);
            break;
        case 3:
            moverRainha(8);
            break;
        case 4:
            moverCavalo();
            break;
        case 0:
            printf("\nSaindo do programa...\n");
            break;
        default:
            printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0); // O loop continua até o usuário escolher sair
}

// Função principal
int main()
{
    exibirMenu(); // Chama a função que exibe o menu

    return 0; // Finaliza o programa
}
