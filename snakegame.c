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
	45,45,45,45,45,45,45,45,45,45,45,45};			//tahtam�z� decimal boyutta belirtiyoruz.2 boyutlu dizi oldu�u i�in 12*12=144 tane eleman�z var.
	int i,j,yilan=88,a,b,k,l,can=3;			// cani 3 e e�itliyoruz bu sayede 3 kere �lme hakk�m�z oluyor. yilanida decimal tabloda X'in kar��l��� gelen de�ere e�itliyoruz.
	
	time_t start,end;
	time (&start);			// zaman� ba�lat�yoruz.
	srand(time(NULL));		

    a=random(1, 10);		//a ya 1 la 10 aras�nda bir de�er at�yoruz say�y� 1 le 10 aras�nda al�yoruz ��nk� tablomuz 12x12 k��elerde ve �stte olmamas� laz�m
    b=random(1,10);			// b ye de 1 la 10 aras�nda bir de�er at�yoruz.random fonksiyonunu kullanarak
    tahta[a][b]=yilan;		//yilani tahtanin a ve b sindeki yerine e�itliyoruz.
	
	
	printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.\n");
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			printf("%c",tahta[i][j]);				//ascii tablosundan decimale kar��l�k gelen charlar� yazd�r�yor.
		}
		printf("\n");
	}

	char tus1;
	while(1)
	{
		
		if(can>0){			// can 0 dan b�y�kse oyunu oynayabilir.
		
		
		
		tus1=_getch();				// bir tu�a bas�l�yor ve onu tus1 e kaydediyoruz.
		
		/*-----Yukar�ya hareket ettirmek i�in*/
		if(tus1=='w'){
			system("cls");				//ekrandaki her�eyi temizliyoruz.
			tahta[a][b]=46;  			// y�lan�n oldu�u a ve b noktas�n� . simgesine d�n��t�r�yoruz
			a=a-1;						// yilan� yukar� ��karmak i�in 1 eksiltiyoruz
			tahta[a][b]=yilan;
			
				
				
			printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.\n");
			for(i=0;i<12;i++){
				for(j=0;j<12;j++){
			printf("%c",tahta[i][j]);				//ascii tablosundan decimale kar��l�k gelen charlar� yazd�r�yor.
			}
			printf("\n");
				}
			
			

		}
		
		/*-----Asa��ya hareket ettirmek i�in*/	
		
		else if(tus1=='s'){
			system("cls");				//ekrandaki her�eyi temizliyoruz.
			tahta[a][b]=46;  			// y�lan�n oldu�u a ve b noktas�n� . simgesine d�n��t�r�yoruz
			a=a+1;						// yilan� a�a�� indirmek  i�in 1 art�r�yoruz.
			tahta[a][b]=yilan;		
			
			// tekrardan ekrana yazd�r�yoruz.
			printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.\n");
			for(i=0;i<12;i++){
				for(j=0;j<12;j++){
			printf("%c",tahta[i][j]);				//ascii tablosundan decimale kar��l�k gelen charlar� yazd�r�yor.
			}
			printf("\n");
				}
			}
		
		/*-----Sa�a hareket ettirmek i�in*/	
		
		else if(tus1=='d'){
			system("cls");				//ekrandaki her�eyi temizliyoruz.
			tahta[a][b]=46;  			// y�lan�n oldu�u a ve b noktas�n� . simgesine d�n��t�r�yoruz
			b=b+1;						// yilan� sa�a hareket etmesi i�in b yi 1 art�r�yoruz.
			tahta[a][b]=yilan;		
			
			// tekrardan ekrana yazd�r�yoruz.
			printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.\n");
			for(i=0;i<12;i++){
				for(j=0;j<12;j++){
			printf("%c",tahta[i][j]);				//ascii tablosundan decimale kar��l�k gelen charlar� yazd�r�yor.
			}
			printf("\n");
				}
			}
		
		/*-----Sola hareket ettirmek i�in*/	
		
		else if(tus1=='a'){
			system("cls");				//ekrandaki her�eyi temizliyoruz.
			tahta[a][b]=46;  			// y�lan�n oldu�u a ve b noktas�n� . simgesine d�n��t�r�yoruz
			b=b-1;						// yilan� sola hareket etmesi i�in b yi 1 azalt�yoruz.
			tahta[a][b]=yilan;		
			
			// tekrardan ekrana yazd�r�yoruz.
			printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.\n");
			for(i=0;i<12;i++){
				for(j=0;j<12;j++){
			printf("%c",tahta[i][j]);				//ascii tablosundan decimale kar��l�k gelen charlar� yazd�r�yor.
			}
			printf("\n");
				}
			}
			else if(tus1=='q'||tus1=='Q'){		// q ya yada Q ya bast���nda oyundan ��k�yor.
				break;
			}
			
			if(tahta[a][b]==tahta[6][6]){		//yemimiz 6 ya 6 da e�er tahtan�n a ve b si 6 ya 6 ya e�it olursa kazan�r�z.
				
				time (&end);
				double diff=difftime (end,start);
				if(diff<=120){			// oyunu 120 saniye i�inde bitirdiyse kazand�n�z yazd�r�yoruz.
				
				printf("Oyun Basarili bir sekilde tamamlandi.\n");
				printf("Gecen sure %.2lf .\n",diff);
				diff=0;		// yeni oyun i�in zaman� s�f�rl�yoruz.
				time (&start);			// ve zaman� yeniden ba�lat�yoruz.
				}
				else{			// e�er 120 saniye i�inde oyunu bitirememi�se kaybettiniz yazd�r�yoruz.
				
				printf("Oyun Bitti Basarisiz.\n");
				printf("Gecen sure %.2lf .",diff);				// zaman� yazd�r�yoruz.
				diff=0;					// yeni oyun i�in zaman� s�f�rl�yoruz.
				time (&start);			// ve zaman� yeniden ba�lat�yoruz.
				}
				printf("Oyuna devam etmek icin bir tusa basin\ncikmak icin Q yada q ya basiniz.");
				_getch();	// bir tusa basilip bas�lmad���n� kontrol eder
				
				can=3;			// cani tekrardan 3 e e�itliyoruz.
				system("cls");							// ekran� temizleyip her�eyi yeniden yapt�r�yoruz	
				srand(time(NULL));
				
				tahta[a][b]=42; // y�lan�n oldu�u yer X �eklinde kalmas�n diye y�lan�n a ve b sini nokta kalmas�n diye y�ld�za e�itliyoruz.
    			a=random(1, 10);		
    			b=random(1,10);			// yeniden random bir atama yap�yoruz.
    			tahta[a][b]=yilan;		
	
	
				printf("Yilan Oyununa Hosgeldiniz.Hareket icin wasd tuslarini kullanin.Kalan Hakkiniz %d \n",can);
				for(i=0;i<12;i++){
				for(j=0;j<12;j++){
				printf("%c",tahta[i][j]);				
					}
				printf("\n");
				}
				
				
			}
			if((b==0)|| (b==11)){			// e�er 0. sat�ra veya 11.sat�ra ge�ersek oyun biter.
				printf("Yandiniz");
				can=can-1;
				/* Y�lan k��elere �arpt���nda ve ordan ��kt���nda oras� nokta olarak kal�cak bunu d�zeltmek ve yeniden hak vermek i�in s�f�rl�yoruz.
				ve randomla yeni bir yer de do�duruyoruz*/
				srand(time(NULL));
				system("cls");
				tahta[a][b]=124; // y�lan�n oldu�u yer X �eklinde kalmas�n diye y�lan�n a ve b sini nokta kalmas�n diye tireye e�itliyoruz.
    			a=random(1, 10);		// yeniden random bir atama yap�yoruz.
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
			else if(a==0||a==11){			// e�er 0. veya 11. s�tuna ge�ersek can�m�z eksilir.
				printf("Yandiniz");
				can=can-1;							// can�m�z� 1 azalt�yoruz.
				/* Y�lan k��elere �arpt���nda ve ordan ��kt���nda oras� nokta olarak kal�cak bunu d�zeltmek ve yeniden hak vermek i�in s�f�rl�yoruz.
				ve randomla yeni bir yer de do�duruyoruz*/
				srand(time(NULL));
				system("cls");
				tahta[a][b]=45; // y�lan�n oldu�u yer X �eklinde kalmas�n diye y�lan�n a ve b sini nokta kalmas�n diye tireye e�itliyoruz.
    			a=random(1, 10);		
    			b=random(1,10);			// random bir de�er at�yoruz yeniden.
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
		
		else{			// can�m�z 0 oldu�undan oyunu kaybediyoruz.
			printf("Kaybettiniz.");
			break;
		}
	}
				
	return 0;
}




