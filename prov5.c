#include <stdio.h>
void main(){
int valor;
int nota100;
int nota50=0;
int nota20=0;
int nota10=0;
int nota2=0;
int nota5=0;
int n=0;
int vlat;
printf("digite o valor\n");
scanf("%d",&valor);
for (n=0;n<13;n++){
if(valor%100==1){
	vlat=valor/100;
nota100++;}
if(valor%50==1){
	vlat=vlat/50;
nota50++;}
if(valor%20==1){
	vlat=vlat/20;
nota20++;}
if(valor%10==1){
	vlat=vlat/10;
nota10++;}
if(valor%5==1){
	vlat=vlat/5;
nota5++;}
if(valor%2==1){
	vlat=vlat/2;
nota2++;}
printf("para o valor %d,foram usadas %d notas,as notas são:\n100:%d\n50:%d\n20:%d\n10:%d\n5:%d\n2:%d\n",valor,n,nota100,nota50,nota20,nota10,nota5,nota2);
}
}
