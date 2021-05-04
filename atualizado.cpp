//Nome:Lara Kalline Sales de Oliveira\ Matricula:UC19107148   \Curso: Engenharia de Software 
#include<stdio.h> //biblioteca para variaveis
#include<locale.h> //biblioteca de acentos 
#include<string.h> //comparar texto
#include<stdlib.h> //
#include<math.h> //fazer operaçoes matematicas 
 
int main(void){
//Necessita o nome do filme, número de sessoes, a quantidade de pessoas que assistiram o filme, sexo, idade.
    setlocale(LC_ALL,"Portuguese");
char nomedofilme[100];
int numeroSessoes, pessoasAssistiram,valoringresso, idade, contador, sexo, criancas, adolescentes, adultos, idosos, maioridadef, maioridadem;
//codigo limpo : variaveis de facil entendimento 

printf("+---------------------------------------+ \n");
printf("|        CINEMA DE BRASILIA             | \n");       
printf("|          SEJA BEM VINDO               | \n");     
printf("+---------------------------------------+ \n"); 
criancas=0; 
adolescentes=0;
adultos=0;
idosos=0;
maioridadef=0;
maioridadem=0;
contador=0; 
valoringresso=0;

printf("+------------------------------ + \n");   
printf("|           Filmes              | \n");   
printf("| Venom 2: 6,00                 | \n");       
printf("| Mortal kombat:6,00            | \n");     
printf("| Harry potter:6,00             | \n");   
printf("| Vingadores:6,00               | \n");   
printf("+-------------------------------+ \n"); 

    while(numeroSessoes!=2){                                  //numero de sessoes exatamente 2 
    printf("Informe a quantidade de sessoes: \n");
    scanf("%i", &numeroSessoes);}                             //validar a sessao
    
	 printf("Informe o valor do ingresso: \n");                 //valor do ingresso
    scanf("%d", &valoringresso);
    
     while (strlen(nomedofilme)<5){                            //se o nome do filme possuir menor que 5 letras irá repetir 
     	printf("Informe o nome do filme: \n");
     	fflush(stdin);                                        //limpar cache de memoria
     	fgets(nomedofilme,100,stdin);
     	 }
    while (pessoasAssistiram<10){                           //se a quantidade de pessoas for menor que 10, irá se repetir para nao aceitar vazio
    	printf("Informe a quantidade de pessoas que assistiram a sessao: \n");
        scanf("%i", &pessoasAssistiram); 
	}
	for (contador=0;contador<pessoasAssistiram;contador++){ //enquanto o contador for menor que o valor de pessoas informadas ele vai execultar e receber mais um
	     printf("Informe o sexo(F|M): \n");
	     printf("[1]F \n");                                    //opção de escolha e interação para usuario
	     printf("[2]M \n");
	     scanf("%d", &sexo);
	     switch(sexo){
	     	case 1:                                          
	     		printf("Informe a idade: \n");
	     		scanf("%d",&idade);
	     		while (idade<3 || idade>100){                  //while para nao aceitar menor que 3 e nem maior que 100
	     			printf("Erro!(idade deve estar entre 03 á 100) \n");
	     			scanf("%d",&idade);
				 }
	            if (idade>=3&&idade<=13){                       //contador para a idade 
	            	criancas=criancas+1;
				}else if (idade>=14&&idade<=17){
					adolescentes=adolescentes+1;
				}else if (idade>=18&&idade<=64){
					adultos=adultos+1; 
					maioridadef=maioridadef+1;               //para informar a quantidade de mulheres maiores de idade
				}else if (idade>=65&&idade<=100){
					idosos=idosos+1;
					 maioridadef=maioridadef+1;
				}break;                                        //quebrar o laço de repetição
			case 2:
			printf("Iforme a idade: \n");
	     		scanf("%d",&idade);
	     		while (idade<3 || idade>100){
	     			printf("Erro!(idade deve estar entre 03 á 100) \n");
	     			scanf("%d",&idade);
				 }
	            if (idade>=3&&idade<=13){
	            	criancas=criancas+1;
				}else if (idade>=14&&idade<=17){
					adolescentes=adolescentes+1;
				}else if (idade>=18&&idade<=64){
					adultos=adultos+1;
					 maioridadem= maioridadem+1;            //para informar a quantidade de homens maiores de idade
				}else if (idade>=65&&idade<=100){
					idosos=idosos+1;
					 maioridadem=maioridadem+1;
				}break;
				}
				system("cls");                              //limpar a tela 
			}

               	system("cls");
        
        printf("+--------------------------------------------------+ \n");
        printf("|                 Informações sobre sessão          | \n");
        printf("|---------------------------------------------------| \n");
        printf("|Nome do filme:  %s                                 | \n",&nomedofilme);
        printf("|---------------------------------------------------| \n");
        printf("|Valor do ingresso:   %d                            | \n",valoringresso);
        printf("|---------------------------------------------------| \n");
        printf("| Idade   |               |Quantidade               | \n");
        printf("|03 - 13  |  Crianças     | %d                      | \n",criancas);
        printf("|13 - 17  |  Adolescentes | %d                      | \n",adolescentes);
        printf("|18 - 64  |  Adultos      | %d                      | \n",adultos);
        printf("|64 - 100 |  Idosos       | %d                      |\n",idosos);
        printf("+---------------------------------------------------+ \n");
       
system ("pause \n");                                         //dar pause para não fechar o programa
printf("Aperte enter para prosseguir \n");                   
system("cls");

 printf("+--------------------------------------------+ \n");
 printf("|Quantidade de mulheres na sessão: %d        | \n ",maioridadef);
 printf("|Quantidade de homens na sessão: %d          | \n ",maioridadem);
 printf("+--------------------------------------------+ \n");



    return 0;
}
