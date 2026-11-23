#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h" // Head 

// Para o samuel do futuro : estudar Makefile para compilar vários arquivos de maneira melhor !
// link : https://www.inf.pucrs.br/flash/progswb/present/U01_progC/makefiles/handout.html

int main(){
  
  int op ;
  float num1, num2 ;    // variáveis de soma
  double div1 , div2 ;   // variáveis de divisão
  float sub1 , sub2 ;   // variáveis de subtrção (poderia ser float, mas para fins educacionais será int )
  float mult1 , mult2 ;     // variáveis de multiplicação
  
  // laço de repetição
  do {
      // MENU
      puts("=============== \n");
      puts("  CALCULADORA   \n");
      puts("=============== \n");
      puts(" [1] - Soma \n");
      puts(" [2] - Multiplicação \n");
      puts(" [3] - Divisão \n");
      puts(" [4] - Subtração \n");
      puts(" [0] - Sair \n");
      puts("================= \n");
      printf("Digite o número da operação : ");
      scanf("%d", &op);
      // switch case para a operação
      switch (op)
      {
      // SOMA
      case 1:
        printf("Digite os números para serem somados : ");
        scanf("%f%f", &num1, &num2 );
        printf("resultado : %.2f \n",somar(num1, num2));

        break;

      // MULTIPLICAÇÃO
      case 2 :
        printf("Digite os números para serem multiplicados : ");
        scanf("%f%f", &mult1, &mult2 );
        printf("resultado : %.2f \n",multiplicar(mult1, mult2));
        break;

      // DIVISÃO 
      case 3 :
        printf("Digite os números : ");
        scanf("%lf%lf", &div1, &div2);
        dividir(div1, div2);
        break;

      // SUBTRAÇÃO           
      case 4 :
        printf("Digite os números : ");
        scanf("%f%f", &sub1, &sub2);
        printf("resultado : %.2f \n",subtrair(sub1,sub2));
        
        break;

      case 0 :
        printf("-- ATÉ LOGO --");
        break;
        
      default:
        break;
      }



  } while (op!=0);

  system("pause");
  return 0;
}
