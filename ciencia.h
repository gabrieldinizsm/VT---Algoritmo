void ciencia1(){
     
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
   
     printf("PERGUNTA 1: Tudo que o olho humano � capaz de enxergar � chamado de?");
     quebraTabula();
   
     printf("a)Arco-Iris Visivel.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Gama Visivel.");
     insereDuasLinhas();
     tabula();
   
     printf("c)Espectro Visivel.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Radia��o Visivel.");
     insereDuasLinhas();
     tabula();
     
     printf("e)Espa�o Visivel Tridimensinal.");
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
   
     printf("PERGUNTA 2: Qual a estrela mais proxima da terra?");
     quebraTabula();
    
	 printf("a)Sol.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Alpha Centauri.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Lua.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Aneis de Saturno.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Buraco Negro 'Nephew Solaris'.");
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
   
     printf("PERGUNTA 3: Qual a velocidade da luz?");
     quebraTabula();
    
	 printf("a)3.000.000 km/h.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)300.000 ms/s.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)300.000.000 km/h.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)300.000 km/s.");
     insereDuasLinhas();
     tabula();
   
     printf("e)3.000.000.000 km/s.");
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
     
     printf("PERGUNTA 4: Qual o Nome cientifico dado a explos�o nos momentos finais da evolu��o de uma Estrela?");
     quebraTabula();
    
	 printf("a)Explos�o Estelar de Massa finita.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Libera��o de Mat�ria Organica no Espa�o-Tempo.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Supernova.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Singularidade.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Mudan�a Gravitacional no Espa�o-Tempo proxima.");
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
     
     printf("PERGUNTA 5: Qual a galaxia mais proxima da nossa?");
     quebraTabula();
    
	 printf("a)a Gal�xia de Touro.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)a Galaxia de Le�o.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)a Galaxia de Centauri.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)a Galaxia de Andr�meda.");
     insereDuasLinhas();
     tabula();
   
     printf("e)a Galaxia M66.");
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
     
     printf("PERGUNTA 6:Daqui a aproximadamente 5 bilh�es de anos, o sol entrar� em um estado de evolu��o \n\tque ir� crescer ao ponto de engolir a terra.\n\t"
     "Qual o nome desse Estado de evolu��o?");
     quebraTabula();
    
	 printf("a)Supernova.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Erup��o Molecular.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Gigante Vermelha.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Singularidade.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Supernova Tipo II.");
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
     
     printf("PERGUNTA 7: Oque � Luz?");
     quebraTabula();
    
	 printf("a)Uma Particula visivel.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Uma particula-Onda visivel.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Uma Particula.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Uma Onda.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Uma Onda visivel.");
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
     
     printf("PERGUNTA 8: Qual o elemento mais abundante no Universo?");
     quebraTabula();
    
	 printf("a)Oxigenio(O).");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Energia Cin�tica.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Vacuo(Va).");
     insereDuasLinhas();
     tabula();
    
	 printf("d)L�tio(Li).");
     insereDuasLinhas();
     tabula();
   
     printf("e)Hidrog�nio(H).");
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
     
     printf("PERGUNTA 9: Caso o Sol vire um buraco negro... Oque aconteceria?");
     quebraTabula();
    
	 printf("a)A terra perderia o centro de �rbita e iria vagar no espa�o \n\tacabando com a vida na terra.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)O sol teria a mesma massa, mas uma gravidade muito mais forte e a \n\tterra iria continuar tendo vida.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)O sol teria sua massa muito reduzida, e a gravidade muito mais forte \n\te a terra iria congelar.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)O sol teria sua massa reduzida, a gravidade aumentaria \n\te a terra seria absorvida.");
     insereDuasLinhas();
     tabula();
   
     printf("e)A Terra seria puxada para mais perto do sol pela sua gravidade ser muito maior \n\tgra�as a singularidade do buraco negro.");
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
     
     printf("PERGUNTA 10: O corpo celeste usado como base para medida de gravidade � o(a)?");
     quebraTabula();
    
	 printf("a)Sol.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Buraco Negro Nephew.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)A pr�pria Terra.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)A Centauri.");
     insereDuasLinhas();
     tabula();
   
     printf("e)A Lua.");
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
     
     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Ciencias.txt","a");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
        }
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     
     printf("PARAB�NS SUA PONTUA��O FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();
     
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}
void ciencia2() {
	
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
   
     printf("PERGUNTA 1: Qual � a maior estrela conhecida pelo homem?");
     quebraTabula();
   
     printf("a)UY Scuti.");
     insereDuasLinhas();
     tabula();
    
     printf("b)Sol.");
     insereDuasLinhas();
     tabula();
   
     printf("c)VY Canis Majoris.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Sirius.");
     insereDuasLinhas();
     tabula();
     
     printf("e)RMC 136a1.");
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
   
     printf("PERGUNTA 2: Qual o elemento mais abundante na Terra?");
     quebraTabula();
    
	 printf("a)Nitrog�nio.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Carbono.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)L�tio.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Oxig�nio.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Hidrog�nio.");
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
   
     printf("PERGUNTA 3: Onde a luz se propaga mais rapido?");
     quebraTabula();
    
	 printf("a)V�cuo.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)�gua.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Singularidade.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)No Ar.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Em qualquer espa�o escuro.");
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
     
     printf("PERGUNTA 4: Oque � o eclipse Solar");
     quebraTabula();
    
	 printf("a)� quando o Sol se p�e 1 hora mais cedo.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)� quando o Sol demora 1 hora a mais para se por.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)� quando a terra bloqueia a luz do sol em dire��o a Lua.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)� quando a Lua fica oposta em rela��o sol.");
     insereDuasLinhas();
     tabula();
   
     printf("e)� quando a Lua bloqueia a luz do sol que vem em dire��o a Terra.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='e'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='e'){cont=cont+0;
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
     
     printf("PERGUNTA 5: Um byte � formado por quantos bits?");
     quebraTabula();
    
	 printf("a)16.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)8.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)2.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)0 e 1.");
     insereDuasLinhas();
     tabula();
   
     printf("e)1024.");
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
     
     printf("PERGUNTA 6: Qual o lugar mais profundo da Terra?");
     quebraTabula();
    
	 printf("a)Po�o em Island Oak.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Fossa das Marianas.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Lago Baiakal.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Baia de Guanabara.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Oceano Pacifico.");
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
     
     printf("PERGUNTA 7: Qual a montanha mais alta da Terra?");
     quebraTabula();
    
	 printf("a)Monte Everest.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Monte Elbrus.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Monte Denali.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Mauna Kea.");
     insereDuasLinhas();
     tabula();
   
     printf("e)K2.");
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
     
     printf("PERGUNTA 8: Qual a maior montanha do Sistema Solar?");
     quebraTabula();
    
	 printf("a)Montes de Maxwell - V�nus.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)La Montana de los Angels - Jupiter.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Ascraeus Montain - Marte.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Monte Olimpo - Marte.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Monte Pavones - Marte.");
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
     
     printf("PERGUNTA 9: Quais foram as 4 luas de Jupiter descobertas por Galileu?");
     quebraTabula();
    
	 printf("a)Pollaris, Sollaris, Dracarys, Titan.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Titan, IO, Lua, Sollaris.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Fobos, Arquimedes, Georgia, Andromeda.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)IO, Gan�medes, Europa, Calisto.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Titan, Ganimedes, Europa, Andromeda.");
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
     
     printf("PERGUNTA 10: Quanto tempo a luz do Sol demora para chegar a Terra?");
     quebraTabula();
    
	 printf("a)Aproximadamente 30 segundos.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Aproximadamente 1 minuto.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Aproximadamente 3 minutos.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Aproximadamente 5 minutos.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Aproximadamente 8 minutos.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='e'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='e'){cont=cont+0;
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
           
           arq=fopen("Ciencias.txt","a");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
        }
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);

     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}
void ciencia3(){
	
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
   
     printf("PERGUNTA 1: Qual a temperatura do zero absoluto?");
     quebraTabula();
   
     printf("a)-1000�C.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)-879�C.");
     insereDuasLinhas();
     tabula();
   
     printf("c)-600�C.");
     insereDuasLinhas();
     tabula();
   
     printf("d)-456�C.");
     insereDuasLinhas();
     tabula();
     
     printf("e)-273�C.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='e'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='e'){cont=cont+0;
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
   
     printf("PERGUNTA 2: Qual o nome da miss�o que levou o homem a pisar na\n\t lua pela primeira vez?");
     quebraTabula();
    
	 printf("a)Apolo X.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Apolo XI.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Apolo XII.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Apolo XIII.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Apolo IX.");
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
   
     printf("PERGUNTA 3: Qual a primeira lei de Newton?");
     quebraTabula();
    
	 printf("a)Gravidade.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Principio Fundamental de Din�mica.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Principio da A��o e Rea��o.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)In�rcia.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Nenhuma das anteriores.");
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
     
     printf("PERGUNTA 4: Oque h� no centro de um buraco negro?");
     quebraTabula();
    
	 printf("a)Hidrog�nio fundido.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Singularidade.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Vida.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Luz.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Cobalto.");
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
     
     printf("PERGUNTA 5: Aonde s�o formados os furac�es?");
     quebraTabula();
    
	 printf("a)Locais com Pouca Vegeta��o.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Na maioria das vezes nos oceanos.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Sempre nos oceanos.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Na Costa.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Nenhuma das anteriores.");
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
     
     printf("PERGUNTA 6: Um gigabyte � formado por quantos Megabyts?");
     quebraTabula();
    
	 printf("a)8.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)0 e 1.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)1024.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)1004.");
     insereDuasLinhas();
     tabula();
   
     printf("e)128.");
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
     
     printf("PERGUNTA 7: Qual a fun��o da camada de Oz�nio?");
     quebraTabula();
    
	 printf("a)Impedir o oxigenio de sair da Terra.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Impedir a entrada de vacuo.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Impedir a gravidade de estrelas.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Impedir que parte da radia��o solar chegue na terra.");
     insereDuasLinhas();
     tabula();
   
     printf("e)nenhuma das anteriores.");
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
     
     printf("PERGUNTA 8: Qual o maior planeta do sistema solar?");
     quebraTabula();
    
	 printf("a)Saturno.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Netuno.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Marte.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Sol.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Jupiter.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='e'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='e'){cont=cont+0;
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
     
     printf("PERGUNTA 9: Qual planeta � conhecido como 'Planeta Vermelho'?");
     quebraTabula();
    
	 printf("a)Sol.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Gigante Vermelho.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Marte.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Jupiter.");
     insereDuasLinhas();
     tabula();
   
     printf("e)K99.");
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
     
     printf("PERGUNTA 10: Merc�rio, V�nus, Marte, J�piter e Saturno.\n\tPorque eles tem esses nomes?");
     quebraTabula();
    
	 printf("a)Homenagem aos seus Descobridores.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Homenagem aos deuses Gregos.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Homenagem aos deuses Romanos.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Homenagem aos deuses Greco-Romanos.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Homenagem aos Deuses Romanos-Grecos.");
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
     
     printf("PARAB�NS SUA PONTUA��O FOI DE: %i Pontos", cont);
     getchar();
     limpaTela();
     quebraTabula();
     
     fflush(stdin);
     printf("\tInforme seu nome: ");
     gets(nome1);
     fflush(stdin);
     
     FILE *arq;
           
           arq=fopen("Ciencias.txt","a");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
        }
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}
void ciencia4(){
	
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
   
     printf("PERGUNTA 1: Qual a famosa equa��o determina a rela��o da transforma��o da massa\n\tde um objeto em energia e vice-versa?");
     quebraTabula();
   
     printf("a)F=DELTA T/DELTA M.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)V=MxA.");
     insereDuasLinhas();
     tabula();
   
     printf("c)A=MxV.");
     insereDuasLinhas();
     tabula();
   
     printf("d)F=MxA.");
     insereDuasLinhas();
     tabula();
     
     printf("e)E=MC2.");
     insereDuasLinhas();
     tabula();
    
	 printf("Alternativa: ");
     scanf("%c",&op);
   
     if(op=='e'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='e'){cont=cont+0;
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
   
     printf("PERGUNTA 2: Qual a galaxia mais proxima da nossa?");
     quebraTabula();
    
	 printf("a)a Gal�xia de Touro.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)a Galaxia de Le�o.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)a Galaxia de Centauri.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)a Galaxia de Andr�meda.");
     insereDuasLinhas();
     tabula();
   
     printf("e)a Galaxia M66.");
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
   
     printf("PERGUNTA 3: Qual a maior montanha do Sistema Solar?");
     quebraTabula();
    
	 printf("a)Montes de Maxwell - V�nus.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)La Montana de los Angels - Jupiter.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Ascraeus Montain - Marte.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Monte Olimpo - Marte.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Monte Pavones - Marte.");
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
     
     printf("PERGUNTA 4: Caso o Sol vire um buraco negro... Oque aconteceria?");
     quebraTabula();
    
	 printf("a)A terra perderia o centro de �rbita e iria vagar no espa�o \n\tacabando com a vida na terra.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)O sol teria a mesma massa, mas uma gravidade muito mais forte e a \n\tterra iria continuar tendo vida.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)O sol teria sua massa muito reduzida, e a gravidade muito mais forte \n\te a terra iria congelar.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)O sol teria sua massa reduzida, a gravidade aumentaria \n\te a terra seria absorvida.");
     insereDuasLinhas();
     tabula();
   
     printf("e)A Terra seria puxada para mais perto do sol pela sua gravidade ser muito maior \n\tgra�as a singularidade do buraco negro.");
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
     
     printf("PERGUNTA 5: Qual o elemento mais abundante na Terra?");
     quebraTabula();
    
	 printf("a)Nitrog�nio.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Carbono.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)L�tio.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Oxig�nio.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Hidrog�nio.");
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
     
     printf("PERGUNTA 6: O corpo celeste usado como base para medida de gravidade � o(a)?");
     quebraTabula();
    
	 printf("a)Sol.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Buraco Negro Nephew.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)A pr�pria Terra.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)A Centauri.");
     insereDuasLinhas();
     tabula();
   
     printf("e)A lua.");
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
     
     printf("PERGUNTA 7: Qual � a maior estrela conhecida pelo homem?");
     quebraTabula();
   
     printf("a)UY Scuti.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Sol.");
     insereDuasLinhas();
     tabula();
   
     printf("c)VY Canis Majoris.");
     insereDuasLinhas();
     tabula();
   
     printf("d)Sirius.");
     insereDuasLinhas();
     tabula();
     
     printf("e)RMC 136a1.");
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
     
     printf("PERGUNTA 8: Qual a primeira lei de Newton?");
     quebraTabula();
    
	 printf("a)Gravidade.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Principio Fundamental de Din�mica.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Principio da A��o e Rea��o.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)In�rcia.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Nenhuma das anteriores.");
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
     
     printf("PERGUNTA 9: Qual planeta � conhecido como 'Planeta Vermelho'?");
     quebraTabula();
    
	 printf("a)Sol.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Gigante Vermelho.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Marte.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Jupiter.");
     insereDuasLinhas();
     tabula();
   
     printf("e)K99.");
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
     
     printf("PERGUNTA 10: Qual o lugar mais profundo da Terra?");
     quebraTabula();
    
	 printf("a)po�o em Island Oak.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Fossa das Marianas.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Lago Baiakal.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Baia de Guanabara.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Oceano Pacifico.");
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
           
           arq=fopen("Ciencias.txt","a");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
        }
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}
void ciencia5(){
	
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
   
     printf("PERGUNTA 1: Qual o nome da miss�o que levou o homem a pisar na\n\t lua pela primeira vez?");
     quebraTabula();
    
	 printf("a)Apolo X.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Apolo XI.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Apolo XII.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Apolo XIII.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Apolo IX.");
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
   
     printf("PERGUNTA 2:Daqui a aproximadamente 5 bilh�es de anos, o sol entrar� em um estado de evolu��o \n\tque ir� crescer ao ponto de engolir a terra.\n\t"
     "Qual o nome desse Estado de evolu��o?");
     quebraTabula();
    
	 printf("a)Supernova.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Erup��o Molecular.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Gigante Vermelha.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Singularidade.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Supernova Tipo II.");
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
   
     printf("PERGUNTA 3: Quais foram as 4 luas de Jupiter descobertas por Galileu?");
     quebraTabula();
    
	 printf("a)Pollaris, Sollaris, Dracarys, Titan.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Titan, IO, Lua, Sollaris.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Fobos, Arquimedes, Georgia, Andromeda.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)IO, Gan�medes, Europa, Calisto.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Titan, Ganimedes, Europa, Andromeda.");
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
     
     printf("PERGUNTA 4:Qual o elemento mais abundante no Universo?");
     quebraTabula();
    
	 printf("a)Oxigenio(O).");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Energia Cin�tica.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Vacuo(Va).");
     insereDuasLinhas();
     tabula();
    
	 printf("d)L�tio(Li).");
     insereDuasLinhas();
     tabula();
   
     printf("e)Hidrog�nio(H).");
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
     
    printf("PERGUNTA 5: Onde a luz se propaga mais rapido?");
     quebraTabula();
    
	 printf("a)V�cuo.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)�gua.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Singularidade.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)No Ar.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Em qualquer espa�o escuro.");
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
     
     printf("PERGUNTA 6: Qual o Nome cientifico dado a explos�o nos momentos finais da evolu��o de uma Estrela?");
     quebraTabula();
    
	 printf("a)Explos�o Estelar de Massa finita.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Libera��o de Mat�ria Organica no Espa�o-Tempo.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Supernova.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Singularidade.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Mudan�a Gravitacional no Espa�o-Tempo proxima.");
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
     
     printf("PERGUNTA 7: Oque � o eclipse Solar?");
     quebraTabula();
    
	 printf("a)� quando o Sol se p�e 1 hora mais cedo.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)� quando o Sol demora 1 hora a mais para se por.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)� quando a terra bloqueia a luz do sol em dire��o a Lua.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)� quando a Lua fica oposta em rela��o sol.");
     insereDuasLinhas();
     tabula();
   
     printf("e)� quando a Lua bloqueia a luz do sol que vem em dire��o a Terra.");
     insereDuasLinhas();
     tabula();
   
     printf("Alternativa: ");
     scanf("%c",&op);
     
	 if(op=='e'){cont=cont+10;
     quebraTabula();
     printf("VOC� ACERTOU =) SUA PONTUA��O AT� 0 MOMENTO �: %i",cont);
     getchar();}
     else if(op!='e'){cont=cont+0;
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
     
     printf("PERGUNTA 8: Qual a fun��o da camada de Oz�nio?");
     quebraTabula();
    
	 printf("a)Impedir o oxigenio de sair da Terra.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Impedir a entrada de vacuo.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Impedir a gravidade de estrelas.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Impedir que parte da radia��o solar chegue na terra.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Nenhuma das anteriores.");
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
     
     printf("PERGUNTA 9: Oque h� no centro de um buraco negro?");
     quebraTabula();
    
	 printf("a)Hidrog�nio fundido.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Singularidade.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Vida.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Luz.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Cobalto.");
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
     
     printf("PERGUNTA 10: Qual o lugar mais profundo da Terra?");
     quebraTabula();
    
	 printf("a)po�o em Island Oak.");
     insereDuasLinhas();
     tabula();
    
	 printf("b)Fossa das Marianas.");
     insereDuasLinhas();
     tabula();
    
	 printf("c)Lago Baiakal.");
     insereDuasLinhas();
     tabula();
    
	 printf("d)Baia de Guanabara.");
     insereDuasLinhas();
     tabula();
   
     printf("e)Oceano Pacifico.");
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
           
           arq=fopen("Ciencias.txt","a");
           
           if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
        }
	 else{
     fprintf(arq,"[%s]",nome1); 
     fprintf(arq,"[%i] \n\n",cont);}     
     fclose(arq);
     
     printf("Digite algo para voltar ao menu:");
     
     system("pause>null");
     limpaTela();
     return menu();
}
