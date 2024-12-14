#include<stdio.h>
int main(){
	//dýþarýdan girilen kenar uzunluðuna göre alan ve çevre hesaplayan c programý
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
		printf("lutfen dikdörtgenin uzun kenar uzunlugunu giriniz; ");
		scanf("%f",&uzun_kenar);
		
		printf("lutfen dikdörtgenin kisa kenar uzunlugunu giriniz; ");
		scanf("%f",&kisa_kenar);
		
		alan=kisa_kenar*uzun_kenar;
		cevre=2*(kisa_kenar+uzun_kenar);
		
		printf("dikdörtgenin alani = %f \ndikdörtgenin cevresi = %f\n",alan,cevre);
	}
}
