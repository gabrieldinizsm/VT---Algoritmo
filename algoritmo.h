void algoritmo1(){
     
	 limpaTela();
     insereDuasLinhas();
     duasTabulas();
   
     printf("O QUIZ TEM 10 QUEST�ES E CADA QUEST�O VALE 10 PONTOS.");
     insereDuasLinhas();
     duasTabulas();
 
     printf("*****N�O USE CAPSLOCK!!!!!*****");
     insereDuasLinhas();
     duasTabulas();
   
     printf("PRESSIONE ENTER PARA CONTINUAR");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 1: O que � algoritmo?");
     quebraTabula();
   
     printf("a)Uma estrutura de passos l�gicos que quando executar, realiza \n\tdeterminada tarefa.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Uma sequencia de passos infinitos para executar uma \n\tdeterminada tarefa.");
     insereDuasLinhas();
     tabula();
   
     printf("c)Uma linguagem de Programa��o para fazer Calculadoras.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Uma estrutura que independente da ordem, executa uma \n\tdeterminada fun��o.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Uma linguagem de Estilo usado para modificar o prompt de comando.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
    
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 2: Oque � linguagem C?");
     quebraTabula();
    
	 printf("a)� uma linguagem de programa��o gen�tica utilizada \n\tpara cria��o de diversas programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)� uma linguagem de programa��o gen�rica utilizada \n\tpara cria��o de diversos programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)� uma linguagem de programa��o gen�tica utilizada \n\tpara fixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)� uma linguagem de programa��o gen�rica utilizada \n\tpara fixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
     
     printf("e)� uma linguagem de programa��o utilizada para \n\tfixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
 	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3: Porque a linguagem C � portavel?");
     quebraTabula();
    
	 printf("a)Por ser imposs�vel adaptar um tipo de software \n\tescrito para um tipo de computador para outro.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Por nao ser poss�vel separar um tipo de software \n\tescrito para um tipo de computador para outro.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Por ser poss�vel concretizar um tipo de software \n\tescrito para um tipo de computador para outro.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Por ser poss�vel adaptar um tipo de software \n\tescrito para um tipo de computador para outro.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Por ser inviavel adaptar um tipo de software \n\tescrito para um tipo de computador para outro.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 4: Oque s�o compiladores e interpretadores?");
     quebraTabula();
    
	 printf("a)Programas sofisticados que liberam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Programas sofisticados que ficam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Programas sofisticados que superam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Programas sofisticados que operam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Programas sofisticados que operam fora do c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 5: Quais vari�veis est�o declaradas corretamente de acordo\n\t com o tipo de dado?");
     quebraTabula();
    
	 printf("a)int cor; char cpf; float medida; double valor;");
     insereDuasLinhas();
     tabula();
    
	 printf("b)int idade; char nome; double medida; float valor;");
     insereDuasLinhas();
     tabula();
    
	 printf("c)char nome; int idade; double numero; float medida;");
     insereDuasLinhas();
     tabula();
    
	 printf("d)char valor; int idade; double numero; float valor;");
     insereDuasLinhas();
     tabula();
     
     printf("e)char idade; int nome; double cpf; float cor;");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 6: Onde podemos utilizar um algoritmo?");
     quebraTabula();
    
	 printf("a)Na area de computadores, constru��o de interfer�ncias, tapwares, \n\thardDisk e planejamento de redes de pesca.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na �rea da computa��o, constru��o de interfaces, Software, \n\thardware e planejamento de redes.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Na �rea da comuta��o, constru��o de interc�mbio, malwares, \n\tvirus e planejamento de redes de balan�o.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Na area da comunica��o, aperfei�oamento de interfaces, \n\tsoftwares livres raio-x e planejamento de vias.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Nenhuma das anteriores.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 7: Onde as vari�veis ficam armazenadas?");
     quebraTabula();
    
	 printf("a)No banco de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na mem�ria RAM do computador.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)No banco dados, no software e na mem�ria RAM.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)No programa/software.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Em uma struct.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;}
     else if(op!='b'){cont=cont+0;}
     getchar();
     limpaTela();
     insereDuasLinhas();
     insereDuasLinhas();
     tabula();
     
      printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 8: Marque a op��o correta que define a \n\testrutura de repeti��o 'for'.");
     quebraTabula();
    
	 printf("a)Estrutura de repeti��o utilizada quando j� existe um termino\n\tdeterminado ou um limte fixo.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Caso o resultado seja falso, o programa encerra essa estrutura\n\te volta para o bruto do programa.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Estrutura de repeti��o que realiza um teste l�gico no final\n\tda estrutura, executando ao menos uma vez o conjunto"
     "de \n\tinstru��es antes de verificar a condi��o proposta.");  
     insereDuasLinhas();
     tabula();
    
	 printf("d)Estrutura de repeti��o que realiza um teste l�gico no in�cio da \n\testrutura e sempre que o teste l�gico resultar"
     "em VERDADEIRO, os \n\tcomandos associados a esta estrutura s�o executadas.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Uma estrutura que armazena infinitos valores em uma \n\tunica vari�vel ao mesmo tempo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 9: STDIO � respons�vel por:");
     quebraTabula();
    
	 printf("a)Convers�o de string para n�mero.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Compilar o t�rmino do programa.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Fun��o de entrada e sa�da de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Habilita a fun��o system('x').");
     insereDuasLinhas();
     tabula();
     
     printf("e)Apenas uma biblioteca obrigat�ria que n�o adiciona \n\tnenhuma fun��o no c�digo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 10: STDLIB � respons�vel por:");
     quebraTabula();
    
	 printf("a)Fun��o de entrada e sa�da de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Convers�o de string para n�mero.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Habilitar a fun��o system('x').");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Compilar o programa.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Apenas uma biblioteca obrigat�ria que n�o adiciona \n\tnenhuma fun��o no c�digo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     insereDuasLinhas();
     tabula();
     
     printf("PARAB�NS SUA PONTUA��O FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();

     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Algoritmo.txt","a");
           
           if(arq == NULL){
			printf("Erro, n�o foi poss�vel abrir o arquivo\n");}
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
    
	 printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}    
void algoritmo2(){ 

     limpaTela();
     insereDuasLinhas();
     duasTabulas();
   
     printf("O QUIZ TEM 10 QUEST�ES E CADA QUEST�O VALE 10 PONTOS.");
     insereDuasLinhas();
     duasTabulas();
 
     printf("*****N�O USE CAPSLOCK!!!!!*****");
     insereDuasLinhas();
     duasTabulas();
   
     printf("PRESSIONE ENTER PARA CONTINUAR");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 1: Quais desses n�o s�o operadores relacionais?");
     quebraTabula();
   
     printf("a)!= ; == ;");
     insereDuasLinhas();
     tabula();
    
	 printf("b)< ; == ;");
     insereDuasLinhas();
     tabula();
   
     printf("c)&& ; || ;");
     insereDuasLinhas();
     tabula();
   
     printf("d)>= ; <= ;");
     insereDuasLinhas();
     tabula();
     
     printf("e)>= ; == ;");
     insereDuasLinhas();
     tabula();
   
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 2: Leia o c�digo a seguir:");
     insereDuasLinhas();
     printf("\t\t1-#include<stdio.h>\n"
     "\t\t2-#include<stdlib.h>\n"
     "\t\t3-main(){\n"
     "\t\t4-int r\n"
     "\t\t5-r=1+1;}\n");
     insereUmaLinha();
     tabula();
     printf("QUAL LINHA EST� ERRADA?");
     quebraTabula();
    
	 printf("a)1");
     insereDuasLinhas();
     tabula();
    
	 printf("b)2");
     insereDuasLinhas();
     tabula();
    
	 printf("c)3");
     insereDuasLinhas();
     tabula();
    
	 printf("d)4");
     insereDuasLinhas();
     tabula();
     
     printf("e)5");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
    
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3: STDIO � respons�vel por:");
     quebraTabula();
    
	 printf("a)Convers�o de string para n�mero.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Compilar o t�rmino do programa.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Fun��o de entrada e sa�da de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Habilita a fun��o system('x').");
     insereDuasLinhas();
     tabula();
     
     printf("e)Apenas uma biblioteca obrigat�ria que n�o adiciona \n\tnenhuma fun��o no c�digo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 4: Oque s�o compiladores e interpretadores?");
     quebraTabula();
    
	 printf("a)Programas sofisticados que liberam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Programas sofisticados que ficam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Programas sofisticados que superam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Programas sofisticados que operam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Programas sofisticados que operam fora do c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 5: STDLIB � respons�vel por:");
     quebraTabula();
    
	 printf("a)Fun��o de entrada e sa�da de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Convers�o de string para n�mero.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Habilitar a fun��o system('x'). ");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Compilar o programa.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Apenas uma biblioteca obrigatoria que n�o adiciona \n\tnenhuma fun��o no c�digo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 6: Marque a op��o correta que define a \n\testrutura de repeti��o 'for'.");
     quebraTabula();
    
	 printf("a)Estrutura de repeti��o utilizada quando j� existe um termino\n\t determinado ou um limte fixo.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Caso o resultado seja falso, o programa encerra essa estrutura\n\t e volta para o bruto do programa.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Estrutura de repeti��o que realiza um teste l�gico no \n\tfinal da estrutura, executando ao menos uma vez o conjunto"
     "de \n\tinstru��es antes de verificar a condi��o proposta.");  
     insereDuasLinhas();
     tabula();
    
	 printf("d)Estrutura de repeti��o que realiza um teste l�gico no in�cio da \n\testrutura e sempre que o teste l�gico resultar"
     "em VERDADEIRO, os \n\tcomandos associados a esta estrutura s�o executadas.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Uma estrutura que armazena infinitos valores em uma \n\tunica vari�vel ao mesmo tempo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 7: Onde podemos utilizar um algoritmo?");
     quebraTabula();
    
	 printf("a)Na �rea de computadores, constru��o de interfer�ncias, tapwares, \n\thardDisk e planejamento de redes de pesca.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na �rea da computa��o, constru��o de interfaces, Software, \n\thardware e planejamento de redes.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Na �rea da comuta��o, constru��o de interc�mbio, malwares, \n\tv�rus e planejamento de redes de balan�o.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Na �rea da comunica��o, aperfei�oamento de interfaces, \n\tsoftwares livres raio-x e planejamento de vias.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Nenhuma das anteriores.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
      printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 8: O que � algoritmo?");
     quebraTabula();
   
     printf("a)Uma estrutura de passos l�gicos que quando executar, realiza \n\tdeterminada tarefa.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Uma sequ�ncia de passos infinitos para executar uma \n\tdeterminada tarefa.");
     insereDuasLinhas();
     tabula();
   
     printf("c)Uma linguagem de programa��o para fazer Calculadoras.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Uma estrutura que independente da ordem, executa uma \n\tdeterminada fun��o.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 9:  Onde as vari�veis ficam armazenadas?");
     quebraTabula();
    
	 printf("a)No banco de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na mem�ria RAM do computador.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)No banco dados, no software e na mem�ria RAM.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)No programa/software.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Em uma struct.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 10: Oque � linguagem C?");
     quebraTabula();
    
	 printf("a)� uma linguagem de programa��o gen�tica utilizada \n\tpara cria��o de diversas programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)� uma linguagem de programa��o gen�rica utilizada \n\tpara cria��o de diversos programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)� uma linguagem de programa��o gen�tica utilizada \n\tpara fixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)� uma linguagem de programa��o gen�rica utilizada \n\tpara fixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
     
     printf("e)� uma linguagem de programa��o utilizada para \n\tfixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PARAB�NS SUA PONTUA��O FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();

     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Algoritmo.txt","a");
           
           if(arq == NULL){
			printf("Erro, n�o foi poss�vel abrir o arquivo\n");}
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}    
void algoritmo3(){ 

     limpaTela();
     insereDuasLinhas();
     duasTabulas();
   
     printf("O QUIZ TEM 10 QUEST�ES E CADA QUEST�O VALE 10 PONTOS.");
     insereDuasLinhas();
     duasTabulas();
 
     printf("*****N�O USE CAPSLOCK!!!!!*****");
     insereDuasLinhas();
     duasTabulas();
   
     printf("PRESSIONE ENTER PARA CONTINUAR");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 1: Onde podemos utilizar um algoritmo?");
     quebraTabula();
    
	 printf("a)Na �rea de computadores, constru��o de interferencias, tapwares, \n\thardDisk e planejamento de redes de pesca.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na �rea da computa��o, constru��o de interfaces, Software, \n\thardware e planejamento de redes.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Na �rea da computa��o, constru��o de intercambio, malwares, \n\tv�rus e planejamento de redes de balan�o.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Na �rea da comunica��o, aperfei�oamento de interfaces, \n\tsoftwares livres raio-x e planejamento de vias.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Nenhuma das anteriores.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 2:  Onde as vari�veis ficam armazenadas?");
     quebraTabula();
    
	 printf("a)No banco de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na mem�ria RAM do computador.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)No banco dados, no software e na mem�ria RAM.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)No programa/software.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Em uma struct.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3: Oque � linguagem C?");
     quebraTabula();
    
	 printf("a)� uma linguagem de programa��o gen�tica utilizada \n\tpara cria��o de diversas programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)� uma linguagem de programa��o gen�rica utilizada \n\tpara cria��o de diversos programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)� uma linguagem de programa��o gen�tica utilizada \n\tpara fixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)� uma linguagem de programa��o gen�rica utilizada \n\tpara fixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
     
     printf("e)� uma linguagem de programa��o utilizada para \n\tfixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3: STDIO � respons�vel por:");
     quebraTabula();
    
	 printf("a)Convers�o de string para n�mero.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Compilar o t�rmino do programa.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Fun��o de entrada e sa�da de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Habilita a fun��o system('x').");
     insereDuasLinhas();
     tabula();
     
     printf("e)Apenas uma biblioteca obrigat�ria que n�o adiciona \n\tnenhuma fun��o no c�digo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 5: Quais vari�veis est�o declaradas corretamente de acordo\n\t com o tipo de dado?");
     quebraTabula();
    
	 printf("a)int cor; char cpf; float medida; double valor;");
     insereDuasLinhas();
     tabula();
    
	 printf("b)int idade; char nome; double medida; float valor;");
     insereDuasLinhas();
     tabula();
    
	 printf("c)char nome; int idade; double numero; float medida;");
     insereDuasLinhas();
     tabula();
    
	 printf("d)char valor; int idade; double numero; float valor;");
     insereDuasLinhas();
     tabula();
     
     printf("e)char idade; int nome; double cpf; float cor;");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 6: O que � algoritmo?");
     quebraTabula();
   
     printf("a)Uma estrutura de passos l�gicos que quando executar, realiza \n\tdeterminada tarefa.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Uma sequ�ncia de passos infinitos para executar uma \n\tdeterminada tarefa.");
     insereDuasLinhas();
     tabula();
   
     printf("c)Uma linguagem de programa��o para fazer Calculadoras.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Uma estrutura que independente da ordem, executa uma \n\tdeterminada fun��o.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 7: Leia o c�digo a seguir:");
     insereDuasLinhas();
     printf("\t\t1-#include<stdio.h>\n"
     "\t\t2-#include<stdlib.h>\n"
     "\t\t3-main(){\n"
     "\t\t4-int r\n"
     "\t\t5-r=1+1;}\n");
     insereUmaLinha();
     tabula();
     printf("QUAL LINHA EST� ERRADA?");
     quebraTabula();
    
	 printf("a)1");
     insereDuasLinhas();
     tabula();
    
	 printf("b)2");
     insereDuasLinhas();
     tabula();
    
	 printf("c)3");
     insereDuasLinhas();
     tabula();
    
	 printf("d)4");
     insereDuasLinhas();
     tabula();
     
     printf("e)5");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
      printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 8: STDLIB � respons�vel por:");
     quebraTabula();
    
	 printf("a)Fun��o de entrada e sa�da de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Conversao de string para n�mero.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Habilitar a fun��o system('x').");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Compilar o programa.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Apenas uma biblioteca obrigatoria que n�o adiciona \n\tnenhuma fun��o no c�digo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 9: Marque a op��o correta que define a \n\testrutura de repeti��o 'for'.");
     quebraTabula();
    
	 printf("a)Estrutura de repeti��o utilizada quando j� existe um t�rmino\n\t determinado ou um limte fixo.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Caso o resultado seja falso, o programa encerra essa estrutura\n\t e volta para o bruto do programa.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Estrutura de repeti��o que realiza um teste l�gico no \n\tfinal da estrutura, executando ao menos uma vez o conjunto"
     "de \n\tinstru��es antes de verificar a condi��o proposta.");  
     insereDuasLinhas();
     tabula();
    
	 printf("d)Estrutura de repeti��o que realiza um teste l�gico no in�cio da \n\testrutura e sempre que o teste l�gico resultar"
     "em VERDADEIRO, os \n\tcomandos associados a esta estrutura s�o executadas.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Uma estrutura que armazena infinitos valores em uma \n\tunica vari�vel ao mesmo tempo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 10: Oque s�o compiladores e interpretadores?");
     quebraTabula();
    
	 printf("a)Programas sofisticados que liberam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Programas sofisticados que ficam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Programas sofisticados que superam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Programas sofisticados que operam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Programas sofisticados que operam fora do c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
                              
     insereDuasLinhas();
     insereDuasLinhas();
     tabula();
     
     printf("PARAB�NS SUA PONTUA��O FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();

     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Algoritmo.txt","a");
           
           if(arq == NULL){
			printf("Erro, n�o foi poss�vel abrir o arquivo\n");}
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}    
void algoritmo4(){ 

     limpaTela();
     insereDuasLinhas();
     duasTabulas();
   
     printf("O QUIZ TEM 10 QUEST�ES E CADA QUEST�O VALE 10 PONTOS.");
     insereDuasLinhas();
     duasTabulas();
 
     printf("*****N�O USE CAPSLOCK!!!!!*****");
     insereDuasLinhas();
     duasTabulas();
   
     printf("PRESSIONE ENTER PARA CONTINUAR");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 1: Oque � linguagem C?");
     quebraTabula();
    
	 printf("a)� uma linguagem de programa��o gen�tica utilizada \n\tpara cria��o de diversas programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)� uma linguagem de programa��o gen�rica utilizada \n\tpara cria��o de diversos programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)� uma linguagem de programa��o gen�tica utilizada \n\tpara fixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)� uma linguagem de programa��o gen�rica utilizada \n\tpara fixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
     
     printf("e)� uma linguagem de programa��o utilizada para \n\tfixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 2: Quais desses n�o s�o operadores relacionais?");
     quebraTabula();
   
     printf("a)!= ; == ;");
     insereDuasLinhas();
     tabula();
    
	 printf("b)< ; == ;");
     insereDuasLinhas();
     tabula();
   
     printf("c)&& ; || ;");
     insereDuasLinhas();
     tabula();
   
     printf("d)>= ; <= ;");
     insereDuasLinhas();
     tabula();
     
     printf("e)>= ; == ;");
     insereDuasLinhas();
     tabula();
   
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3: Onde podemos utilizar um algoritmo?");
     quebraTabula();
    
	 printf("a)Na �rea de computadores, constru��o de interferencias, tapwares, \n\thardDisk e planejamento de redes de pesca.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na �rea da computa��o, constru��o de interfaces, Software, \n\thardware e planejamento de redes.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Na �rea da computa��o, constru��o de intercambio, malwares, \n\tv�rus e planejamento de redes de balan�o.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Na �rea da comunica��o, aperfei�oamento de interfaces, \n\tsoftwares livres raio-x e planejamento de vias.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Nenhuma das anteriores.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 4: STDLIB � respons�vel por:");
     quebraTabula();
    
	 printf("a)Fun��o de entrada e sapida de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Conversao de string para n�mero.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Habilitar a fun��o system('x').");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Compilar o programa.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Apenas uma biblioteca obrigat�ria que n�o adiciona \n\tnenhuma fun��o no c�digo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 5: Leia o c�digo a seguir:");
     insereDuasLinhas();
     printf("\t\t1-#include<stdio.h>\n"
     "\t\t2-#include<stdlib.h>\n"
     "\t\t3-main(){\n"
     "\t\t4-int r\n"
     "\t\t5-r=1+1;}\n");
     insereUmaLinha();
     tabula();
     printf("QUAL LINHA EST� ERRADA?");
     quebraTabula();
    
	 printf("a)1");
     insereDuasLinhas();
     tabula();
    
	 printf("b)2");
     insereDuasLinhas();
     tabula();
    
	 printf("c)3");
     insereDuasLinhas();
     tabula();
    
	 printf("d)4");
     insereDuasLinhas();
     tabula();
     
     printf("e)5");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 6: STDIO � respons�vel por:");
     quebraTabula();
    
	 printf("a)Convers�o de string para n�mero.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Compilar o t�rmino do programa.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Fun��o de entrada e sa�da de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Habilita a fun��o system('x').");
     insereDuasLinhas();
     tabula();
     
     printf("e)Apenas uma biblioteca obrigat�ria que n�o adiciona \n\tnenhuma fun��o no c�digo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 7: Marque a op��o correta que define a \n\testrutura de repeti��o 'for'.");
     quebraTabula();
    
	 printf("a)Estrutura de repeti��o utilizada quando j� existe um t�rmino\n\t determinado ou um limte fixo.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Caso o resultado seja falso, o programa encerra essa estrutura\n\t e volta para o bruto do programa.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Estrutura de repeti��o que realiza um teste logico no \n\tfinal da estrutura, executando ao menos uma vez o conjunto"
     "de \n\tinstru��es antes de verificar a condi��o proposta.");  
     insereDuasLinhas();
     tabula();
    
	 printf("d)Estrutura de repeti��o que realiza um teste l�gico no in�cio da \n\testrutura e sempre que o teste l�gico resultar"
     "em VERDADEIRO, os \n\tcomandos associados a esta estrutura s�o executadas.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Uma estrutura que armazena infinitos valores em uma \n\tunica vari�vel ao mesmo tempo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
      printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 8: O que � algoritmo?");
     quebraTabula();
   
     printf("a)Uma estrutura de passos l�gicos que quando executar, realiza \n\tdeterminada tarefa.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Uma sequ�ncia de passos infinitos para executar uma \n\tdeterminada tarefa.");
     insereDuasLinhas();
     tabula();
   
     printf("c)Uma linguagem de programa��o para fazer Calculadoras.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Uma estrutura que independente da ordem, executa uma \n\tdeterminada fun��o.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 9:  Onde as vari�veis ficam armazenadas?");
     quebraTabula();
    
	 printf("a)No banco de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na mem�ria RAM do computador.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)No banco dados, no software e na mem�ria RAM.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)No programa/software.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Em uma struct.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 10: Quais vari�veis est�o declaradas corretamente de acordo\n\t com o tipo de dado.");
     quebraTabula();
    
	 printf("a)int cor; char cpf; float medida; double valor;");
     insereDuasLinhas();
     tabula();
    
	 printf("b)int idade; char nome; double medida; float valor;");
     insereDuasLinhas();
     tabula();
    
	 printf("c)char nome; int idade; double numero; float medida;");
     insereDuasLinhas();
     tabula();
    
	 printf("d)char valor; int idade; double numero; float valor;");
     insereDuasLinhas();
     tabula();
     
     printf("e)char idade; int nome; double cpf; float cor;");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PARAB�NS SUA PONTUA��O FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();

     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Algoritmo.txt","a");
           
           if(arq == NULL){
			printf("Erro, n�o foi poss�vel abrir o arquivo\n");}
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}    
void algoritmo5(){ 

     limpaTela();
     insereDuasLinhas();
     duasTabulas();
   
     printf("O QUIZ TEM 10 QUEST�ES E CADA QUEST�O VALE 10 PONTOS.");
     insereDuasLinhas();
     duasTabulas();
 
     printf("*****N�O USE CAPSLOCK!!!!!*****");
     insereDuasLinhas();
     duasTabulas();
   
     printf("PRESSIONE ENTER PARA CONTINUAR");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 1: Leia o c�digo a seguir:");
     insereDuasLinhas();
     printf("\t\t1-#include<stdio.h>\n"
     "\t\t2-#include<stdlib.h>\n"
     "\t\t3-main(){\n"
     "\t\t4-int r\n"
     "\t\t5-r=1+1;}\n");
     insereUmaLinha();
     tabula();
     printf("QUAL LINHA EST� ERRADA?");
     quebraTabula();
    
	 printf("a)1");
     insereDuasLinhas();
     tabula();
    
	 printf("b)2");
     insereDuasLinhas();
     tabula();
    
	 printf("c)3");
     insereDuasLinhas();
     tabula();
    
	 printf("d)4");
     insereDuasLinhas();
     tabula();
     
     printf("e)5");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
    
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 2: Quais desses n�o s�o operadores relacionais?");
     quebraTabula();
   
     printf("a)!= ; == ;");
     insereDuasLinhas();
     tabula();
    
	 printf("b)< ; == ;");
     insereDuasLinhas();
     tabula();
   
     printf("c)&& ; || ;");
     insereDuasLinhas();
     tabula();
   
     printf("d)>= ; <= ;");
     insereDuasLinhas();
     tabula();
     
     printf("e)>= ; == ;");
     insereDuasLinhas();
     tabula();
   
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3: Porque a linguagem C � port�vel?");
     quebraTabula();
    
	 printf("a)Por ser imposs�vel adaptar um tipo de software \n\tescrito para um tipo de computador para outro.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Por n�o ser poss�vel separar um tipo de software \n\tescrito para um tipo de computador para outro.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Por ser poss�vel concretizar um tipo de software \n\tescrito para um tipo de computador para outro.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Por ser poss�vel adaptar um tipo de software \n\tescrito para um tipo de computador para outro.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Por ser invi�vel adaptar um tipo de software \n\tescrito para um tipo de computador para outro.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 4: Oque s�o compiladores e interpretadores?");
     quebraTabula();
    
	 printf("a)Programas sofisticados que liberam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Programas sofisticados que ficam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Programas sofisticados que superam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Programas sofisticados que operam sobre o c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Programas sofisticados que operam fora do c�digo-fonte de um \n\tprograma.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 5: STDLIB � respons�vel por:");
     quebraTabula();
    
	 printf("a)Fun��o de entrada e saida de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Convers�o de string para n�mero.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Habilitar a fun��o system('x').");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Compilar o programa.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Apenas uma biblioteca obrigatoria que n�o adiciona \n\tnenhuma fun��o no c�digo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 6: Marque a op��o correta que define a \n\testrutura de repeti��o 'for'.");
     quebraTabula();
    
	 printf("a)Estrutura de repeti��o utilizada quando j� existe um termino\n\t determinado ou um limte fixo.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Caso o resultado seja falso, o programa encerra essa estrutura\n\t e volta para o bruto do programa.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Estrutura de repeti��o que realiza um teste l�gico no \n\tfinal da estrutura, executando ao menos uma vez o conjunto"
     "de \n\tinstru��es antes de verificar a condi��o proposta.");  
     insereDuasLinhas();
     tabula();
    
	 printf("d)Estrutura de repeti��o que realiza um teste l�gico no in�cio da \n\testrutura e sempre que o teste l�gico resultar"
     "em VERDADEIRO, os \n\tcomandos associados a esta estrutura s�o executadas.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Uma estrutura que armazena infinitos valores em uma \n\tunica varia�vel ao mesmo tempo.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 7: Onde podemos utilizar um algoritmo?");
     quebraTabula();
    
	 printf("a)Na �rea de computadores, constru��o de interferencias, tapwares, \n\thardDisk e planejamento de redes de pesca.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na �rea da computa��o, constru��o de interfaces, Software, \n\thardware e planejamento de redes.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Na �rea da comuta��o, constru��o de intercambio, malwares, \n\tv�rus e planejamento de redes de balan�o.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Na �rea da comunica��o, aperfei�oamento de interfaces, \n\tsoftwares livres raio-x e planejamento de vias.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Nenhuma das anteriores.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
      printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 8: O que � algoritmo?");
     quebraTabula();
   
     printf("a)Uma estrutura de passos l�gicos que quando executar, realiza \n\tdeterminada tarefa.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Uma sequ�ncia de passos infinitos para executar uma \n\tdeterminada tarefa.");
     insereDuasLinhas();
     tabula();
   
     printf("c)Uma linguagem de programa��o para fazer Calculadoras.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Uma estrutura que independente da ordem, executa uma \n\tdeterminada fun��o.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 9:  Onde as vari�veis ficam armazenadas?");
     quebraTabula();
    
	 printf("a)No banco de dados.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na mem�ria RAM do computador.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)No banco dados, no software e na mem�ria RAM");
     insereDuasLinhas();
     tabula();
    
	 printf("d)No programa/software.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Em uma struct.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 10: Oque � linguagem C?");
     quebraTabula();
    
	 printf("a)� uma linguagem de programa��o gen�tica utilizada \n\tpara cria��o de diversas programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)� uma linguagem de programa��o gen�rica utilizada \n\tpara cria��o de diversos programas");
     insereDuasLinhas();
     tabula();
    
	 printf("c)� uma linguagem de programa��o gen�tica utilizada \n\tpara fixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)� uma linguagem de programa��o gen�rica utilizada \n\tpara fixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
     
     printf("e)� uma linguagem de programa��o utilizada para \n\tfixa��o de diversos programas.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOC� ERROU =( .SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
                              
     insereDuasLinhas();
     insereDuasLinhas();
     tabula();
     
     printf("PARAB�NS SUA PONTUA��O FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();

     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Algoritmo.txt","a");
           
           if(arq == NULL){
			printf("Erro, n�o foi poss�vel abrir o arquivo\n");}
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}  
