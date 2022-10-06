#include <stdio.h>

int main() {
    // variáveis
    char *autor_nome = "Ricardo Santana"; // String
    char *autor_curso = "DIGITAR";        // String        
    char *autor_universidade = "DIGITAR"; // String  
    int autor_matricula = 1234;  
   
    char operacao[2];
    float op1, op2, resultado = 0;
    // Fim Variáveis
   
    printf("Bem vindo(a) a calculadora\n");
    printf("Autor: %s\n", autor_nome);
    printf("Curso: %s\n", autor_curso );
    printf("Universidade: %s\n", autor_universidade);
   
    printf(" \n");
    printf("Operações Simples: + - * /\n");
    printf("Operações Complexas: Raiz Quadrada: // Potencia: **\n");
    printf("Digite a Operação: ");
    scanf("%s", &operacao);

    printf("\nDigite Operando 1: ");
    scanf("%f", &op1);
   
    // Comparar variável "operacao" com a string "//"
    if (strcmp(operacao,"//") == 0)
        // Significa que é raiz quadrada
        resultado = sqrt(op1);  // cálculo do resultado
     else {
      // se não for raiz quadrada
      // pergunta qual o operando 2
      printf("\nDigite Operando 2: ");
      scanf("%f", &op2);
     
      // verifica se a operação é divisão
      if (strcmp(operacao,"/") == 0)
        // se for, dividir op1 por op2 e atualizar variável resultado
        resultado = op1 / op2;
   
      if (strcmp(operacao,"+") == 0)
        resultado = op1 + op2;
       
      if (strcmp(operacao,"*") == 0)
        resultado = op1 * op2;
   
      if (strcmp(operacao,"-") == 0)
        resultado = op1 - op2;
   
      if (strcmp(operacao,"**") == 0)
        resultado = pow(op1, op2);

    }
    printf("Resultado: %f", resultado);
   
    return 0;
}
