#include<stdio.h>
int faktoriyel(int sayi){
	/*
	int sonuc=1;
	
	for(int i=0;i<=sayi;i++){// burada for yerine rek�rsive fonksiyon da kullan�labilir.
		sonuc*=i;
	}
	return sonuc;
	*/
	if(sayi==0){
		return 1;
	}
	else if(sayi==1){
		return 1;
	}
	else{
		return sayi*faktoriyel(sayi-1);
	}
}
int main(){
	//main ile hesaplan�rsa
	
	int sayi,sonuc=1;
	printf("lutfen faktoriyelini hesaplamak istediginiz sayiyi giriniz; ");
	scanf("%d",&sayi);
	/*
	for(int i=1;i<=sayi;i++){//burada for yerine while gibi d�ng�ler de kullan�labilir.
		sonuc*=i;
	}
	*/
	//fonksiyon ile hesaplan�rsa
	sonuc=faktoriyel(sayi);
	printf("faktoriyelin sonucu: %d",sonuc);
}
