#include<stdio.h>
int main(){
	//d��ar�dan girilen kenar uzunlu�una g�re alan ve �evre hesaplayan c program�
	float kisa_kenar,uzun_kenar,kenar;
	float alan,cevre;
	
	int kosul;
	printf("kare icin lutfen 1'e basin, dikdortgen icin lutfen 2'ye basin; ");
	scanf("%d",&kosul);

	if(kosul==1){
		printf("lutfen karenin kenar uzunlugunu giriniz; ");
		scanf("%f",&kenar);
		
		alan=kenar*kenar;
		cevre=4*kenar;
		
		printf("karenin alani = %f \nkarenin cevresi = %f\n",alan,cevre);
	}
	if(kosul==2){
		printf("lutfen dikd�rtgenin uzun kenar uzunlugunu giriniz; ");
		scanf("%f",&uzun_kenar);
		
		printf("lutfen dikd�rtgenin kisa kenar uzunlugunu giriniz; ");
		scanf("%f",&kisa_kenar);
		
		alan=kisa_kenar*uzun_kenar;
		cevre=2*(kisa_kenar+uzun_kenar);
		
		printf("dikd�rtgenin alani = %f \ndikd�rtgenin cevresi = %f\n",alan,cevre);
	}
}
