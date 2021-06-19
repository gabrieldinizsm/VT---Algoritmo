char nome1[50];
char op;
int cont=0;

void anime1(){ 

	 limpaTela();
     insereDuasLinhas();
     duasTabulas();
   
     printf("O QUIZ TEM 10 QUESTõES E CADA QUESTãO VALE 10 PONTOS.");
     insereDuasLinhas();
     duasTabulas();
 
     printf("*****NãO USE CAPSLOCK!!!!!*****");
     insereDuasLinhas();
     duasTabulas();
   
     printf("PRESSIONE ENTER PARA CONTINUAR");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 1 (DRAGON BALL): Quem é o mestre de Gohan?");
     quebraTabula();
   
     printf("a)Goku.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Mestre Kame.");
     insereDuasLinhas();
     tabula();
   
     printf("c)Mestre Karin.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Piccolo.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Kami-Sama.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
    
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 2 (NARUTO): Qual o elemento natural do Chakra de Naruto?");
     quebraTabula();
    
	 printf("a)Vento.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Fogo.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Agua.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Lama.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Areia.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3 (YU YU HAKUSHO): Qual foi o cargo que o Yusuke ganhou do Senhor Koema?");
     quebraTabula();
    
	 printf("a)Escrivão Espiritual.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Secretário Espiritual.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Detetive Espiritual.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Policial Espiritual.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Médico Espiritual.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 4 (BLEACH): Oque significa o número dos Arrancars acima de Dez?");
     quebraTabula();
    
	 printf("a)A ordem de poder.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)A ordem de Nascimento.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Não significa nada.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)A idade.");
     insereDuasLinhas();
     tabula();
   
     printf("e)A inicial do nome.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 5 (ONE PUNCH MAN): Qual foi o unico inimigo que o 'Saitama' não conseguiu derrotar?");
     quebraTabula();
    
	 printf("a)Um Mosquito.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)GroundDragon.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)LordBoros.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Rei do Mar.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Um Alien.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 6 (SUPERNATURAL): Qual arcanjo assumiu o posto de Deus absorvendo todas as almas do purgatório?");
     quebraTabula();
    
	 printf("a)Lucifer.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Rafael.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Miguel.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Gabriel.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Metatron.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 7 (GAME OF THRONES): Quem era o dono da espada 'Garra Longa' antes de pertencer a Jon Snow?");
     quebraTabula();
    
	 printf("a)Robb Stark.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Jeor Mormont.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Khal Drogo.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Ned Stark.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Tony Stark.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 8 (THE FLASH 2014): Quem é o Flash Reverso?");
     quebraTabula();
    
	 printf("a)Eobard Thawne.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Harrison Wells.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Eddie Thawne.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Zoom.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Wally Whest.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 9 (VIKINGS): Em que Ano estreou a série Vikings?");
     quebraTabula();
    
	 printf("a)2013.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)2014.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)2015.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)2012.");
     insereDuasLinhas();
     tabula();
   
     printf("e)2016.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 10 (STRANGER THINGS): '11' possui um super poder, mas toda vez que ela usa-o acontece uma coisa com o seu corpo, o que acontece?");
     quebraTabula();
    
	 printf("a)Os lábios dela ficam roxo.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Seus olhos mudam de cor.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)O nariz dela sangra.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Sai sangue de sua orelha.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Seus ossos doem.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     insereDuasLinhas();
     tabula();
     
     printf("PARABÉNS SUA PONTUAÇÃO FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();

     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Anime.txt","a");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");}
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}
void anime2(){ 

     limpaTela();
     insereDuasLinhas();
     duasTabulas();
   
     printf("O QUIZ TEM 10 QUESTõES E CADA QUESTãO VALE 10 PONTOS.");
     insereDuasLinhas();
     duasTabulas();
 
     printf("*****NãO USE CAPSLOCK!!!!!*****");
     insereDuasLinhas();
     duasTabulas();
   
     printf("PRESSIONE ENTER PARA CONTINUAR");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 1 (DRAGON BALL): Quantas esferas do Dragão existem na Terra?");
     quebraTabula();
   
     printf("a)6.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)5.");
     insereDuasLinhas();
     tabula();
   
     printf("c)14.");
     insereDuasLinhas();
     tabula();
   
     printf("d)21.");
     insereDuasLinhas();
     tabula();
     
     printf("e)7.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='e'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='e'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
    
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 2 (NARUTO): Quem é o professor do Time 7?");
     quebraTabula();
    
	 printf("a)Jiraiya.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Kakashi.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Guy.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Asuma.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Sarutobi.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3 (YU YU HAKUSHO): Qual o nome dos três ladrões do Mundo espiritual?");
     quebraTabula();
    
	 printf("a)Kurama, Hiei, Gouke.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Toguro, Sakio, Gouke.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Hiei, Lando, Suzako.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Hiei, Toguro, Lando.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Toguro, Suzako, Lando.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 4 (BLEACH): Quem são os Privaron Espada?");
     quebraTabula();
    
	 printf("a)Os antigos espadas.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)A elite dos Arrancars.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Força secrete de Aizen");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Antigos Shinigamis");
     insereDuasLinhas();
     tabula();
   
     printf("e)Os Quincys");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 5 (ONE PUNCH MAN): Qual foi o soco mais forte que 'Saitama' deu no anime?");
     quebraTabula();
    
	 printf("a)Soco no Rei do Mar.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Soco na parede do laboratorio.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Soco ultizado no Boros.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Soco na luta contra o Genos.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Soco em uma mosca.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 6 (SUPERNATURAL): Sobre oque era a Primeira palavra de Deus encontrada?");
     quebraTabula();
    
	 printf("a)Cavaleiros do Apocalipse.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Demonios.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Leviatãs.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Anjos.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Purgatório.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 7 (GAME OF THRONES): Qual a frase que a Arya Stark disse que quando entregou a moeda para ir a Bravos?");
     quebraTabula();
    
	 printf("a)Os Outros chegarão em Breve.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Valar Morghulis.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Valar Dohaeris.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Dracarys.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Dragonis.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 8 (THE FLASH 2014): Em que ano Barry Allen Nasceu?");
     quebraTabula();
    
	 printf("a)1001.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)1990.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)1986.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)1991.");
     insereDuasLinhas();
     tabula();
   
     printf("e)1989.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='e'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='e'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 9 (VIKINGS): Quem é o criador da serie Vikings?");
     quebraTabula();
    
	 printf("a)Michael Hirst.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Michael Bay.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Michael Phelps.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Michael Kale.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Michael Jackson.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 10 (STRANGER THINGS):Logo no primeiro episódio da primeira temporada alguém desaparece. Quem?");
     quebraTabula();
    
	 printf("a)Dustin.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Will.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Lucas.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Michael.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Mike.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PARABÉNS SUA PONTUAÇÃO FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();

     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Anime.txt","a");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");}
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}
void anime3(){ 

     limpaTela();
     insereDuasLinhas();
     duasTabulas();
   
     printf("O QUIZ TEM 10 QUESTõES E CADA QUESTãO VALE 10 PONTOS.");
     insereDuasLinhas();
     duasTabulas();
 
     printf("*****NãO USE CAPSLOCK!!!!!*****");
     insereDuasLinhas();
     duasTabulas();
   
     printf("PRESSIONE ENTER PARA CONTINUAR");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 1 (DRAGON BALL): Quem é o Deus da Destruição do Sexto Universo?");
     quebraTabula();
   
     printf("a)Bills.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Whills.");
     insereDuasLinhas();
     tabula();
   
     printf("c)Champa.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Mr. Satan.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Boo.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
    if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
    
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 2 (NARUTO): Quem ensinou o Rasengan ao Naruto?");
     quebraTabula();
    
	 printf("a)Jiraiya.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Kakashi.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Iruka.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)4 Hokage.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Sarutobi.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3 (YU YU HAKUSHO): Qual o nome do primeiro time que os herois enfrentam no Torneio das Trevas?");
     quebraTabula();
    
	 printf("a)Time Mashotsukai.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Time Urautogi.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Time Lokuyukay.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Time Dr. Edgaki.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Time Yamasaki.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 4 (BLEACH): Qual era o nome original do Manga, antes de se chamar bleach?");
     quebraTabula();
    
	 printf("a)Bleach.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Reaper.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Snipe.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Swordsman.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Naruto.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 5 (ONE PUNCH MAN): Ao final do teste, qual foi a Classificação do 'Saitama' no Ranking para Heróis?");
     quebraTabula();
    
	 printf("a)A.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)C.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)B.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)E.");
     insereDuasLinhas();
     tabula();
   
     printf("e)S.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 6 (SUPERNATURAL): Quem é o primeiro e o segundo cavaleiro do Apocalipse?");
     quebraTabula();
    
	 printf("a)Fome e Morte.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Peste e Guerra.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Guerra e Fome.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Morte e Peste.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Guerra e Peste.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 7 (GAME OF THRONES): Quem deu o golpe que acabou com a vida do rei do Norte, Robb Stark, no casamento vermelho?");
     quebraTabula();
    
	 printf("a)Roose Bolton.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Jaime Lannister.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Walder Frey.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Peixe Negro.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Mindinho.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 8 (THE FLASH 2014): Zoom sequestrou o Wally, e oque ele pede pelo resgate?");
     quebraTabula();
    
	 printf("a)Resposta da equacação da aceleração.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)velocidade do flash.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)queria poder, e que o flash não interrompa seus planos.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)queria que Catilin Snow finalmente ficasse com ele.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Apenas a paz mundial.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 9 (VIKINGS): Qual foi o maior amor do personagem 'Ragnar'?");
     quebraTabula();
    
	 printf("a)Athelstan.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Lagertha.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Chinessia.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Aslug.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Sigurd.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 10 (STRANGER THINGS):Em que ano a série se passa?");
     quebraTabula();
    
	 printf("a)2004.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)1974.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)1998.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)1983.");
     insereDuasLinhas();
     tabula();
   
     printf("e)1938.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PARABÉNS SUA PONTUAÇÃO FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();

     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Anime.txt","a");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");}
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}
void anime4(){ 

     limpaTela();
     insereDuasLinhas();
     duasTabulas();
   
     printf("O QUIZ TEM 10 QUESTõES E CADA QUESTãO VALE 10 PONTOS.");
     insereDuasLinhas();
     duasTabulas();
 
     printf("*****NãO USE CAPSLOCK!!!!!*****");
     insereDuasLinhas();
     duasTabulas();
   
     printf("PRESSIONE ENTER PARA CONTINUAR");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 1 (DRAGON BALL): Contra quem 'Goku' lutou quando se transformou pela primeiro vez em 'Super Saiyajin'?");
     quebraTabula();
   
     printf("a)Cell.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Vegeta.");
     insereDuasLinhas();
     tabula();
   
     printf("c)Piccolo.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Freeza.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Raditz.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
    
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 2 (NARUTO): Qual o nome da Aldeia em que o Orochimaru se escondeu?");
     quebraTabula();
    
	 printf("a)Aldeia da Folha.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Aldeia do Fogo.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Aldeia da Chuva.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Aldeia do Som.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Aldeia do Areia.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3 (YU YU HAKUSHO): Qual o nome da doutrina que o 'Yusuke' recebeu da mestra Genkai?");
     quebraTabula();
    
	 printf("a)Hadou.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Leikohadouken.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Genjustsu.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Reatsu.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Shoriyhadou.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 4 (BLEACH): Quem foi o primeiro Capitão que o 'Ichigo' encontrou na Soul Society?");
     quebraTabula();
    
	 printf("a)Zaraki.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Kuchiki.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Ichimaru.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Aizen.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Unohana.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 5 (ONE PUNCH MAN): Porque durante sua luta com 'Asura Kabuto', 'Saitama' parecia desesperado?");
     quebraTabula();
    
	 printf("a)Seu inimigo era mais forte.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Era dia de promoção no Mercado.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Genos se machucou.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Esqueceu o fogão ligado.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Genos assumiu sua sexualidade no meio da luta.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 6 (SUPERNATURAL): No seriado, quem é realmente Deus?");
     quebraTabula();
    
	 printf("a)Kevin.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Crowley.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Chuck.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Metatron.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Castiel.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 7 (GAME OF THRONES): Como Bran Stark perde o movimento das pernas?");
     quebraTabula();
    
	 printf("a)Uma carroça passa por cima de suas pernas.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Bran quebrou a coluna depois de escorregar de uma torre.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Um lobo o atacou e ele caiu de um monte.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Foi empurrado da torre por James Lannister.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Brincando com o lobo e se machucou.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 8 (THE FLASH 2014): Depois que Barry Allen perde sua velocidade, oque Whells diz para ele fazer para ganhar\n\tganhar sua velocidade de volta?");
     quebraTabula();
    
	 printf("a)Ir a caverna do Zoom e o prender.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Voltar no tempo com a velocity9 e nunca da sua velocidade para o Zoom.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Pede ajuda a Whells.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Recriar a explosão do acelerador de particulas.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Enfrentar o Zoom, mesmo sem sua velocidade.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 9 (VIKINGS): Como a filha de Helga morre?");
     quebraTabula();
    
	 printf("a)Hipotermia.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Tuberculose.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Assassinada.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Infarto.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Hipertermia.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 10 (STRANGER THINGS):Complete 'Amigos...'?");
     quebraTabula();
    
	 printf("a)...São coisas que criamos.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)...São maus.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)...Te amam.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)...São uns idiotas traidores.");
     insereDuasLinhas();
     tabula();
   
     printf("e)...Não mentem.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='e'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='e'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PARABÉNS SUA PONTUAÇÃO FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();

     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Anime.txt","a");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");}
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}
void anime5(){

     limpaTela();
     insereDuasLinhas();
     duasTabulas();
   
     printf("O QUIZ TEM 10 QUESTõES E CADA QUESTãO VALE 10 PONTOS.");
     insereDuasLinhas();
     duasTabulas();
 
     printf("*****NãO USE CAPSLOCK!!!!!*****");
     insereDuasLinhas();
     duasTabulas();
   
     printf("PRESSIONE ENTER PARA CONTINUAR");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 1 (DRAGON BALL): Qual o nome do estilo de luta do Mestre Kame?");
     quebraTabula();
   
     printf("a)Tigre.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Leão.");
     insereDuasLinhas();
     tabula();
   
     printf("c)Tartaruga.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Touro.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Dragão.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
      if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
    
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 2 (NARUTO): Quantos Elementos HIRUZEN SARUTOBI consegue controlar?");
     quebraTabula();
    
	 printf("a)1.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)3.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)4.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)2.");
     insereDuasLinhas();
     tabula();
   
     printf("e)todos.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='e'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='e'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     
	 printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
   
     printf("PERGUNTA 3 (YU YU HAKUSHO): Qual o nome  do personagem que recebeu as chamas?");
     quebraTabula();
    
	 printf("a)bui.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)touy.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)rinko.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)zeru.");
     insereDuasLinhas();
     tabula();
   
     printf("e)hiey.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='d'){cont=cont+10;}
     else if(op!='d'){cont=cont+0;}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 4 (BLEACH): Qual o nome do Holow que matou a mãe do ichigo?");
     quebraTabula();
    
	 printf("a)Dondochakka.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Bulbous.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Numb Chandelier.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Grand Fisher.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Snopp Dog.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 5 (ONE PUNCH MAN): Quem é o discipulo de SAITAMA?");
     quebraTabula();
    
	 printf("a)Licenless Rider.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Speed Sound Sonic.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Rainzor.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Genos.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Boros.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='d'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='d'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 6 (SUPERNATURAL): Onde Benny e Dean se conheceram?");
     quebraTabula();
    
	 printf("a)New York.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Purgatorio.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Céu.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Inferno.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Morte.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 7 (GAME OF THRONES): Qual o nome do lobo da Sansa Stark?");
     quebraTabula();
    
	 printf("a)Lady.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Fantasma.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Cão peludo.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)inverno.");
     insereDuasLinhas();
     tabula();
   
     printf("e)furia.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 8 (THE FLASH 2014): Por que o flash reverso não matou Eddie Thawne?");
     quebraTabula();
    
	 printf("a)Porque ele é seu ancestral.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)porque Eddie deu os poderes ao Flash reverso.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Porque no futuro eles seriam melhores amigos.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Eddie é seu filho.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Porque são amigos.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='a'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='a'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 9 (VIKINGS): Quais os nomes dos filhos de Ragnar com Lagertha?");
     quebraTabula();
    
	 printf("a)Gyda e Ubbe.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Siggy e Bjorn.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Bjorn e Gyda.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Bjorn e Athelstan.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Aslaug e Travis.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='c'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='c'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("SE ESTIVER PRONTO, APERTE 'ENTER' PARA A PROXIMA PERGUNTA");
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PERGUNTA 10 (STRANGER THINGS): Qual o nome dos quatro garotos principais da série?");
     quebraTabula();
    
	 printf("a)Justin, Adam, Fillipi e Robert.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Dustin, Will, Lucas e Michael.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Michael, Alex, Jonathan e Julious.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Jonathan, Steven, Robbin e Adam.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Nenhuma das alternativas acima.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	  if(op=='b'){cont=cont+10;
     quebraTabula();
     printf("VOCÊ ACERTOU =) SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     else if(op!='b'){cont=cont+0;
     quebraTabula();
     printf("VOCê ERROU =( .SUA PONTUAÇÃO ATÉ 0 MOMENTO É: %i",cont);
     getchar();}
     getchar();
     limpaTela();
     quebraTabula();
     
     printf("PARABÉNS SUA PONTUAÇÃO FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();

     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Anime.txt","a");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");}
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}
