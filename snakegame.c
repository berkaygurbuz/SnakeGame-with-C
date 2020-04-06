#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>


    int random(int min,int max){
    	
	int r=((rand () % (((max) + 1) - (min))) + (min));
	return r;
}

int main(void){
	int tahta[12][12]={45,45,45,45,45,45,45,45,45,45,45,45,
	124,46,46,46,46,46,46,46,46,46,46,124,
	124,46,46,46,46,46,46,46,46,46,46,124,
	124,46,46,46,46,46,46,46,46,46,46,124,
	124,46,46,46,46,46,46,46,46,46,46,124,
	124,46,46,46,46,46,46,46,46,46,46,124,
	124,46,46,46,46,46,42,46,46,46,46,124,
	124,46,46,46,46,46,46,46,46,46,46,124,
	124,46,46,46,46,46,46,46,46,46,46,124,
	124,46,46,46,46,46,46,46,46,46,46,124,
	124,46,46,46,46,46,46,46,46,46,46,124,
	45,45,45,45,45,45,45,45,45,45,45,45};			//tahtamýzý decimal boyutta belirtiyoruz.2 boyutlu dizi olduðu için 12*12=144 tane elemanýz var.
	int i,j,yilan=88,a,b,k,l,can=3;			// cani 3 e eþitliyoruz bu sayede 3 kere ölme hakkýmýz oluyor. yilanida decimal tabloda X'in karþýlýðý gelen deðere eþitliyoruz.
	
	time_t start,end;
	time (&start);			// zamaný baþlatýyoruz.
	srand(time(NULL));		

    a=random(1, 10);		//a ya 1 la 10 arasýnda bir deðer atýyoruz sayýyý 1 le 10 arasýnda alýyoruz çünkü tablomuz 12x12 köþelerde ve üstte olmamasý lazým
    b=random(1,10);			// b ye de 1 la 10 arasýnda bir deðer atýyoruz.random fonksiyonunu kullanarak
    tahta[a][b]=yilan;		//yilani tahtanin a ve b sindeki yerine eþitliyoruz.
	
	
	printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.\n");
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			printf("%c",tahta[i][j]);				//ascii tablosundan decimale karþýlýk gelen charlarý yazdýrýyor.
		}
		printf("\n");
	}

	char tus1;
	while(1)
	{
		
		if(can>0){			// can 0 dan büyükse oyunu oynayabilir.
		
		
		
		tus1=_getch();				// bir tuþa basýlýyor ve onu tus1 e kaydediyoruz.
		
		/*-----Yukarýya hareket ettirmek için*/
		if(tus1=='w'){
			system("cls");				//ekrandaki herþeyi temizliyoruz.
			tahta[a][b]=46;  			// yýlanýn olduðu a ve b noktasýný . simgesine dönüþtürüyoruz
			a=a-1;						// yilaný yukarý çýkarmak için 1 eksiltiyoruz
			tahta[a][b]=yilan;
			
				
				
			printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.\n");
			for(i=0;i<12;i++){
				for(j=0;j<12;j++){
			printf("%c",tahta[i][j]);				//ascii tablosundan decimale karþýlýk gelen charlarý yazdýrýyor.
			}
			printf("\n");
				}
			
			

		}
		
		/*-----Asaðýya hareket ettirmek için*/	
		
		else if(tus1=='s'){
			system("cls");				//ekrandaki herþeyi temizliyoruz.
			tahta[a][b]=46;  			// yýlanýn olduðu a ve b noktasýný . simgesine dönüþtürüyoruz
			a=a+1;						// yilaný aþaðý indirmek  için 1 artýrýyoruz.
			tahta[a][b]=yilan;		
			
			// tekrardan ekrana yazdýrýyoruz.
			printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.\n");
			for(i=0;i<12;i++){
				for(j=0;j<12;j++){
			printf("%c",tahta[i][j]);				//ascii tablosundan decimale karþýlýk gelen charlarý yazdýrýyor.
			}
			printf("\n");
				}
			}
		
		/*-----Saða hareket ettirmek için*/	
		
		else if(tus1=='d'){
			system("cls");				//ekrandaki herþeyi temizliyoruz.
			tahta[a][b]=46;  			// yýlanýn olduðu a ve b noktasýný . simgesine dönüþtürüyoruz
			b=b+1;						// yilaný saða hareket etmesi için b yi 1 artýrýyoruz.
			tahta[a][b]=yilan;		
			
			// tekrardan ekrana yazdýrýyoruz.
			printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.\n");
			for(i=0;i<12;i++){
				for(j=0;j<12;j++){
			printf("%c",tahta[i][j]);				//ascii tablosundan decimale karþýlýk gelen charlarý yazdýrýyor.
			}
			printf("\n");
				}
			}
		
		/*-----Sola hareket ettirmek için*/	
		
		else if(tus1=='a'){
			system("cls");				//ekrandaki herþeyi temizliyoruz.
			tahta[a][b]=46;  			// yýlanýn olduðu a ve b noktasýný . simgesine dönüþtürüyoruz
			b=b-1;						// yilaný sola hareket etmesi için b yi 1 azaltýyoruz.
			tahta[a][b]=yilan;		
			
			// tekrardan ekrana yazdýrýyoruz.
			printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.\n");
			for(i=0;i<12;i++){
				for(j=0;j<12;j++){
			printf("%c",tahta[i][j]);				//ascii tablosundan decimale karþýlýk gelen charlarý yazdýrýyor.
			}
			printf("\n");
				}
			}
			else if(tus1=='q'||tus1=='Q'){		// q ya yada Q ya bastýðýnda oyundan çýkýyor.
				break;
			}
			
			if(tahta[a][b]==tahta[6][6]){		//yemimiz 6 ya 6 da eðer tahtanýn a ve b si 6 ya 6 ya eþit olursa kazanýrýz.
				
				time (&end);
				double diff=difftime (end,start);
				if(diff<=120){			// oyunu 120 saniye içinde bitirdiyse kazandýnýz yazdýrýyoruz.
				
				printf("Oyun Basarili bir sekilde tamamlandi.\n");
				printf("Gecen sure %.2lf .\n",diff);
				diff=0;		// yeni oyun için zamaný sýfýrlýyoruz.
				time (&start);			// ve zamaný yeniden baþlatýyoruz.
				}
				else{			// eðer 120 saniye içinde oyunu bitirememiþse kaybettiniz yazdýrýyoruz.
				
				printf("Oyun Bitti Basarisiz.\n");
				printf("Gecen sure %.2lf .",diff);				// zamaný yazdýrýyoruz.
				diff=0;					// yeni oyun için zamaný sýfýrlýyoruz.
				time (&start);			// ve zamaný yeniden baþlatýyoruz.
				}
				printf("Oyuna devam etmek icin bir tusa basin\ncikmak icin Q yada q ya basiniz.");
				_getch();	// bir tusa basilip basýlmadýðýný kontrol eder
				
				can=3;			// cani tekrardan 3 e eþitliyoruz.
				system("cls");							// ekraný temizleyip herþeyi yeniden yaptýrýyoruz	
				srand(time(NULL));
				
				tahta[a][b]=42; // yýlanýn olduðu yer X þeklinde kalmasýn diye yýlanýn a ve b sini nokta kalmasýn diye yýldýza eþitliyoruz.
    			a=random(1, 10);		
    			b=random(1,10);			// yeniden random bir atama yapýyoruz.
    			tahta[a][b]=yilan;		
	
	
				printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.Kalan Hakkiniz %d \n",can);
				for(i=0;i<12;i++){
				for(j=0;j<12;j++){
				printf("%c",tahta[i][j]);				
					}
				printf("\n");
				}
				
				
			}
			if((b==0)|| (b==11)){			// eðer 0. satýra veya 11.satýra geçersek oyun biter.
				printf("Yandiniz");
				can=can-1;
				/* Yýlan köþelere çarptýðýnda ve ordan çýktýðýnda orasý nokta olarak kalýcak bunu düzeltmek ve yeniden hak vermek için sýfýrlýyoruz.
				ve randomla yeni bir yer de doðduruyoruz*/
				srand(time(NULL));
				system("cls");
				tahta[a][b]=124; // yýlanýn olduðu yer X þeklinde kalmasýn diye yýlanýn a ve b sini nokta kalmasýn diye tireye eþitliyoruz.
    			a=random(1, 10);		// yeniden random bir atama yapýyoruz.
    			b=random(1,10);			
    			tahta[a][b]=yilan;		
	
	
				printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.Kalan Hakkiniz %d \n",can);
				for(i=0;i<12;i++){
				for(j=0;j<12;j++){
				printf("%c",tahta[i][j]);				
					}
				printf("\n");
				}
			}
			else if(a==0||a==11){			// eðer 0. veya 11. sütuna geçersek canýmýz eksilir.
				printf("Yandiniz");
				can=can-1;							// canýmýzý 1 azaltýyoruz.
				/* Yýlan köþelere çarptýðýnda ve ordan çýktýðýnda orasý nokta olarak kalýcak bunu düzeltmek ve yeniden hak vermek için sýfýrlýyoruz.
				ve randomla yeni bir yer de doðduruyoruz*/
				srand(time(NULL));
				system("cls");
				tahta[a][b]=45; // yýlanýn olduðu yer X þeklinde kalmasýn diye yýlanýn a ve b sini nokta kalmasýn diye tireye eþitliyoruz.
    			a=random(1, 10);		
    			b=random(1,10);			// random bir deðer atýyoruz yeniden.
    			tahta[a][b]=yilan;		
	
	
				printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.Kalan Hakkiniz %d \n",can);
				for(i=0;i<12;i++){
				for(j=0;j<12;j++){
				printf("%c",tahta[i][j]);				
					}
				printf("\n");
				}
			}
		}
		
		else{			// canýmýz 0 olduðundan oyunu kaybediyoruz.
			printf("Kaybettiniz.");
			break;
		}
	}
				
	return 0;
}




