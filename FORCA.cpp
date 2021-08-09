#include <conio2.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h> 
#include<time.h>

#define C_I 3
#define L_I	3
#define C_F 140
#define	L_F 30

struct TpDic
{
	char Port[40], Ing[40], Sig[100];
	int pont, ati, cod;
};

struct TpJogador
{
	char login[30], nome[100];
	int senha, pontos, ati;
};

struct TpJogo
{
	int cod;
	char login[30];
};

void QuadroMenu()
{
	int i;
	char Data[9];
	textcolor(15);
	gotoxy(C_I,L_I);
	printf("%c",201);
	gotoxy(C_F,L_I);
	printf("%c",187);
	gotoxy(C_I,L_F);
	printf("%c",200);
	gotoxy(C_F,L_F);
	printf("%c",188);
	for(i=C_I+1 ;i<C_F; i++)
	{
		gotoxy(i,L_I);
		printf("%c", 205);
		gotoxy(i,L_F);
		printf("%c", 205);
	}
	for(i=L_I+1 ;i<L_F; i++)
	{
		gotoxy(C_I,i);
		printf("%c", 186);
		gotoxy(C_F,i);
		printf("%c", 186);
	}
	textcolor(15);
	gotoxy(C_F-30,L_F+1);
	printf("Gabriel Marioto");
	gotoxy(C_F-12,L_F+1);
	printf("Joao Stech");
	textcolor(15);
	gotoxy(C_I+1,L_F+1);
	printf("FORCA ATP II");
	
	_strdate(Data);
	gotoxy(C_I+15,L_F+1);
	printf("%s", Data);
	
}

int Random(FILE *Palavras)
{
	TpDic R;
	int v, a;
	Palavras = fopen("Dicionario.dat","rb");
	fseek(Palavras,0,2);
	a= ftell(Palavras) / sizeof(TpDic);
	v = rand() % a;
	fclose(Palavras);
	return v;	
}
void QuadroPJogo()
{
	int i;
	textcolor(10);
	gotoxy(C_I,L_I);
	printf("%c",201);
	gotoxy(C_F,L_I);
	printf("%c",187);
	gotoxy(C_I,L_F);
	printf("%c",200);
	gotoxy(C_F,L_F);
	printf("%c",188);
	for(i=C_I+1 ;i<C_F; i++)
	{
		gotoxy(i,L_I);
		printf("%c", 205);
		gotoxy(i,L_F);
		printf("%c", 205);
	}
	for(i=L_I+1 ;i<L_F; i++)
	{
		gotoxy(C_I,i);
		printf("%c", 186);
		gotoxy(C_F,i);
		printf("%c", 186);
	}
}

char QuadroInicio()
{
	clrscr();
	char op;
	QuadroMenu();
	textcolor(10);
	gotoxy(C_F/2-10,L_I+3);
	printf("*** ATP II - FORCA ***\n\n\n");
	textcolor(10);
	gotoxy(C_F/2-10,L_F/2+2);
	printf("[A] - Menu Dicionario");
	gotoxy(C_F/2-10,L_F/2+4);
	printf("[B] - Menu Usuario");
	gotoxy(C_F/2-10,L_F/2+6);
	printf("[C] - Start \t");
	op=toupper(getch());
	return op;	
}
void QuadroJogo(int a,int b)
{
	char Data[9], Hora[9];
	clrscr();
	QuadroPJogo();
	textcolor(12);
	//VIDAS
	gotoxy(a,b-1);
	gotoxy(a+1,b-1);
	printf("LIFE:");
	gotoxy(a+7,b-1);
	printf("%c",3);
	gotoxy(a+8,b-1);
	printf("%c",3);
	gotoxy(a+9,b-1);
	printf("%c",3);
	gotoxy(a+10,b-1);
	printf("%c",3);
	gotoxy(a+11,b-1);
	printf("%c",3);
	gotoxy(a+12,b-1);
	printf("%c",3);
	
	//AUTORES
	textcolor(15);
	gotoxy(C_F-30,L_F+1);
	printf("Gabriel Marioto");
	gotoxy(C_F-12,L_F+1);
	printf("Joao Stech");
	
	//DATA
	textcolor(13);
	gotoxy(C_F-15,L_I-1);
	printf("HORAS");
	_strtime(Hora);
	gotoxy(C_F-8,L_I-1);
	printf("%s", Hora);
	
	//FORCA
	
	textcolor(10);
	gotoxy(a+15,b+18);
	printf("%c",176);
	gotoxy(a+16,b+18);
	printf("%c",176);
	gotoxy(a+17,b+18);
	printf("%c",176);
	gotoxy(a+18,b+18);
	printf("%c",176);
	gotoxy(a+19,b+18);
	printf("%c",176);
	
	gotoxy(a+17,b+17);	
	printf("%c",179);
	gotoxy(a+17,b+16);	
	printf("%c",179);
	gotoxy(a+17,b+15);	
	printf("%c",179);
	gotoxy(a+17,b+14);	
	printf("%c",179);
	gotoxy(a+17,b+13);	
	printf("%c",179);
	gotoxy(a+17,b+12);	
	printf("%c",179);
	gotoxy(a+17,b+11);	
	printf("%c",179);
	gotoxy(a+17,b+10);	
	printf("%c",179);
	gotoxy(a+17,b+9);	
	printf("%c",179);
	gotoxy(a+17,b+8);	
	printf("%c",179);
	gotoxy(a+17,b+7);	
	
	printf("%c",195);
	gotoxy(a+18,b+7);	
	printf("%c",196);
	gotoxy(a+19,b+7);	
	printf("%c",196);
	gotoxy(a+20,b+7);	
	printf("%c",196);
	gotoxy(a+21,b+7);	
	printf("%c",196);
	gotoxy(a+22,b+7);	
	printf("%c",196);
	gotoxy(a+23,b+7);	
	printf("%c",196);
	gotoxy(a+24,b+7);	
	printf("%c",196);
	gotoxy(a+25,b+7);	
	printf("%c",196);
	gotoxy(a+26,b+7);	
	printf("%c",196);
	gotoxy(a+27,b+7);	
	printf("%c",196);

	gotoxy(a+28,b+7);	
	printf("%c",191);
	gotoxy(a+28,b+8);	
	printf("%c",179);	
	//FIM DA FORCA
	
	//BONECO	
	gotoxy(a+28,b+10);	// ROSTO
	printf("%c",1); 
	gotoxy(a+28,b+11);	// TRONCO
	printf("%c",179);
	gotoxy(a+28,b+12);	// CINTURA
	printf("%c",179);
	gotoxy(a+27,b+11); // BRAÇO DIREITO	
	printf("%c",192);
	gotoxy(a+29,b+11);	// BRAÇO ESQUERDO
	printf("%c",217);
	gotoxy(a+29,b+13);	// PERNA DIREITA
	printf("%c",92);
	gotoxy(a+27,b+13);	// PERNA ESQUERDA
	printf("%c",47);
	
	
	
	// DICA
	gotoxy(a+15,b+5);
	printf("PRA FICAR FACIL: ");
	
	gotoxy(a+40,b+20);
	printf("PALAVRA:");
	
	//LETRAS JÁ USADA
	gotoxy(a+110,b+7);
	printf("LETRAS DISPONIVEIS");
	
	//PONTUAÇÃO DA PALAVRA
	gotoxy(a+62,b+2);
	printf("PONTUACAO DA PALAVRA:");
		
}
int BuscaCod(FILE *Palavras, int AuxCod)
{
	TpDic R;
	rewind(Palavras);
	fread(&R,sizeof(TpDic),1,Palavras);
	while(!feof(Palavras) && AuxCod != R.cod)
		fread(&R,sizeof(TpDic),1,Palavras);
	
	if(feof(Palavras))
		return -1;
	else
		return ftell(Palavras) - sizeof(TpDic);
}
int BuscaUsuario(FILE *Jogador, char Aux[30])
{
	TpJogador U;
	rewind (Jogador);
	fread(&U,sizeof(TpJogador),1,Jogador);
	while(!feof(Jogador) && strcmp(Aux,U.login)!=0)
		fread(&U,sizeof(TpJogador),1,Jogador);
	
	if(feof(Jogador))
		return -1; //não encontrou
	else
		return ftell(Jogador)-sizeof(TpJogador); // encontrou
}
int BuscaP(FILE *Palavras, char Aux[40])
{
	TpDic R;
	rewind(Palavras);
	fread(&R,sizeof(TpDic),1,Palavras);
	while(!feof(Palavras) && strcmp(Aux,R.Port)!=0)
		fread(&R,sizeof(TpDic),1,Palavras);
	
	if(feof(Palavras))
		return -1; // não encontrou
	else
		return ftell(Palavras)-sizeof(TpDic); // encontrou
}

/*int BB(int aux) //tentavia
{
	int ini,meio,fim;
	
	tl = ftell(Palavras) / sizeof(TpDic);
	fim = tl;
	meio = tl / 2;
	
	while (ini< fim && Aux != R.cod && Aux != meio)
	{
		if(R.cod < Aux)
		{
			ini = meio + 1;
		}
		else
			fim = meio;
		meio = (inicio+fim) / 2;
	}
	if(Aux == R.cod)
		return meio;
	else
		return -1;
}*/

int BuscaSentinela (FILE *Palavras, int Aux) // tentativa
{
	TpDic R;
	int i=0;
	
	rewind (Palavras);
	fread(&R,sizeof(TpDic),1,Palavras);
	while(!feof(Palavras) && Aux != R.cod)
		fread(&R,sizeof(TpDic),1,Palavras);
	
	if(feof(Palavras))
		return -1;
	else
		return ftell(Palavras) - sizeof(TpDic);
}
int BuscaI(FILE *Palavras, char Aux[40])
{
	TpDic R;
	rewind(Palavras);
	fread(&R,sizeof(TpDic),1,Palavras);
	while(!feof(Palavras) && strcmp(Aux,R.Ing)!=0)
		fread(&R,sizeof(TpDic),1,Palavras);
	
	if(feof(Palavras))
		return -1;
	else
		return ftell(Palavras) - sizeof(TpDic);
}
void CadastraUsuario(FILE *Jogador) // FEITO
{
	TpJogador U;
	char AuxUser[30];
	int p=0,i=2;
	clrscr();
	Jogador = fopen("Jogador.dat","ab+");
	
	textcolor(10);
	gotoxy(C_F/2-10,L_I-1);
	printf("*** CADASTRO DE JOGADOR ***\n");
	QuadroMenu();
	gotoxy(C_I+1,L_I+i++);
	textcolor(15);
	printf(" Digite o Usuario: "); fflush(stdin);
	gets(AuxUser);
	
	while(strcmp(AuxUser,"\0")!=0)
	{
		p = BuscaUsuario(Jogador,AuxUser);
		if(p == -1)
		{
			
			strcpy(U.login,AuxUser);
			gotoxy(C_I+1,L_I+i++);
			textcolor(15);
			printf(" Digite a Senha: ");
			scanf("%d",&U.senha);
			gotoxy(C_I+1,L_I+i++);
			printf(" Seu Nome: "); fflush(stdin);
			gets(U.nome);
			U.pontos = 0;
			U.ati = 1;
			fwrite(&U, sizeof(TpJogador),1,Jogador);		
		}
		else
		{			
			clrscr();
			textcolor(10);
			gotoxy(C_F/2-10,L_I-1);
			printf(" *** CADASTRO DE USUARIOS *** ");
			QuadroMenu();
			gotoxy(C_I+1,L_I+2);
			textcolor(15);
			printf(" Usuario Ja Cadastrado !");	
			getch();
		}
		i=2;
		clrscr();
		textcolor(10);
		gotoxy(C_F/2-10,L_I-1);
		printf("*** CADASTRO DE JOGADOR ***\n");
		QuadroMenu();
		gotoxy(C_I+1,L_I+i++);
		textcolor(15);
		printf(" Digite o Usuario: "); fflush(stdin);
		gets(AuxUser);					
	}	
	fclose(Jogador);
	getch();
}
void InsercaoDireta(TpDic Up)
{
	TpDic aux;
	int tl=0,pos=0;
	FILE *Palavras = fopen("Dicionario.dat","rb+");
	fseek(Palavras,0,2);
	
	tl = ftell(Palavras) / sizeof(TpDic);
	pos = tl-2;
	
	fseek(Palavras,pos*sizeof(TpDic),0);
	fread(&aux,sizeof(TpDic),1,Palavras);
	while(pos>=0 && Up.cod < aux.cod)
	{
		fseek(Palavras,pos*sizeof(TpDic),0);
		fwrite(&Up,sizeof(TpDic),1,Palavras);
		fwrite(&aux,sizeof(TpDic),1,Palavras);
		pos--;
		if(pos >= 0)
			{
				fseek(Palavras,pos*sizeof(TpDic),0);
				fread(&aux,sizeof(TpDic),1,Palavras);
			}
	}
	fclose(Palavras);
}
void CadastraPalavras (FILE *Palavras) // FEITO
{
	TpDic R;
	int p=0,k=0,resp=0,AuxCod=0,i=2;
	Palavras = fopen("Dicionario.dat","ab+");
	clrscr();
	do
	{
		textcolor(10);
		gotoxy(C_F/2-10,L_I-1);
		printf(" *** CADASTRO DE PALAVRAS *** ");
		QuadroMenu();
		gotoxy(C_I+1,L_I+i++);
		textcolor(15);
		printf(" Digite o Codigo da Palavra: ");
		scanf("%d",&AuxCod);
		p = BuscaSentinela(Palavras,AuxCod);
		if (p == -1)
		{
			R.cod = AuxCod;
			gotoxy(C_I+1,L_I+i++);
			textcolor(15);
			printf(" Palavra em Portugues: "); fflush(stdin);
			gets(R.Port);
			gotoxy(C_I+1,L_I+i++);
			printf(" Palavra em Ingles: "); fflush(stdin);
			gets(R.Ing);
			gotoxy(C_I+1,L_I+i++);
			printf(" Detalhes Sobre a Palavra: "); fflush(stdin);
			gets(R.Sig);
			gotoxy(C_I+1,L_I+i++);
			printf(" Pontos: ");
			scanf("%d",&R.pont);
			R.ati = 1;
			fwrite(&R, sizeof(TpDic),1,Palavras);
			fclose(Palavras);
			InsercaoDireta(R);
			Palavras = fopen ("Dicionario.dat","ab+");
		}
		else
		{
			clrscr();
			textcolor(10);
			gotoxy(C_F/2-10,L_I-1);
			printf(" *** CADASTRO DE PALAVRAS *** ");
			QuadroMenu();
			gotoxy(C_I+1,L_I+2);
			textcolor(15);
			printf(" Codigo Ja Cadastrado !");			
		}

		
		gotoxy(C_I+1,L_I+i++);
		textcolor(15);
		printf(" Deseja Cadastrar Mais Palavras? <S=1/N=0>");
		scanf("%d",&resp);	
		i=2;
		clrscr();
		QuadroMenu();
	} while (resp!= 0);
	fclose(Palavras);
	getch();
}
void ConsultaPalavra(FILE *Palavras) // FEITO
{
	TpDic R;
	
	int p,i=2,resp,AuxCod;
	Palavras = fopen("Dicionario.dat","rb");
	
	do{
		clrscr();
		textcolor(10);
		gotoxy(C_F/2-10,L_I-1);
		printf("*** CONSULTA DE PALAVRAS ***");
		QuadroMenu();	
		gotoxy(C_I+1,L_I+i++);
		textcolor(15);
		printf(" Codigo da Palavra: ");
		scanf("%d",&AuxCod);
		p = BuscaCod(Palavras,AuxCod);
		if(p == -1)
		{
			clrscr();
			QuadroMenu();
			gotoxy(C_I+1,L_I+2);
			textcolor(15);
			printf(" Palavra não encontrada ");
		}
			
		else
			{
				clrscr();
				QuadroMenu();	
				gotoxy(C_F/2-10,L_I-1);
				textcolor(10);
				printf(" *** DETALHES DO REGISTRO *** ");
				fseek(Palavras,p,0);
				fread(&R,sizeof(TpDic),1,Palavras);
				gotoxy(C_I+1,L_I+i++);
				textcolor(15);
				printf(" %s - %s - %d - %s - %d",R.Port, R.Ing, R.pont, R.Sig, R.cod);
				getch();
			}
		
		clrscr();
		QuadroMenu();	
		gotoxy(C_I+1,L_I+i++);
		textcolor(15);
		printf(" Deseja Consultar Mais Palavras? <S=1/N=0>");
		scanf("%d",&resp);	
		i=2;
		clrscr();
		
	}while(resp!=0);

	fclose(Palavras); getch();
}
void ConsultaU(FILE *Jogador) // FEITO
{
	TpJogador U;
	int p,i=2;
	char AuxUser[30];
	Jogador = fopen("Jogador.dat","rb");
	clrscr(); 
	textcolor(10);
	gotoxy(C_F/2-10,L_I-1);
	printf("*** CONSULTA DE USUARIO ***");
	QuadroMenu();
	gotoxy(C_I+1,L_I+i++);
	textcolor(15);
	printf(" Digite o Login: ");fflush(stdin);
	gets(AuxUser);
	
	while(strcmp(AuxUser,"\0")!=0)
	{
		p = BuscaUsuario(Jogador,AuxUser);
		if(p == -1)
		{
			clrscr();
			QuadroMenu();
			textcolor(15);
			gotoxy(C_I+1,L_I+2);
			printf(" Usuario Nao Cadastrado !");
		}
			
		else
			{
				clrscr(); 
				QuadroMenu();
				gotoxy(C_F/2-10,L_I-1);
				textcolor(10);
				printf(" *** DETALHES DO REGISTRO ***");
				fseek(Jogador,p,0);
				fread(&U,sizeof(TpDic),1,Jogador);
				gotoxy(C_I+1,L_I+2);
				textcolor(15);
				printf(" %s - %s - %d",U.login, U.nome, U.pontos );
				getch();
			}
		i=2;
		clrscr();
		QuadroMenu();
		textcolor(10);
		gotoxy(C_F/2-10,L_I-1);
		printf("*** CONSULTA DE USUARIO ***");
		gotoxy(C_I+1,L_I+i++);
		textcolor(15);
		printf(" Digite o Login: ");fflush(stdin);
		gets(AuxUser);		
	}
	fclose(Jogador);
	getch();
}
void AlteraP(FILE *Palavras) // FEITO
{
	TpDic R;
	int p, i=2;
	Palavras = fopen("Dicionario.dat","rb+");
	clrscr();
	QuadroMenu();
	textcolor(10);
	gotoxy(C_F/2-10,L_I-1);
	printf(" *** ALTERACAO DE PALAVRA *** ");
	gotoxy(C_I+1,L_I+i++);
	textcolor(15);
	printf(" Informe a Palavra: ");fflush(stdin);
	gets(R.Port);
	while(strcmp(R.Port,"\0")!=0)
	{
		p = BuscaP(Palavras,R.Port);
		if(p == -1)
		{
			clrscr();
			QuadroMenu();
			gotoxy(C_I+1,L_I+2);
			textcolor(15);
			printf(" Palavra Nao Encontrada ");
		}
			
		else
			{
				clrscr(); 
				QuadroMenu();
				gotoxy(C_F/2-10,L_I-1);
				fseek(Palavras,p,0);
				fread(&R,sizeof(TpDic),1,Palavras);
				textcolor(15);
				printf(" Digite a Nova Palavra: ");fflush(stdin);
				gets(R.Port);
				fseek(Palavras,p,0);
				fwrite(&R,sizeof(TpDic),1,Palavras);
			}
		i=2;
		clrscr();
		textcolor(10);
		QuadroMenu();
		gotoxy(C_F/2-10,L_I-1);
		printf(" *** ALTERACAO DE PALAVRA *** ");
		gotoxy(C_I+1,L_I+i++);
		textcolor(15);
		printf(" Informe a Palavra: ");fflush(stdin);
		gets(R.Port);
	}
	fclose(Palavras);
	getch();
}
void AlteraI(FILE *Palavras) // FAZER
{
	TpDic R;
	int p, i=2;
	Palavras = fopen("Dicionario.dat","rb+");
	clrscr();
	QuadroMenu(); 
	textcolor(10);
	gotoxy(C_F/2-10,L_I-1);
	printf(" *** ALTERACAO DE PALAVRA *** ");	
	gotoxy(C_I+1,L_I+i++);	
	textcolor(15);
	printf(" Informe a Palavra: "); fflush(stdin);
	gets(R.Ing);
	while(strcmp(R.Ing,"\0")!=0)
	{
		p = BuscaI(Palavras,R.Ing);
		if(p == -1)
		{
			clrscr();
			QuadroMenu();
			gotoxy(C_I+1,L_I+2);
			textcolor(15);
			printf(" Nao Encontrada ");
		}
			
		else
			{
				clrscr(); 
				QuadroMenu();
				gotoxy(C_F/2-10,L_I-1);
				fseek(Palavras,p,0);
				fread(&R,sizeof(TpDic),1,Palavras);
				textcolor(15);
				printf(" Nova Palavra: ");fflush(stdin);
				gets(R.Ing);
				fseek(Palavras,p,0);
				fwrite(&R,sizeof(TpDic),1,Palavras);
			}
		i=2;
		clrscr(); 
		QuadroMenu();
		textcolor(10);
		gotoxy(C_F/2-10,L_I-1);
		printf(" *** ALTERACAO DE PALAVRA *** ");	
		gotoxy(C_I+1,L_I+i++);	
		textcolor(15);
		printf(" Informe a Palavra: "); fflush(stdin);
		gets(R.Ing);
	}
	fclose(Palavras);
	getch();
}
 void OrganizaU(FILE *Jogador) // BOLHA
{
	TpJogador RegA, RegB;
	
	int a,b,tl=0;
	clrscr();
	Jogador = fopen("Jogador.dat","rb+");
	fseek(Jogador,0,2);
	tl = ftell(Jogador) / sizeof(TpJogador);
	
	while (tl>0)
	{
		for(a=0;a<tl-1;a++)
	{
		for(b=a+1;b<tl;b++)
		{
			fseek(Jogador,a*sizeof(TpJogador),0);
			fread(&RegA,sizeof(TpJogador),1,Jogador);
			fseek(Jogador,b*sizeof(TpJogador),0);
			fread(&RegB,sizeof(TpJogador),1,Jogador);
			if(strcmp(RegA.login,RegB.login)>0)
			{
				fseek(Jogador,a*sizeof(TpJogador),0);
				fwrite(&RegB,sizeof(TpJogador),1,Jogador);
				fseek(Jogador,b*sizeof(TpJogador),0);
				fwrite(&RegA,sizeof(TpJogador),1,Jogador);				
			}
		}
	}
		tl--;
	}
	printf("\n Usuarios Organizados !");
	fclose(Jogador);
	getch();
} 
void OrganizaPalavra(FILE *Palavras)
{
	TpDic RegA, RegB;
	
	int a,b,tl=0;
	clrscr();
	Palavras = fopen("Dicionario.dat","rb+");
	fseek(Palavras,0,2);
	tl = ftell(Palavras) / sizeof(TpDic);
	for(a=0;a<tl-1;a++)
	{
		for(b=a+1;b<tl;b++)
		{
			fseek(Palavras,a*sizeof(TpDic),0);
			fread(&RegA,sizeof(TpDic),1,Palavras);
			fseek(Palavras,b*sizeof(TpDic),0);
			fread(&RegB,sizeof(TpDic),1,Palavras);
			if(RegA.cod > RegB.cod) 
			{
				fseek(Palavras,a*sizeof(TpDic),0);
				fwrite(&RegB,sizeof(TpDic),1,Palavras);
				fseek(Palavras,b*sizeof(TpDic),0);
				fwrite(&RegA,sizeof(TpDic),1,Palavras);
			}
		}
	}
	printf("\n Dados Organizados !");
	fclose(Palavras);
	getch();
}
void OrganizaUsuario(FILE *Jogador) 
{
	TpJogador RegA,RegB;
	int a,b,tl=0;
	clrscr();
	Jogador = fopen("Jogador.dat","rb+");
	fseek(Jogador,0,2);
	tl = ftell(Jogador) / sizeof(TpJogador);
	for(a=0;a<tl-1;a++)
	{
		for(b=a+1;b<tl;b++)
		{
			fseek(Jogador,a*sizeof(TpJogador),0);
			fread(&RegA,sizeof(TpJogador),1,Jogador);
			fseek(Jogador,a*sizeof(TpJogador),0);
			fread(&RegB,sizeof(TpJogador),1,Jogador);
			if(strcmp(RegA.login,RegB.login)>0)
			{
				fseek(Jogador,a*sizeof(TpJogador),0);
				fwrite(&RegB,sizeof(TpJogador),1,Jogador);
				fseek(Jogador,b*sizeof(TpJogador),0);
				fwrite(&RegA,sizeof(TpJogador),1,Jogador);				
			}
		}
	}
	fclose(Jogador);
	getch();
}
void AlteraU(FILE *Jogador) // FEITO
{
	TpJogador U;
	int p,resp,i=2;
	Jogador = fopen("Jogador.dat","rb+");
	clrscr(); 
	QuadroMenu();
	gotoxy(C_F/2-10,L_I-1);
	textcolor(10);
	printf("*** ALTERACAO DE USUARIO *** ");
	gotoxy(C_I+1,L_I+i++);	
	textcolor(15);
	printf(" Digite o Login: ");fflush(stdin);
	gets(U.login);
	while(strcmp(U.login,"\0")!=0)
	{
		p = BuscaUsuario(Jogador,U.login);			
		if(p >= 0)
		{
			clrscr(); 
			textcolor(10);
			QuadroMenu();
			gotoxy(C_F/2-10,L_I-1);
			printf("*** DADOS DO RELATORIO ***");
			fseek(Jogador,p,0);
			fread(&U,sizeof(TpJogador),1,Jogador);
			gotoxy(C_I+1,L_I+i++);	
			textcolor(15);
			printf(" %s - %d - %s - %d",U.login,U.senha, U.nome, U.pontos );
			gotoxy(C_I+1,L_I+i++);	
			printf(" 1 - Alteracao de Login ");
			gotoxy(C_I+1,L_I+i++);	
			printf(" 2 - Alteracao de Senha ");
			gotoxy(C_I+1,L_I+i++);	
			printf(" 3 - Alteracao de Nome ");
			scanf("%d",&resp);
				switch (resp)
				{
					case 1: i=2; 
					clrscr();
					QuadroMenu();
					textcolor(10);
					gotoxy(C_F/2-10,L_I-1);
					printf("*** DADOS DO RELATORIO ***");
					gotoxy(C_I+1,L_I+i++);	
					textcolor(15);
					printf(" Login Antigo: %s ",U.login);
					fseek(Jogador,p,0);
					fread(&U,sizeof(TpJogador),1,Jogador);
					gotoxy(C_I+1,L_I+i++);	
					printf(" Novo Login: "); fflush(stdin);
					gets(U.login);
					fseek(Jogador,p,0);
					fwrite(&U,sizeof(TpJogador),1,Jogador);
					gotoxy(C_I+1,L_I+i++);	
					printf(" Login Alterado !");
					getch();
					break;
					
					case 2: i=2;
					clrscr();
					QuadroMenu();
					textcolor(10);
					gotoxy(C_F/2-10,L_I-1);
					printf("*** DADOS DO RELATORIO ***");
					textcolor(15);
					gotoxy(C_I+1,L_I+i++);
					printf(" Senha Antiga: %d ",U.senha);
					fseek(Jogador,p,0);
					fread(&U,sizeof(TpJogador),1,Jogador);
					gotoxy(C_I+1,L_I+i++);	
					printf(" Nova Senha: ");
					scanf("%d",&U.senha);
					fseek(Jogador,p,0);
					fwrite(&U,sizeof(TpJogador),1,Jogador);
					gotoxy(C_I+1,L_I+i++);	
					printf(" Senha Alterada !");
					getch();
					break;
					
					case 3: i=2;
					clrscr();
					QuadroMenu();
					textcolor(10);
					gotoxy(C_F/2-10,L_I-1);
					printf("*** DADOS DO RELATORIO ***");
					textcolor(15);
					gotoxy(C_I+1,L_I+i++);	
					printf(" Nome Antigo: %s",U.nome);
					fseek(Jogador,p,0);
					fread(&U,sizeof(TpJogador),1,Jogador);
					gotoxy(C_I+1,L_I+i++);	
					printf(" Novo Nome: ");fflush(stdin);
					gets(U.nome);
					fseek(Jogador,p,0);
					fwrite(&U,sizeof(TpJogador),1,Jogador);
					gotoxy(C_I+1,L_I+i++);	
					printf(" Nome Alterado !");
					getch();
					break;
				}
		}
		else
		{
			clrscr();
			QuadroMenu();
			gotoxy(C_I+1,L_I+2);
			textcolor(15);
			printf(" Não Encontrado ");
		}
			
		i=2;	
		clrscr(); 
		QuadroMenu();
		textcolor(10);
		gotoxy(C_F/2-10,L_I-1);
		printf("*** ALTERACAO DE USUARIO *** ");
		gotoxy(C_I+1,L_I+i++);	
		textcolor(15);
		printf(" Digite o Login: ");fflush(stdin);
		gets(U.login);
	}
	fclose(Jogador);
	getch();
}
void RelUsuario(FILE *Jogador) // FEITO
{
	TpJogador U;
	int p,i=2;
	Jogador = fopen("Jogador.dat","rb");
	clrscr();
	QuadroMenu();
	textcolor(10);
	gotoxy(C_F/2-10,L_I-1);
	printf("*** RELATORIO DE USUARIO *** ");
	fread(&U,sizeof(TpJogador),1,Jogador);
	while(!feof(Jogador) && U.ati == 1)
	{
		gotoxy(C_I+1,L_I+i++);
		textcolor(15);
		printf(" %s - ******** - %s - %d",U.login, U.nome, U.pontos);
		fread(&U,sizeof(TpJogador),1,Jogador);
	}
	fclose(Jogador);
	getch();
}
void VerifArqP(char NomeArq[100])
{
	textcolor(15);
	printf("\n*** VERIFICACAO DE ARQUIVO DE PALAVRAS ***");
	FILE *Palavras = fopen(NomeArq,"rb");
	if(Palavras == NULL)
	{
		printf("\n Nao encontrado, talvez nao exista! ");
		printf("\n Deseja cria-lo? <S/N>? ");
		if(toupper(getch())=='S')
		{
			Palavras = fopen(NomeArq,"wb");
			printf("\n Arquivo Criado! ");
			fclose(Palavras); getch();
		}		
	}		
	else
	{
		printf("\n Arquivo Encontrado!  ");
		fclose(Palavras); getch();	
	}		
}
void VerifArqU(char NomeArq[100])
{
	textcolor(15);
	printf("\n*** VERIFICACAO DE ARQUIVO DE USUARIO ***");
	FILE *Jogador = fopen(NomeArq,"rb");
	if(Jogador == NULL)
	{
		printf("\n Nao encontrado, talvez nao exista! ");
		printf("\n Deseja cria-lo? <S/N>? ");
		if(toupper(getch())=='S')
		{
			Jogador = fopen(NomeArq,"wb");
			printf("\n Arquivo Criado! ");
			fclose(Jogador); getch();
		}		
	}		
	else
	{
		printf("\n Arquivo Encontrado! ");
		fclose(Jogador); getch();	
	}		
}
void RelPalavra(FILE *Palavras) // FEITO
{
	TpDic R;
	int p,i=2;
	Palavras = fopen("Dicionario.dat","rb");
	clrscr();
	QuadroMenu();
	textcolor(10);
	gotoxy(C_F/2-10,L_I-1);
	printf(" *** RELATORIO DE PALAVRAS *** ");
	fread(&R,sizeof(TpDic),1,Palavras);
	if(Palavras == NULL)
		printf("\n ARQUIVO VAZIO ");
	else
	{
		while(!feof (Palavras) && R.ati == 1)
		{
			gotoxy(C_I+1,L_I+i++);
			textcolor(15);
			printf("%s - %s - %d - %s - %d",R.Port, R.Ing, R.pont, R.Sig, R.cod);
			fread(&R,sizeof(TpDic),1,Palavras);
		}	
			
	}
	
	fclose(Palavras);
	getch();
}
void ExclusaoUsuario(FILE *Jogador) // FAZER
{
	TpJogador U;
	int p,i=2;
	
	Jogador = fopen("Jogador.dat","rb+");
	
	clrscr(); 
	QuadroMenu();
	textcolor(10);
	gotoxy(C_F/2-10,L_I-1);
	printf("*** EXCLUSAO LOGICA ***");
	gotoxy(C_I+1,L_I+i++);	
	textcolor(15);
	printf(" Informe o Usuario: ");fflush(stdin);
	gets(U.login);
	while(strcmp(U.login,"\0")!=0)
	{
		p = BuscaUsuario(Jogador,U.login);
	
		if(p == -1)
		{
			clrscr();
			QuadroMenu();
			gotoxy(C_I+1,L_I+2);
			textcolor(15);
			printf(" Nao encontrado, Talvez nao exista! ");
		}
			
		else
			{
				clrscr();
				QuadroMenu();
				textcolor(10);
				gotoxy(C_F/2-10,L_I-1);
				printf("*** DETALHES DO REGISTRO ***");
				fseek(Jogador,p,0);
				fread(&U,sizeof(TpJogador),1,Jogador);
				gotoxy(C_I+1,L_I+i++);	
				textcolor(15);
				printf(" %s - ******** - %s - %d",U.login, U.nome, U.pontos);
				printf(" Confirmar Exclusao? (S/N) ");
				if(toupper(getche())=='S')
				{
					U.ati = 0;
					fseek(Jogador,p,0);
					fwrite(&U,sizeof(TpJogador),1,Jogador);
					gotoxy(C_I+1,L_I+i++);
					printf(" Exclusao Concluida !");
				}
				else
					gotoxy(C_I+1,L_I+i++);
					printf(" Exclusao Cancelada !");
			}
		i=2;
		clrscr(); 
		QuadroMenu();
		textcolor(10);
		gotoxy(C_F/2-10,L_I-1);
		printf("*** EXCLUSAO LOGICA ***");
		gotoxy(C_I+1,L_I+i++);	
		textcolor(15);
		printf(" Informe o Usuario: ");fflush(stdin);
		gets(U.login);
	}
	
	fclose(Jogador);
	getch();
}
void ExclusaoPalavra(FILE *Palavras) // FAZER
{
	TpDic R;
	int p,i=2;
	Palavras = fopen("Dicionario.dat","rb+");
	clrscr(); 
	QuadroMenu();
	textcolor(10);
	gotoxy(C_F/2-10,L_I-1);
	printf("*** EXCLUSAO LOGICA ***");
	gotoxy(C_I+1,L_I+i++);	
	textcolor(15);
	printf(" Informe o Codigo: ");
	scanf("%d",&R.cod);
	
		p = BuscaSentinela(Palavras,R.cod);
		if (p == -1)
		{			
			clrscr();
			QuadroMenu();
			gotoxy(C_I+1,L_I+2);
			textcolor(15);
			printf(" Nao encontrado, Talvez nao exista! ");
		}
			
		else
			{
				textcolor(10);
				gotoxy(C_F/2-10,L_I-1);
				printf("*** DETALHES DO REGISTRO ***");
				fseek(Palavras,p,0);
				fread(&R,sizeof(TpDic),1,Palavras);
				gotoxy(C_I+1,L_I+i++);	
				textcolor(15);
				printf("Portugues: %s ",R.Port);
				gotoxy(C_I+1,L_I+i++);	
				printf("Ingles: %s",R.Ing);
				gotoxy(C_I+1,L_I+i++);	
				printf("Dica: %s",R.Sig);
				gotoxy(C_I+1,L_I+i++);	
				printf("Pontos: %d",R.pont);
				gotoxy(C_I+1,L_I+i++);	
				printf(" Confirmar Exclusao? (S/N) ");
				if(toupper(getche())=='S')
				{
					clrscr();
					QuadroMenu();
					R.ati = 0;
					fseek(Palavras,p,0);
					fwrite(&R,sizeof(TpDic),1,Palavras);
					gotoxy(C_I+1,L_I+2);
					textcolor(15);
					printf("Exclusão Concluida! ");
				}
				else		
				{
					textcolor(15);
					gotoxy(C_I+1,L_I+2);
					printf(" Exclusão Cancelada ");
				}
				
			}
	fclose(Palavras);
	getch();
}
void ExcluirPalavras(FILE *Palavras)
{
	TpDic R;
	FILE *PalavrasTemporaria;
	Palavras = fopen("Dicionario.dat","rb");
	if(Palavras == NULL)
		printf(" ERROR 404 FILE NOT FOUND ");
	else
		{
			PalavrasTemporaria = fopen("Temporaria.dat","wb");
			fread(&R,sizeof(TpDic),1,Palavras);
			while(!feof(Palavras))
			{
				if(R.ati == 1)
					fwrite(&R,sizeof(TpDic),1,PalavrasTemporaria);
				
				fread(&R,sizeof(TpDic),1,Palavras);
			}
			fclose(Palavras);
			fclose(PalavrasTemporaria);
			remove("Dicionario.dat");
			rename("Temporaria.dat","Dicionario.dat");
		}
	clrscr();
	QuadroMenu();
	textcolor(15);
	gotoxy(C_I+1,L_I+2);
	printf(" Exclusão Concluida! ");
	getch();
}
void ExcluirUsuario(FILE *Jogador)
{
	TpJogador U;
	FILE *JogadorTemporario;
		
	Jogador = fopen("Jogador.dat","rb");
	if(Jogador == NULL)
		printf(" ERROR 404 FILE NOT FOUND ");
	else
		{
			JogadorTemporario = fopen("Temporario.dat","wb");
			fread(&U,sizeof(TpJogador),1,Jogador);
			while(!feof(Jogador))
			{
				if(U.ati == 1)
					fwrite(&U,sizeof(TpJogador),1,JogadorTemporario);
					
				fread(&U,sizeof(TpJogador),1,Jogador);
			}
			fclose(Jogador); fclose(JogadorTemporario);
			remove("Jogador.dat");
			rename("Temporario.dat","Jogador.dat");
		}
	clrscr();
	QuadroMenu();
	textcolor(15);
	gotoxy(C_I+1,L_I+2);
	printf(" Exclusão Concluida! ");
	getch();	
}
void Jogar(FILE *Jogo, FILE *Palavras,char Login[30], int senha)
{
	TpJogo J; TpDic R;
	Palavras = fopen("Dicionario.dat","rb");
	Jogo = fopen("PalavrasJogador.dat","rb+");
	
	int a=C_I, b=L_I;
	int x,r,i,k,j,c;	
	char StrAux[40],Data[9],Hora[9],Alf[26];
	
	QuadroJogo(a,b);
	
	r = Random(Palavras);
	x = rand() % 2;
	fseek(Palavras,r*sizeof(TpDic),0);
	fread(&R,sizeof(TpDic),1,Palavras);
	if( x == 1 )
	{
		for(i=0; R.Port[i] != '\0'; i++ )
			StrAux[i] = '-';
	}
	else
	{
		for(i=0; R.Ing[i] != '\0'; i++)
			StrAux[i] = '-';
	}
	StrAux[i] = '\0';
	_strdate(Data);
	_strtime(Hora);
	
	// TRAÇOS DA PALAVRA -----
	gotoxy(C_I+48,L_I+20);
	textcolor(15);
	printf("%s",StrAux);
	// DICA
	gotoxy(C_I+33,L_I+5);
	textcolor(15);
	printf("%s",R.Sig);
	// PONTUAÇÃO DA PALAVRA
	textcolor(15);
	gotoxy(C_I+85,L_I+2);
	printf("%d",R.pont);
	
	for(i=0,c=65,j=110,k=9; c < 91; i++,j++,c++)
	{
		Alf[i] = c;
		if(c == 'N')
		{
			k++;
			j=110;
		}
		// LETRAS DISPONIVEIS
		textcolor(14); 
		gotoxy(C_I+j,L_I+k);
		printf("%c",c);
	}
	getch();
	fclose(Palavras);
	fclose(Jogo);
} 
char MenuPalavra(void)
{
	TpDic R;
	FILE *Palavras;
	char op;
	int a=0;
	
	clrscr();
	QuadroMenu();		
	textcolor(10);
	gotoxy(C_F/2-10,L_I+3);
	printf("*** MENU DE PALAVRAS ***");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [A] - Cadastro de Palavras");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [B] - Consulta de Palavras");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [C] - Alterar Palavras em Portugues "); 
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [D] - Alterar Palavras em Ingles ");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [E] - Exclusao de Palavras ");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [F] - Relatorios de Palavras"); 
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [G] - Organizar Palavras");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [H] - Apagar Registros Temporarios ");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [I] - Zerar Registros");	
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [ESC] - Sair");
	op = toupper(getch());
	while(op!=27)
	{a=0;
		switch(op)
		{
			case 'A': CadastraPalavras(Palavras);
				break;
			case 'B': ConsultaPalavra(Palavras);
				break;
			case 'C': AlteraP(Palavras);
				break;
			case 'D': AlteraI(Palavras);
				break;
			case 'E': ExclusaoPalavra(Palavras);
				break;
			case 'F': RelPalavra(Palavras);
				break;
			case 'G': OrganizaPalavra(Palavras);
				break;	
			case 'H': ExcluirPalavras(Palavras);
				break;
			case 'I': Palavras = fopen("Dicionario.dat","wb"); 
				printf("\n*** DADOS DE PALAVRAS APAGADOS ***");		
				fclose(Palavras);
				getch();
				break;					
		}
		clrscr();
		QuadroMenu();		
		textcolor(10);
		gotoxy(C_F/2-10,L_I+3);
		printf("*** MENU DE PALAVRAS ***");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [A] - Cadastro de Palavras");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [B] - Consulta de Palavras");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [C] - Alterar Palavras em Portugues "); 
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [D] - Alterar Palavras em Ingles ");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [E] - Exclusao de Palavras ");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [F] - Relatorios de Palavras"); 
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [G] - Organizar Palavras");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [H] - Apagar Registros Temporarios ");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [I] - Zerar Registros");	
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [ESC] - Sair");
		op = toupper(getch());
	}
}
char MenuUsuario(void)
{
	TpJogador U;
	FILE *Jogador;
	char op;
	int a=0;
	
	clrscr();
	QuadroMenu();		
	textcolor(10);
	gotoxy(C_F/2-10,L_I+3);
	printf("*** MENU DE USUARIO ***");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [A] - Cadastro de Usuario ");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [B] - Consulta de Usuario ");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [C] - Alteracao de Usuario ");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [D] - Exclusao de Usuario ");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [E] - Relatorio de Usuario ");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [F] - Organizar Usuarios ");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [G] - Apagar Registros Temporarios ");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [H] - Zerar Registros");
	gotoxy(C_F/2-10,L_F/2+a++);
	printf(" [ESC] - Sair");
	op = toupper(getch());
	while(op!=27)
	{ a=0;
		switch (op)
		{
			case 'A': CadastraUsuario(Jogador);
				break;	
			case 'B': ConsultaU(Jogador);
				break;
			case 'C': AlteraU(Jogador);
				break;
			case 'D': ExclusaoUsuario(Jogador);
				break;
			case 'E': RelUsuario(Jogador);
				break;
			case 'F': OrganizaU(Jogador);
				break;
			case 'G': ExcluirUsuario(Jogador);
				break;			
			case 'H': Jogador = fopen("Jogador.dat","wb"); 
						printf("\n*** DADOS DE USUARIOS APAGADOS ***");		
						fclose(Jogador);
						getch();
				break;					
		}
		clrscr();
		QuadroMenu();		
		textcolor(10);
		gotoxy(C_F/2-10,L_I+3);
		printf("*** MENU DE USUARIO ***");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [A] - Cadastro de Usuario ");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [B] - Consulta de Usuario ");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [C] - Alteracao de Usuario ");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [D] - Exclusao de Usuario ");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [E] - Relatorio de Usuario ");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [F] - Organizar Usuarios ");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [G] - Apagar Registros Temporarios ");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [H] - Zerar Registros");
		gotoxy(C_F/2-10,L_F/2+a++);
		printf(" [ESC] - Sair");
		op = toupper(getch());
	}
}
void Login()
{
	FILE *Jogador;
	FILE *Palavras;
	FILE *Jogo;
	TpJogador U;
	int p, AuxSenha;
	char AuxLogin[30];
	Jogador = fopen("Jogador.dat","rb");
	clrscr();
	QuadroMenu();
	gotoxy(C_F/2-10,L_F/2);
	printf("LOGIN: "); fflush(stdin);
	gets(U.login);
	while(strcmp(U.login,"\0")!=0)
	{
		p = BuscaUsuario(Jogador,U.login);
		if(p == -1)
		{
			clrscr();
			QuadroMenu();
			gotoxy(C_F/2-10,L_F/2);
			printf(" Login Invalido! ");
			getch();
			clrscr();
			QuadroMenu();
			gotoxy(C_F/2-10,L_F/2);
			printf("LOGIN: "); fflush(stdin);
			gets(U.login);
		}
		else
		{
			gotoxy(C_F/2-10,L_F/2+2);
			printf("SENHA: ");
			scanf("%d",&AuxSenha);
			fseek(Jogador,p,0);
			fread(&U,sizeof(TpJogador),1,Jogador);
			if(U.senha == AuxSenha)
			{
				Jogar(Jogo,Palavras,AuxLogin, AuxSenha);
			}
			else
			{
				clrscr();
				QuadroMenu();
				gotoxy(C_F/2-10,L_F/2);
				printf(" Senha Invalida!");
				getch();
			}
		}
		clrscr();
		QuadroMenu();
		gotoxy(C_F/2-10,L_F/2);
		printf("LOGIN: "); fflush(stdin);
		gets(U.login);	
	}
	getch();
}
void Executa(void)
{
	FILE *Palavras;
	FILE *Jogador;
	char op, Aux;
	
	clrscr();
	Aux = QuadroInicio();	
	while(Aux != 27)
	{
		
		if(Aux == 'A')
		{				
			op = MenuPalavra();
		}
		if(Aux == 'B')
		{
			op = MenuUsuario();
		}
		if(Aux == 'C')
		{
			Login();
		}
		Aux = QuadroInicio();	
	}		
		
}

int main (void)
{
	system("mode con:cols=145 lines=40");
	srand(time(NULL));
	VerifArqP("Dicionario.dat");
	VerifArqU("Jogador.dat");
	clrscr();
	gotoxy(C_F/2-10,L_I-1);	
	printf(" *** DADOS PARA ENTRAR NO JOGO ***");
	gotoxy(C_F/2-6,L_I+1);	
	printf(" LOGIN: leandro SENHA: 10");
	getch();
	Executa();
	
	return 0;
}
// GABRIEL MARIOTO E JOÃO VITOR STECH
