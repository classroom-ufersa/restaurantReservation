#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void){
  setlocale(LC_ALL, "Portuguese");
  char nome[50], letraMaiuscula, letraMaiusculaToupper;
  int totalTables = 0, totalBookings = 0, opcao, repetidor = 1;
  RESERVA reserva;  
  DATA inicio, fim; 
}

 while(repetidor != 0){ 
  printf("--------------------------------------------------------");
  printf("Bem vindo ao sistema de reserva do restaurante Oiticica:\n01.Adicionar nova reserva\n02.deletar reserva\n03.Listar reserva\n04. Pesquisar reserva\n05. editar cadastro de reserva\ n06.Consultar reserva para um cliente\n07. Sair\nEscolha uma opção para prosseguir..."
  scanf("%d",&opcao);
  switch(opcao){
    case 1:
      printf("Tela: Adicionar nova reserva ---------\n");
      printf("Digite o seu nome: ");
      scanf("%[^\n]s", nome);
      
      letraMaiuscula = nome[0]; //atribui o primeiro caractere do nome.
      letraMaiusculaToupper = toupper(letraMaiuscula); //faz a conversão do caractere da posição escolhida. 
      nome[0] = letraMaiusculaToupper; //Adiciona o caractere convertido na posição desejada.
        
      
    
        
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      looping = 0;
      break;
    defaut:
      printf("opção invalida! tente novamente...")
      break;  
    
    
          
  
  }
  
  }
       
      
 










