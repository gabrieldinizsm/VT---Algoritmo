#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>    
#include "funcoes.h"
#include "anime.h"
#include "algoritmo.h"
#include "ciencia.h"
#include "futebol.h"

char perg;
int record;

leitura_anime(){ 
	
		FILE *arq;
	
           arq=fopen("Anime.txt","r");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
        }
	else{
		
		while( (perg=fgetc(arq))!= EOF )
		putchar(perg);

	fclose(arq);
}
	system("pause");
	system("cls");
}

leitura_algoritmo(){ 
	
		FILE *arq;
	
           arq=fopen("Algoritmo.txt","r");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
        }
	else{
		
		while( (perg=fgetc(arq))!= EOF )
		putchar(perg);

	fclose(arq);
}
	system("pause");
	system("cls");
}

leitura_ciencias(){ 
	
		FILE *arq;
	
           arq=fopen("Ciencias.txt","r");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
        }
	else{
		
		while( (perg=fgetc(arq))!= EOF )
		putchar(perg);

	fclose(arq);
}
	system("pause");
	system("cls");
}


leitura_fut(){ 
	
		FILE *arq;
	
           arq=fopen("Futebol.txt","r");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
        }
	else{
		
		while( (perg=fgetc(arq))!= EOF )
		putchar(perg);

	fclose(arq);
}
	system("pause");
	system("cls");
}


int main (void)         
{       
    setlocale(LC_ALL, "Portuguese");
    system("color f0");  
                   
    menu();           
                     
    system("pause");
    return 0;      
}

     void menu()                  
{                                 
                                  
setlocale(LC_ALL, "Portuguese");
system("color f0");
limpaTela();                      
        

            srand(time(NULL));  

            int numeroGerado = RandRange(1,5); 
            int opc;
            printf("\t\t==============================================\n\n");       
            printf("\t\t|                  QUIZ                      |\n\n");       
            printf("\t\t|                  MEGAP                     |\n\n");       
            printf("\t\t==============================================\n\n");       
            printf("\n\t\tTecle ENTER para iniciar o programa...");
            
            getchar(); 
            limpaTela();
            
            insereDuasLinhas();
            tabula();
            tabula();
           
		    printf ("ESCOLHA UM DOS TEMAS ABAIXO PARA AS PERGUNTAS DO QUIZ: ");
            quebraTabula();
            
			printf ("1 _ Para Linguagem C:");
            insereUmaLinha();
            tabula();
           
		    printf ("2 _ Para Futebol:"); 
            insereUmaLinha();
            tabula();
           
		    printf ("3 _ Para Ciência:"); 
            insereUmaLinha();
            tabula();
           
		    printf("4 _ Para Animes/Series:"); 
            insereUmaLinha();              
            tabula();
           
		    printf ("5 _ Records");
            insereUmaLinha();
            tabula();
            
            printf ("6 _ Sair");
            insereDuasLinhas();
            tabula();
          
		    printf ("Opção: ");
            scanf ("%d", &opc);
            getchar();

     switch (opc)                     
{
            case 1:
                 
            switch(numeroGerado){     
                
                case 1: 
                     algoritmo1();
                     break;
                case 2:
                     algoritmo2();
                     break;
                case 3:
                     algoritmo3();
                     break;
                case 4:
                     algoritmo4();
                     break;
                case 5:
                     algoritmo5();
                     break;}
            case 2:
                
            switch(numeroGerado){ 
            
			case 1:
           		 futebol1();
           		 break;
        	case 2:
                 futebol2();
                 break;
            case 3:
                futebol3();
                break;
            case 4:
                futebol4();
                break;
            case 5:
                futebol5();
            	break;}
                    

            case 3:
                 
            switch(numeroGerado){     
                
                case 1: 
                     ciencia1();
                     break;
                case 2:
                     ciencia2();
                     break;
                case 3:
                     ciencia3();
                     break;
                case 4:
                     ciencia4();
                     break;
                case 5:
                     ciencia5();
                     break;}
                 
            case 4:
                 
            switch(numeroGerado){     
                
                case 1: 
                     anime1();
                     break;
                case 2:
                     anime2();
                     break;
                case 3:
                     anime3();
                     break;
                case 4:
                     anime4();
                     break;
                case 5:
                     anime5();
                     break;} 
            case 5:
            
            limpaTela();
		   	printf ("\t1 _ Records Linguagem C:");
            insereUmaLinha();
            tabula();
           
		    printf ("2 _ Records Futebol:"); 
            insereUmaLinha();
            tabula();
           
		    printf ("3 _ Records Ciência:"); 
            insereUmaLinha();
            tabula();
           
		    printf("4 _ Records Animes/Series:");  
            insereUmaLinha();              
            tabula();
           
		    printf ("5 _ Voltar para o menu:"); 
            insereDuasLinhas();               
            tabula();
            
            printf("\tDigite a opção\n");
            scanf("%d",&record);
            
            if(record>5){
            menu();}
           	
            	switch(record){
				
			 case 1: 
                     limpaTela();
                	 leitura_algoritmo();
                     menu();   
                	 break;   
					  
                case 2:
                     limpaTela();
              	     leitura_fut();
              	     menu();   
                     break;    
                     
                case 3:
                     limpaTela();
                	 leitura_ciencias();
               	     menu();   
               		 break;    
               		 
                case 4:
                     limpaTela();
                	 leitura_anime();
               	     menu();   
               		 break;   
						 
                case 5:
                     menu();
                     break;}
			              
            case 6:
            	
            exit(1);
                 break;     
            	 default:
                 menu();
			
}
}



int RandRange(int Min, int Max)
{
    int one = Min;
    int two = Max;
    return rand()%(one-two + 1) + one;
}
