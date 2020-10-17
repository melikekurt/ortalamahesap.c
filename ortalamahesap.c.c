/* Bu program not yüzdeliklerinden dönem sonu notunu hesaplar.




  */
  #include<stdio.h>
  int main(){
  	int lab,odev,final_notu,proje;
  	printf("Lutfen lab notunuzu girin\n");
  	scanf("%d",&lab);
  	printf("Lutfen odev notunuzu giriniz\n");
  	scanf("%d",&odev);
  	printf("Lutfen final notunuzu girin\n");
  	scanf("%d",&final_notu);
  	printf("Lutfen proje notunuzu girin\n");
  	scanf("%d",&proje);

  	int sonuc=(lab*0.1)+(odev*0.1)+(final_notu*0.4)+(proje*0.6)/4;
    printf("%d",sonuc);
  	
  	
  	
  	
  	
  	
  	
  	return 0 ;
  }
