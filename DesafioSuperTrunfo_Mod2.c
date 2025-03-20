#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das Cartas
// Versão Final


int main() {
       
    // Declaração das Variávbeis
    char Estado1[20], Estado2[20];
    char Codigo1[10], Codigo2[10];
    char Cidade1[20], Cidade2[20];
    unsigned long int Pop1, Pop2;
    int Pontos1, Pontos2;
    unsigned int opcao1, opcao2;
    float Area1, Area2;
    float PIB1, PIB2;
    float Densidade1, Densidade2;
    float PIB_Per1, PIB_Per2;
    float SuperPoder1, SuperPoder2;
    float resultado1 = 0;
    float resultado2 = 0;

    // Recebendo os Dados das Cartas
    printf("\nDigite as Informações para a Primeira Carta!\n");
    printf("Estado: ");
    scanf("%s", &Estado1);
    printf("Código da Carta: ");
    scanf("%s", &Codigo1);
    printf("Cidade: ");
    scanf("%s", &Cidade1);
    printf("População: ");
    scanf("%d", &Pop1);
    printf("Área: ");
    scanf("%f", &Area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Pontos Turísticos: ");
    scanf("%d", &Pontos1);

    printf("\nDigite as Informações para a Segunda Carta!\n");
    printf("Estado: ");
    scanf("%s", &Estado2);
    printf("Código da Carta: ");
    scanf("%s", &Codigo2);
    printf("Cidade: ");
    scanf("%s", &Cidade2);
    printf("População: ");
    scanf("%d", &Pop2);
    printf("Área: ");
    scanf("%f", &Area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Pontos Turísticos: ");
    scanf("%d", &Pontos2);

    //Calculando Dados
    Densidade1 = (float)Pop1 / Area1;
    Densidade2 = (float)Pop2 / Area2;
    PIB_Per1 = PIB1 / Pop1;
    PIB_Per2 = PIB2 / Pop2;

    //Super Poder
    SuperPoder1 = ((float)Pop1 + Area1 + PIB1 + (float)Pontos1 + PIB_Per1 + (1/Densidade1));
    SuperPoder2 = ((float)Pop2 + Area2 + PIB2 + (float)Pontos2 + PIB_Per2 + (1/Densidade2));

    //  Apresentando os Dados das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", Codigo1);
    printf("Cidade: %s\n", &Cidade1);
    printf("População: %d\n", Pop1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pontos1);
    printf("Densidade Populacional: %.4f\n", Densidade1);
    printf("PIB Per Capita: %.4f\n", PIB_Per1);
    printf("Super Poder: %.4f\n", SuperPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", Codigo2);
    printf("Cidade: %s\n", &Cidade2);
    printf("População: %d\n", Pop2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pontos2);
    printf("Densidade Populacional: %.4f\n", Densidade2);
    printf("PIB Per Capita: %.4f\n", PIB_Per2);
    printf("Super Poder: %.4f\n", SuperPoder2);

    //Comparando Primeiro Atributo
    printf("\nComparação das Cartas\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB Per Capta\n");
    printf("7 - Super Poder\n");
    printf("Selecione o Primeiro Atributo das Cartas para Comparação: ");
    scanf("%d", &opcao1);

    if ( opcao1 >= 1 && opcao1 <= 7){ //Avaliando se a seleção do usuário é válida
       
        switch (opcao1)
        {
        case 1:
            if (Pop1 > Pop2){
                resultado1 += (float)Pop1; 
            }else if (Pop1 < Pop2){ 
                resultado2 += (float)Pop2;
            }else{
                resultado1 += (float)Pop1;
                resultado2 += (float)Pop2;
            }
            break;
        
        case 2:
            if(Area1 > Area2){ 
                resultado1 += Area1; 
            }else if (Area1 < Area2){ 
                resultado2 += Area2;
            }else{
                resultado1 += Area1;
                resultado2 += Area2;   
            }
            break;

        case 3:
            if(PIB1 > PIB2){ 
                resultado1 += PIB1; 
            }else if(PIB1 < PIB2){ 
                resultado2 += PIB2;
            }else{
                resultado1 += PIB1;
                resultado2 += PIB2;  
            }
        break;

        case 4:
            if(Pontos1 > Pontos2){ 
                resultado1 += (float)Pontos1; 
            }else if(Pontos1 < Pontos2){ 
                resultado2 += (float)Pontos2;
            }else{
                resultado1 += (float)Pontos1;
                resultado2 += (float)Pontos2;     
            }
        break;

        case 5:
            if(Densidade1 < Densidade2){ 
                resultado1 += Densidade1; 
            }else if(Densidade1 > Densidade2){ 
                resultado2 += Densidade2;
            }else{
                resultado1 += Densidade1;
                resultado2 += Densidade2;           
            }
        break;

        case 6:
            if(PIB_Per1 > PIB_Per2){ 
                resultado1 += PIB_Per1; 
            }else if(PIB_Per1 < PIB_Per2){ 
                resultado2 += PIB_Per2;
            }else{
                resultado1 += PIB_Per1;
                resultado2 += PIB_Per2;   
            }
        break;

        case 7:
            if(SuperPoder1 > SuperPoder2){ 
                resultado1 += SuperPoder1; 
            }else if(SuperPoder1 < SuperPoder2){ 
                resultado2 += SuperPoder2;
            }else{
                resultado1 += SuperPoder1;
                resultado2 += SuperPoder2;   
            }
        break;

        default:
            printf("Valor Inválido!");
        break;
        }
    
    //Comparando Segundo Atributos
    printf("\nComparação das Cartas\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB Per Capta\n");
    printf("7 - Super Poder\n");
    printf("Selecione o Segundo Atributo das Cartas para Comparação: ");
    scanf("%d", &opcao2);

        if (opcao1 == opcao2){       //Verificando se o usuário selecionou o mesmo parâmetro
            printf("Você Digitou o Mesmo Atributo!\n");
        } else if (opcao2 >= 1 && opcao2 <= 7){

            switch (opcao2)
            {
            case 1:
                if (Pop1 > Pop2){
                    resultado1 += (float)Pop1; 
                }else if (Pop1 < Pop2){ 
                    resultado2 += (float)Pop2;
                }else{
                    resultado1 += (float)Pop1;
                    resultado2 += (float)Pop2;
                }
                break;
            
            case 2:
                if(Area1 > Area2){ 
                    resultado1 += Area1; 
                }else if (Area1 < Area2){ 
                    resultado2 += Area2;
                }else{
                    resultado1 += Area1;
                    resultado2 += Area2;   
                }
                break;

            case 3:
                if(PIB1 > PIB2){ 
                    resultado1 += PIB1; 
                }else if(PIB1 < PIB2){ 
                    resultado2 += PIB2;
                }else{
                    resultado1 += PIB1;
                    resultado2 += PIB2;  
                }
            break;

            case 4:
                if(Pontos1 > Pontos2){ 
                    resultado1 += (float)Pontos1; 
                }else if(Pontos1 < Pontos2){ 
                    resultado2 += (float)Pontos2;
                }else{
                    resultado1 += (float)Pontos1;
                    resultado2 += (float)Pontos2;     
                }
            break;

            case 5:
                if(Densidade1 < Densidade2){ 
                    resultado1 += Densidade1; 
                }else if(Densidade1 > Densidade2){ 
                    resultado2 += Densidade2;
                }else{
                    resultado1 += Densidade1;
                    resultado2 += Densidade2;    
                }
            break;

            case 6:
                if(PIB_Per1 > PIB_Per2){ 
                    resultado1 += PIB_Per1; 
                }else if(PIB_Per1 < PIB_Per2){ 
                    resultado2 += PIB_Per2;
                }else{
                    resultado1 += PIB_Per1;
                    resultado2 += PIB_Per2;   
                }
            break;

            case 7:
                if(SuperPoder1 > SuperPoder2){ 
                    resultado1 += SuperPoder1; 
                }else if(SuperPoder1 < SuperPoder2){ 
                    resultado2 += SuperPoder2;
                }else{
                    resultado1 += SuperPoder1;
                    resultado2 += SuperPoder2;   
                }
            break;

            default:
                printf("Valor Inválido!");
            break;
            }

        } else{ 
            printf("Valor Inválido!");
        }

    }

    //Resultado
    if (resultado1 == resultado2){
        printf("\nEmpate\n!");
    }else if(resultado1 > resultado2){
        printf("\nCarta 1 Venceu a Carta 2!\n");   
    }else{
        printf("\nCarta 2 Venceu a Carta 1!\n"); 
    }

    //Apresentação dos Parâmetros Comparados
    printf("\nEstado 1: %s\n", Estado1);
    printf("Soma Carta 1: %.2f\n", resultado1);
    opcao1 == 1 ? printf("População: %d\n", Pop1) : 0;
    opcao1 == 2 ? printf("Área: %.2f\n", Area1) : 0;
    opcao1 == 3 ? printf("PIB: %.2f\n", PIB1) : 0;
    opcao1 == 4 ? printf("Pontos Turísticos: %d\n", Pontos1) : 0;
    opcao1 == 5 ? printf("Densidade Populacional: %.4f\n", Densidade1) : 0;
    opcao1 == 6 ? printf("PIB Per Capita: %.4f\n", PIB_Per1) : 0;
    opcao1 == 7 ? printf("Super Poder: %.4f\n", SuperPoder1) : 0;
   
    opcao2 == 1 ? printf("População: %d\n", Pop1) : 0;
    opcao2 == 2 ? printf("Área: %.2f\n", Area1) : 0;
    opcao2 == 3 ? printf("PIB: %.2f\n", PIB1) : 0;
    opcao2 == 4 ? printf("Pontos Turísticos: %d\n", Pontos1) : 0;
    opcao2 == 5 ? printf("Densidade Populacional: %.4f\n", Densidade1) : 0;
    opcao2 == 6 ? printf("PIB Per Capita: %.4f\n", PIB_Per1) : 0;
    opcao2 == 7 ? printf("Super Poder: %.4f\n", SuperPoder1) : 0;


    printf("\nEstado 2: %s\n", Estado2);
    printf("Soma Carta 2: %.2f\n", resultado2);
    opcao1 == 1 ? printf("População: %d\n", Pop2) : 0;
    opcao1 == 2 ? printf("Área: %.2f\n", Area2) : 0;
    opcao1 == 3 ? printf("PIB: %.2f\n", PIB2) : 0;
    opcao1 == 4 ? printf("Pontos Turísticos: %d\n", Pontos2) : 0;
    opcao1 == 5 ? printf("Densidade Populacional: %.4f\n", Densidade2) : 0;
    opcao1 == 6 ? printf("PIB Per Capita: %.4f\n", PIB_Per2) : 0;
    opcao1 == 7 ? printf("Super Poder: %.4f\n", SuperPoder2) : 0;
   
    opcao2 == 1 ? printf("População: %d\n", Pop2) : 0;
    opcao2 == 2 ? printf("Área: %.2f\n", Area2) : 0;
    opcao2 == 3 ? printf("PIB: %.2f\n", PIB2) : 0;
    opcao2 == 4 ? printf("Pontos Turísticos: %d\n", Pontos2) : 0;
    opcao2 == 5 ? printf("Densidade Populacional: %.4f\n", Densidade2) : 0;
    opcao2 == 6 ? printf("PIB Per Capita: %.4f\n", PIB_Per2) : 0;
    opcao2 == 7 ? printf("Super Poder: %.4f\n", SuperPoder2) : 0;

    return 0;
}
