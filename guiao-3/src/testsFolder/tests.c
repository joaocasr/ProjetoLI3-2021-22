/**
 * @file tests.h
 * @author grupo11
 * @brief Ficheiro que contém as funções para no executável de testes
 * @version 1.0
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include "../../include/view/colors.h"
#define MAXSIZE 100


void compere(char * filename1, char * filename2){
FILE *fp1, *fp2;

fp1=fopen(filename1, "r");
fp2= fopen(filename2,"r");
char cfp1 = getc(fp1);
char cfp2 = getc(fp2);


if(fp1==NULL || fp2==NULL) perror("ficheiros esperados nao encontrados");
char l1[MAXSIZE], l2[MAXSIZE];
int c = 1;
int r=0;
int err=0;

while(cfp1!=EOF && cfp2!=EOF){
        if(cfp1=='\n' && cfp2=='\n'){
        	c++;
        	r=0;	
        }
      	if(cfp1!=cfp2 && r==0){
          printf("TESTE DE COMPARAÇÃO DE FICHEIROS FALHADO- linha %d\n",c);
          r=1;
          err=1;
         }
        cfp1=getc(fp1);        
     	cfp2=getc(fp2);
      }
 if(err==0) printf("TESTE DE COMPARAÇAO DE FICHEIROS BEM SUCEDIDO!\n");
fclose(fp1);
fclose(fp2);
}

void compereQum(char * filename1, char * filename2){
FILE *fp1, *fp2;

fp1=fopen(filename1, "r");
fp2= fopen(filename2,"r");
char cfp1 = getc(fp1);
char cfp2 = getc(fp2);


if(fp1==NULL || fp2==NULL) perror("ficheiros esperados nao encontrados");
char l1[MAXSIZE], l2[MAXSIZE];
int c = 1;
int r=0;
int err=0;

while(cfp1!=EOF && cfp2!=EOF){
        if(cfp1=='\n' && cfp2=='\n'){
        	c++;
        	r=0;	
        }
      	if(cfp1!=cfp2 && r==0){
      		if(c==1){
                 printf("Diferente nº de bots!- TESTE DE COMPARAÇÃO DE FICHEIROS FALHADO\n");
                }
                if(c==2){
                  printf("Diferente nº de organizations!- TESTE DE COMPARAÇÃO DE FICHEIROS FALHADO\n");
                }
                if(c==3){
                   printf("Diferente nº de users! - TESTE DE COMPARAÇÃO DE FICHEIROS FALHADO\n");
                }
                r=1;
          err=1;
         }
        cfp1=getc(fp1);        
     	cfp2=getc(fp2);
        }
 if(err==0) printf("TESTE DE COMPARAÇAO DE FICHEIROS BEM SUCEDIDO!\n");
fclose(fp1);
fclose(fp2);
}


int escreve(){
        system("clear");
        puts(BOLD_CYAN);
    printf("    ╔════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("    ║                                                                                                                            ║\n");
    printf("    ║                                                                                                                            ║\n");
    printf("    ║        %s███╗░░░███╗███████╗███╗░░██╗██╗░░░██╗  ██████╗░███████╗  ████████╗███████╗░██████╗████████╗███████╗░██████╗%s         ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("    ║        %s████╗░████║██╔════╝████╗░██║██║░░░██║  ██╔══██╗██╔════╝  ╚══██╔══╝██╔════╝██╔════╝╚══██╔══╝██╔════╝██╔════╝%s         ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("    ║        %s██╔████╔██║█████╗░░██╔██╗██║██║░░░██║  ██║░░██║█████╗░░  ░░░██║░░░█████╗░░╚█████╗░░░░██║░░░█████╗░░╚█████╗░%s         ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("    ║        %s██║╚██╔╝██║██╔══╝░░██║╚████║██║░░░██║  ██║░░██║██╔══╝░░  ░░░██║░░░██╔══╝░░░╚═══██╗░░░██║░░░██╔══╝░░░╚═══██╗%s         ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("    ║        %s██║░╚═╝░██║███████╗██║░╚███║╚██████╔╝  ██████╔╝███████╗  ░░░██║░░░███████╗██████╔╝░░░██║░░░███████╗██████╔╝%s         ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("    ║          %s╚═╝░░░░░╚═╝╚══════╝╚═╝░░╚══╝░╚═════╝░  ╚═════╝░╚══════╝  ░░░╚═╝░░░╚══════╝╚═════╝░░░░╚═╝░░░╚══════╝╚═════╝░%s       ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("    ║                                                                                                                            ║\n");
    printf("    ║                                                                                                                            ║\n");
    printf("    ║        %s1: 𝙌𝙪𝙚𝙧𝙮 𝟏             2: 𝙌𝙪𝙚𝙧𝙮 𝟐              3: 𝙌𝙪𝙚𝙧𝙮 𝟑              4: 𝙌𝙪𝙚𝙧𝙮 𝟒                5: 𝙌𝙪𝙚𝙧𝙮 𝟓%s         ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("    ║                                                                                                                            ║\n");
    printf("    ║        %s6: 𝙌𝙪𝙚𝙧𝙮 𝟔             7: 𝙌𝙪𝙚𝙧𝙮 𝟕              8: 𝙌𝙪𝙚𝙧𝙮 𝟖              9: 𝙌𝙪𝙚𝙧𝙮 𝟗               10: 𝙌𝙪𝙚𝙧𝙮 𝟏𝟎%s        ║\n",BOLD_MAGENTA, BOLD_CYAN);
    printf("    ║                                                                                                                            ║\n");
    printf("    ╚════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");
   
    printf("    ╔════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("    ║                                                                                                                            ║\n");
    printf("    ║                                                       %s0 : EXIT%s%s                                                             ║\n",BI_BRIGHT_MAGENTA, RESET, BOLD_CYAN);
    printf("    ║                                                                                                                            ║\n");
    printf("    ╚════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");
   
    puts(RESET);
        return 0;
}
