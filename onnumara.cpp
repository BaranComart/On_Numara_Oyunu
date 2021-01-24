#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

/*
1)KULLANICI SAYILARI GÝRECEK 10 TANE (1-80 ARASINDA)(HEPSÝ BÝRBÝRÝNDEN FARKLI OLACAK,AYNI SAYI YAZILDIÐINDA LÝSTE ÇÖPE ATILACAK YENÝSÝ ÝSTENECEK.) +
2)PROGRAM 1-80 ARASINDA 22 TANE SAYI SEÇECEK (HEPSÝ BÝRBÝRÝNDEN FARKLI OLACAK,LÝSTE ÝÇÝNDE AYNI SAYI VARSA PAS GEÇECEK,YENÝSÝ SEÇÝLECEK) +
3)KULLANICI SAYILARIYLA PROGRAM SAYILARI KARÞILAÞTIRILACAK VE AYNI OLAN SAYILAR YENÝ BÝR LÝSTE ÝÇÝNE EKLENECEK. +
4)BU LÝSTE LENGTH ÝLE KONTROL EDÝLECEK VE DURUMA GÖRE KAZANIP KAZANMADIÐI BELÝRLENECEK.
5)KAZANMA TABLOSU: 
*0 ÝSE KAZANDI
*O DAN BÜYÜK 6 DAN KÜÇÜK ÝSE KAYBETTÝ
*6 VE 10 ARASI (6-10 DAHÝL) KAZANDI
*/
                                                                                                                        
int main(){
 
 	int i;
 	int kul[10];
 	 basss:
 	printf("ON NUMARA OYUNUNA HOSGELDINIZ.\n\n");
 	
 	 bas:
 	 	 
	for(i=0;i<10;i++){
		
		printf("\n%d.tahmininizi giriniz:",i+1);
		scanf("%d",&kul[i]);
		
		if(kul[i]>80 || kul[i]==kul[i-1] || kul[i]==kul[i-2] || kul[i]==kul[i-3] || kul[i]==kul[i-4] || kul[i]==kul[i-5] || kul[i]==kul[i-6] || kul[i]==kul[i-7] || kul[i]==kul[i-8] || kul[i]==kul[i-9]){
			printf("HATALI TAHMIN GIRILDI.\nVEYA AYNI SAYIYI GIRDINIZ.\nTEKRAR BASLAYINIZ.\n\n");
			goto bas;
			
			
		}
		
	}
	
 		printf("\n\nTAHMINLERINIZ KAYDEDILDI.\n\n");
 		
 		printf("DEVAM ETMEK ICIN ENTER'A BASINIZ.\n\n");
 		
 		getch();
 	
 	int prog[22];
 	
 	srand(time(NULL));
 	
 	printf("PROGRAM SAYILARI:");
 	
 	for(i=0;i<22;i++){ 
 		bass:
 			
 		prog[i]= rand()% 79+1;
 		
 		if(prog[i]>80 || prog[i]==prog[i-1] || prog[i]==prog[i-2] || prog[i]==prog[i-3] || prog[i]==prog[i-4] || prog[i]==prog[i-5] || prog[i]==prog[i-6] || prog[i]==prog[i-7] || prog[i]==prog[i-8] || prog[i]==prog[i-9] || prog[i]==prog[i-10] || prog[i]==prog[i-11] || prog[i]==prog[i-12] || prog[i]==prog[i-13] || prog[i]==prog[i-14] || prog[i]==prog[i-15] || prog[i]==prog[i-16] || prog[i]==prog[i-17] || prog[i]==prog[i-18] || prog[i]==prog[i-19] || prog[i]==prog[i-20] || prog[i]==prog[i-21]){
 			
 			goto bass;
		 }
		 else{
		 	
		 	printf(" %d",prog[i]); 
		 }
	 }
	 
 	 int tutanlar[10];
 	 
 	 int x,length=0;
 	 
 	 printf("\n\nTUTAN SAYINIZ VEYA SAYILARINIZ: ");
 	 
 	 for(i=0;i<10;i++){
 	 	
 	 	for(x=0;x<22;x++){
 	 		
 	 		if(kul[i]==prog[x]){
 	 			
 	 			tutanlar[i]=prog[x];
 	 			printf("%d ",tutanlar[i]);
 	 			length++;
			  }
 	 		
		  }
 	 	
	  }
	  printf("\n\nKAC SAYI TUTTURDUGUNUZ BURADA GOZUKMEKTEDIR: %d SAYI",length);
	  
	  if(length==0||length>=6){
	  	
	  	printf("\n\nTEBRIKLER KAZANDINIZ.\n\n");
	  	
	  }
	  
	  else{
	  	
	  	printf("\n\nMAALESEF KAYBETINIZ.\n\n");
	  	
	  }
	  
	  int a;
	  printf("TEKRAR OYNAMAK ISTER MISINIZ?\n");
	  printf("\nEVET ICIN 1'E BASINIZ..\n");
	  printf("HAYIR ISE HERHANGI BIR TUSA BASMANIZ YETERLIDIR\n");
	  scanf("%d",&a);
	  
	  if(a==1){
	  	goto basss;
	  }

	return 0;
}
