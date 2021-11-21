//Mehmet Yusuf Sezgi - 21181616032//

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*git activated*/

int main(int argc, char *argv[]) {

	int scm1, scmsorgu, scmsorgu1, scmsorgu2, scm2;
	float fyt;
	char scmsorguA;
	fyt = 0;
	
	printf("Magazamiza hos geldiniz.");
	do{
	printf("\n1- Urun ve fiyat sorgula\n2- Sepete urun ekle\n3- Siparis tamamla\n4- Sonlandir\n\nSeciminiz : ");
	scanf("%d", &scm1);
	
	switch(scm1)
	{
		case 1:{do{
				printf("\nHangi kategoriden urun sorgulamak istiyorsunuz?\n1- Akilli telefon\n2- Akilli saat\n3- Yazici\n4- Bilgisayar\n\nSeciminiz : ");
				scanf("%d", &scmsorgu1);
				switch(scmsorgu1){
					case 1:{printf("\n1- Akilli telefon 1 = 1500TL\n2- Akilli telefon 2 = 2750TL\n3- Akilli telefon 3 = 8832TL\n\n(A/a)- Baska kategori urunleri sorgula\n(B/b)- Ana menuye don\n\nSeciminiz : ");
							scanf("%s", &scmsorguA);break;}
					case 2:{printf("\n1- Akilli saat 1 = 543.99TL\n2- Akilli saat 2 = 1324.50TL\n3- Akilli saat 3 = 850TL\n\n(A/a)- Baska kategori urunleri sorgula\n(B/b)- Ana menuye don\n\nSeciminiz : ");
							scanf("%s", &scmsorguA);break;}
					case 3:{printf("\n1- Yazici A = 553.50TL\n2- Yazici B = 848.20TL\n3- Yazici C = 1433.33TL\n\n(A/a)- Baska kategori urunleri sorgula\n(B/b)- Ana menuye don\n\nSeciminiz :  ");
							scanf("%s", &scmsorguA);break;}
					case 4:{printf("\n1- Bilgisayar X = 14600TL\n2- Bilgisayar Y = 12964TL\n3- Bilgisayar Z = 22920TL\n4- Bilgisayar Q = 36123TL\n\n(A/a)- Baska kategori urunleri sorgula\n(B/b)- Ana menuye don\n\nSeciminiz : ");
							scanf("%s", &scmsorguA);break;}
					default :{printf("\nSeciminiz yanlisdir.");break;}
				}
			}while(scmsorguA == 'A'||scmsorguA == 'a');
			break;}
		case 2:{do{
				printf("\nHangi kategoriden urun eklemek istiyorsunuz?\n1- Akilli telefon\n2- Akilli saat\n3- Yazici\n4- Bilgisayar\n\nSeciminiz : ");
				scanf("%d", &scmsorgu2);
				switch(scmsorgu2){
					case 1:{printf("\nAkilli telefon kategorisinden hangi telefonu almak istiyorsunuz?\n1- Akilli telefon 1 = 1500TL\n2- Akilli telefon 2 = 2750TL\n3- Akilli telefon 3 = 8832TL\n\n(B/b)- Ana menuye don\n\nSeciminiz : ");
							scanf("%d", &scm2);
							switch(scm2)
							{
								case 1:{fyt = fyt + 1500;break;}
								case 2:{fyt = fyt + 2750;break;}
								case 3:{fyt = fyt + 8832;break;}
								default :{printf("\nSeciminiz yanlisdir.");break;}
							}break;}
					case 2:{printf("\nAkilli saat kategorisinden hangi saati almak istiyorsunuz?\n1- Akilli saat 1 = 543.99TL\n2- Akilli saat 2 = 1324.50TL\n3- Akilli saat 3 = 850TL\n\n(B/b)- Ana menuye don\n\nSeciminiz : ");
							scanf("%d", &scm2);
							switch(scm2)
							{
								case 1:{fyt = fyt + 543.99;break;}
								case 2:{fyt = fyt + 1324.50;break;}
								case 3:{fyt = fyt + 850;break;}
								default :{printf("\nSeciminiz yanlisdir.");break;}
							}break;}
					case 3:{printf("\nYazici kategorisinden hangi yaziciyi almak istiyorsunuz?\n1- Yazici A = 553.50TL\n2- Yazici B = 848.20TL\n3- Yazici C = 1433.33TL\n\n(B/b)- Ana menuye don\n\nSeciminiz : ");
							scanf("%d", &scm2);
							switch(scm2)
							{
								case 1:{fyt = fyt + 553.50;break;}
								case 2:{fyt = fyt + 848.20;break;}
								case 3:{fyt = fyt + 1433.33;break;}
								default :{printf("\nSeciminiz yanlisdir.");break;}
							}break;}
					case 4:{printf("\nBilgisayar kategorisinden hangi bilgisayari almak istiyorsunuz?\n1- Bilgisayar X = 14600TL\n2- Bilgisayar Y = 12964TL\n3- Bilgisayar Z = 22920TL\n4- Bilgisayar Q = 36123TL\n\n(B/b)- Ana menuye don\n\nSeciminiz : ");
							scanf("%d", &scm2);
							switch(scm2)
							{
								case 1:{fyt = fyt + 14600;break;}
								case 2:{fyt = fyt + 12964;break;}
								case 3:{fyt = fyt + 22920;break;}
								case 4:{fyt = fyt + 36123;break;}
								default :{printf("\nSeciminiz yanlisdir.");break;}
							}break;}
							default :{printf("\nSeciminiz yanlisdir.");break;}
							break;}
					printf("\nToplam sepet tutariniz : %.2fTL", fyt);
					printf("\nC/c- Sepete urun ekle\nB/b- Ana menuye don\nD/d- Alisverisi sonlandir\n\nSeciminiz : ");
					scanf("%s", &scmsorguA);
					if(scmsorguA == 'D'||scmsorguA == 'd'){printf("Toplam ucret : %.2f", fyt);return 0;}
					}while(scmsorguA == 'C'||scmsorguA == 'c');break;}
		case 3:{printf("\nToplam ucret : %.2fTL", fyt); return 0;break;}
		case 4:{return 0;break;}
		default :{printf("\nSeciminiz yanlisdir.");break;}
	}
	}while(scmsorguA == 'B'||scmsorguA == 'b');
	return 0;
}
