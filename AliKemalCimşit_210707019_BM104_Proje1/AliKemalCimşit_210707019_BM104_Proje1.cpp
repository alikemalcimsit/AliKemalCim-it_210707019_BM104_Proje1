
#include <stdio.h>
#include<locale.h>



struct Banknot // BAŞLANGIÇTA KASADA BULANAN BANKNOT SAYILARI 
{
	int Beslik_Banknot = 50;
	int Onluk_Banknot = 50;
	int Yirmilik_Banknot = 50;
	int Ellilik_Banknot = 20;
	int Yüzlük_Banknot = 10;
	 
};

int Mevcut_bakiye(int Beslik_Sayisi, int Onluk_Sayisi, int Yirmilik_Sayisi, int Ellilik_Sayisi, int Yüzlük_Sayisi);// KASADAKİ BAKİYEYİ BULAN FONKSİYONUN PROTOTİPİ

void Kasayı_göster(int Beslik_Sayisi, int Onluk_Sayisi, int Yirmilik_Sayisi, int Ellilik_Sayisi, int Yüzlük_Sayisi);// KASADAKİ BANKNOT SAYISINNI GÖSTEREN FONKSİYONUN PROTOTİĞ 

int main()
{
	setlocale(LC_ALL, "Turkish"); //TÜRKÇE KARAKTERLERİN EKRANA ÇIKMASI İÇİN LOCAL.H KÜTÜPHANESİ İLE BİRLİKTE EKLENMİŞTİR
	Banknot kasa;
	int Yatırılacak_Miktar = 0;
	int Cekilecek_Miktar = 0;
	int Yapılacak_Islem;
	printf(" \t \t \t MENÜ\n");
	printf("1  KASAYI GÖSTER\n");
	printf("2  PARA ÇEKME\n");
	printf("3  PARA YATIRMA\n");
	printf("4  ÇIKIŞ\n");
	printf("SEÇİMİNİZ : ");
	scanf_s("%d", &Yapılacak_Islem);

	while (true) // MENÜ İŞLEMLERİNİN TEKRARLANABİLİR OLMASI İÇİN WHİLE DÖNGÜSÜNE YAZILMIŞTIR
	{
		if (Yapılacak_Islem==1)// 1 DEĞERİ GİRİLİRSE PROJEDE BELİRTİLEN İŞLEMLER OLACAKTIR
		{
			Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
			Kasayı_göster(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);

			printf(" \t \t \t MENÜ\n");
			printf("1  KASAYI GÖSTER\n");
			printf("2  PARA ÇEKME\n");
			printf("3  PARA YATIRMA\n");
			printf("4  ÇIKIŞ\n");
			printf("SEÇİMİNİZ : ");
			scanf_s("%d", &Yapılacak_Islem);

			
		}
	
	
		if (Yapılacak_Islem==2) // 2 DEĞERİ GİRİLİRSE PROJEDE BELİRTİLEN İŞLEMLER OLACAKTIR
		{
			printf("ÇEKİLECEK MİKTAR : ");
			scanf_s("%d", &Cekilecek_Miktar);

			if (Cekilecek_Miktar < 5)// 5 TL DEN AZ MİKTAR ÇEKİLMEK İSTENİRSE
			{
				printf("SADECE 5 TL VE KATLARINI ÇEKEBİLİRSİNİZ\n");
			}
			//ÇEKİLECEK MİKTARI EN AZ SAYIDA BANKNOT İLE VEREBİLMEK İÇİN AŞAĞIDAKİ İŞLEMLER YAPILMIŞTIR
			
			
			if (Cekilecek_Miktar>=1000)// KASADA 10 TANE 100 TL BANKNOT OLDUĞU İÇİN YAZILDI ÇEKİLECEK MİKTAR 1000TL VE ÜZERİ OLDUĞUNDA ÇALIŞIR
			{
				
				int Verilecek_Yüzlük = 10;
				int Kalan1 = Cekilecek_Miktar - 1000;
			
				if (Kalan1 >= 1000)// KASADA 20 TANE 50 TL BANKNOT BULUNDUĞU İÇİN YAZILDI ÇEKİLECEK MİKTAR 2000TL VE ÜZERİ OLDUĞUNDA ÇALIŞIR
				{
					int Verilecek_Yüzlük = 10;
					int Kalan1 = Cekilecek_Miktar - 1000;
					int Verilecek_Ellilik = 20;
					int Kalan2 = Kalan1 - 1000;
					
					if (Kalan2>=1000)// KASADA 50 TANE 20 TL BANKNOT BULUNDUĞU İÇİN YAZILDI ÇEKİLECEK MİKTAR 3000TL VE ÜZERİ OLDUĞUNDA ÇALIŞIR
					{
						int Verilecek_Yüzlük = 10;
						int Kalan1 = Cekilecek_Miktar - 1000;
						int Verilecek_Ellilik = 20;
						int Kalan2 = Kalan1 - 1000;
						int Verilecek_Yirmilik = 50;
						int Kalan3 = Kalan2 - 1000;
						
						if (Kalan3>=500)// KASADA 50 TANE 10 TL BANKNOT BULUNDUĞU İÇİN YAZILDI ÇEKİLECEK MİKTAR 3500TL VE ÜZERİ OLDUĞUNDA ÇALIŞIR
						{
							int Verilecek_Yüzlük = 10;
							int Kalan1 = Cekilecek_Miktar - 1000;
							int Verilecek_Ellilik = 20;
							int Kalan2 = Kalan1 - 1000;
							int Verilecek_Yirmilik = 50;
							int Kalan3 = Kalan2 - 1000;
							int Verilecek_Onluk = 50;
							int Kalan4 = Kalan3 - 500;
							
							if (Kalan4>=250)// KASADA 50 TANE 5 TL BANKNOT OLDUĞU İÇİN YAZILDI ÇEKİLECEK MİKTAR 3750 TL VE KASADA PARA VARSA 3750 TL ÜZERİ OLDUĞUNDA ÇALIŞIR
							{
								int Verilecek_Yüzlük = 10;
								int Kalan1 = Cekilecek_Miktar - 1000;
								int Verilecek_Ellilik = 20;
								int Kalan2 = Kalan1 - 1000;
								int Verilecek_Yirmilik = 50;
								int Kalan3 = Kalan2 - 1000;
								int Verilecek_Onluk = 50;
								int Kalan4 = Kalan3 - 500;
								int Verilecek_Beslik = 50;
							

								printf("ÇEKİLEN MİKTAR : %d\n", Cekilecek_Miktar);
								Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
								//KALAN BANKNOT SAYILARININ HESABI
								kasa.Yüzlük_Banknot -= Verilecek_Yüzlük;
								kasa.Ellilik_Banknot -= Verilecek_Ellilik;
								kasa.Yirmilik_Banknot -= Verilecek_Yirmilik;
								kasa.Onluk_Banknot -= Verilecek_Onluk;
								kasa.Beslik_Banknot -= Verilecek_Beslik;
								printf("YENİ ");
								Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
							}
							else // ÇEKİLECEK MİKTAR 3500-3750 TL ARALIĞINDA  OLDUĞUNDA ÇALIŞIR
							{
								int Verilecek_Yüzlük = 10;
								int Kalan1 = Cekilecek_Miktar - 1000;
								int Verilecek_Ellilik = 20;
								int Kalan2 = Kalan1 - 1000;
								int Verilecek_Yirmilik = 50;
								int Kalan3 = Kalan2 - 1000;
								int Verilecek_Onluk = 50;
								int Kalan4 = Kalan3 - 500;
								int Verilecek_Beslik = Kalan4/5;
								
								printf("ÇEKİLEN MİKTAR : %d\n", Cekilecek_Miktar);
								Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
								//KALAN BANKNOT SAYILARININ HESABI
								kasa.Yüzlük_Banknot -= Verilecek_Yüzlük;
								kasa.Ellilik_Banknot -= Verilecek_Ellilik;
								kasa.Yirmilik_Banknot -= Verilecek_Yirmilik;
								kasa.Onluk_Banknot -= Verilecek_Onluk;
								kasa.Beslik_Banknot -= Verilecek_Beslik;
								printf("YENİ ");
								Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
							}
						}
						else// ÇEKİLECEK MİKTAR 3000-3500 TL ARALIĞINDA  OLDUĞUNDA ÇALIŞIR
						{
							int Verilecek_Yüzlük = 10;
							int Kalan1 = Cekilecek_Miktar - 1000;
							int Verilecek_Ellilik = 20;
							int Kalan2 = Kalan1 - 1000;
							int Verilecek_Yirmilik = 50;
							int Kalan3 = Kalan2 - 1000;
							int Verilecek_Onluk = Kalan3/10;
							int Kalan4 = Kalan3 - Verilecek_Onluk;
							int Verilecek_Beslik = Kalan4 / 5;

							printf("ÇEKİLEN MİKTAR : %d\n", Cekilecek_Miktar);
							Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
							//KALAN BANKNOT SAYILARININ HESABI
							kasa.Yüzlük_Banknot -= Verilecek_Yüzlük;
							kasa.Ellilik_Banknot -= Verilecek_Ellilik;
							kasa.Yirmilik_Banknot -= Verilecek_Yirmilik;
							kasa.Onluk_Banknot -= Verilecek_Onluk;
							kasa.Beslik_Banknot -= Verilecek_Beslik;
							printf("YENİ ");
							Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
						}
						
					}
					else// ÇEKİLECEK MİKTAR 2000 - 3000 TL ARALIĞINDA  OLDUĞUNDA ÇALIŞIR
					{
						int Verilecek_Yüzlük = 10;
						int Kalan1 = Cekilecek_Miktar - 1000;
						int Verilecek_Ellilik = 20;
						int Kalan2 = Kalan1 - 1000;
						int Verilecek_Yirmilik = Kalan2 / 20;
						int Kalan3 = Kalan2 - Verilecek_Yirmilik*20;
						int Verilecek_Onluk = Kalan3 / 10;
						int Kalan4 = Kalan3 - Verilecek_Onluk * 10;
						int Verilecek_Beslik = Kalan4 / 5;

						printf("ÇEKİLEN MİKTAR : %d\n", Cekilecek_Miktar);
						Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
						//KALAN BANKNOT SAYILARININ HESABI
						kasa.Yüzlük_Banknot -= Verilecek_Yüzlük;
						kasa.Ellilik_Banknot -= Verilecek_Ellilik;
						kasa.Yirmilik_Banknot -= Verilecek_Yirmilik;
						kasa.Onluk_Banknot -= Verilecek_Onluk;
						kasa.Beslik_Banknot -= Verilecek_Beslik;
						printf("YENİ ");
						Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
					}
						
				}
				else // ÇEKİLECEK MİKTAR 1000-2000 TL ARALIĞINDA  OLDUĞUNDA ÇALIŞIR
				{
					int Verilecek_Yüzlük = 10;
					int Kalan1 = Cekilecek_Miktar - 1000;
					int Verilecek_Ellilik = Kalan1 / 50;
					int Kalan2 = Kalan1 - Verilecek_Ellilik * 50;
					int Verilecek_Yirmilik = Kalan2 / 20;
					int Kalan3 = Kalan2 - Verilecek_Yirmilik * 20;
					int Verilecek_Onluk = Kalan3 / 10;
					int Kalan4 = Kalan3 - Verilecek_Onluk * 10;
					int Verilecek_Beslik = Kalan4 / 5;

					printf("ÇEKİLEN MİKTAR : %d\n", Cekilecek_Miktar);
					Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
					//KALAN BANKNOT SAYILARININ HESABI
					kasa.Yüzlük_Banknot -= Verilecek_Yüzlük;
					kasa.Ellilik_Banknot -= Verilecek_Ellilik;
					kasa.Yirmilik_Banknot -= Verilecek_Yirmilik;
					kasa.Onluk_Banknot -= Verilecek_Onluk;
					kasa.Beslik_Banknot -= Verilecek_Beslik;
					printf("YENİ ");
					Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
				}
				
			}
			else// ÇEKİLECEK MİKTAR 1000 TL DEN KÜÇÜK OLDUĞUNDA ÇALIŞIR
			{
				int Verilecek_Yüzlük = Cekilecek_Miktar / 100;
				int Kalan1 = Cekilecek_Miktar - Verilecek_Yüzlük * 100;
				int Verilecek_Ellilik = Kalan1 / 50;
				int Kalan2 = Kalan1 - Verilecek_Ellilik * 50;
				int Verilecek_Yirmilik = Kalan2 / 20;
				int Kalan3 = Kalan2 - Verilecek_Yirmilik * 20;
				int Verilecek_Onluk = Kalan3 / 10;
				int Kalan4 = Kalan3 - Verilecek_Onluk * 10;
				int Verilecek_Beslik = Kalan4 / 5;
			
				printf("ÇEKİLEN MİKTAR : %d\n", Cekilecek_Miktar);
				Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
				//KALAN BANKNOT SAYILARININ HESABI
				kasa.Yüzlük_Banknot -= Verilecek_Yüzlük;
				kasa.Ellilik_Banknot -= Verilecek_Ellilik;
				kasa.Yirmilik_Banknot -= Verilecek_Yirmilik;
				kasa.Onluk_Banknot -= Verilecek_Onluk;
				kasa.Beslik_Banknot -= Verilecek_Beslik;
				printf("YENİ ");
				Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
			}
			

			
			
			//TEKRAR MENÜYE DÖNMEK İÇİN YAZILAN KODLAR
			printf(" \t \t \t MENÜ\n");
			printf("1  KASAYI GÖSTER\n");
			printf("2  PARA ÇEKME\n");
			printf("3  PARA YATIRMA\n");
			printf("4  ÇIKIŞ\n");
			printf("SEÇİMİNİZ : ");

			scanf_s("%d", &Yapılacak_Islem);

		}
	
		if (Yapılacak_Islem==3) //3 DEĞERİ GİRİLİRSE PROJEDE BELİRTİLEN İŞLEMLER OLACAKTIR
		{
			printf("YATIRILACAK MİKTAR : ");
			scanf_s("%d", &Yatırılacak_Miktar);
			//YATIRILACAK MİKTARIN BANKNOTLARA BÖLÜMÜ
			int Verilecek_Yüzlük = Yatırılacak_Miktar / 100;
			int Kalan1 = Yatırılacak_Miktar - Verilecek_Yüzlük * 100;
			int Verilecek_Ellilik = Kalan1 / 50;
			int Kalan2 = Kalan1 - Verilecek_Ellilik * 50;
			int Verilecek_Yirmilik = Kalan2 / 20;
			int Kalan3 = Kalan2 - Verilecek_Yirmilik * 20;
			int Verilecek_Onluk = Kalan3 / 10;
			int Kalan4 = Kalan3 - Verilecek_Onluk * 10;
			int Verilecek_Beslik = Kalan4 / 5;

			printf("YATIRILAN MİKTAR  : %d\n", Yatırılacak_Miktar);
			Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);
			//EKLENEN BANKNOTLAR İLE KASADAKİ YENİ BANKNOT SAYISI BULUNMUŞTUR
			kasa.Yüzlük_Banknot += Verilecek_Yüzlük;
			kasa.Ellilik_Banknot += Verilecek_Ellilik;
			kasa.Yirmilik_Banknot += Verilecek_Yirmilik;
			kasa.Onluk_Banknot += Verilecek_Onluk;
			kasa.Beslik_Banknot += Verilecek_Beslik;
			printf("YENİ ");
			Mevcut_bakiye(kasa.Beslik_Banknot, kasa.Onluk_Banknot, kasa.Yirmilik_Banknot, kasa.Ellilik_Banknot, kasa.Yüzlük_Banknot);


			printf(" \t \t \t MENÜ\n");
			printf("1  KASAYI GÖSTER\n");
			printf("2  PARA ÇEKME\n");
			printf("3  PARA YATIRMA\n");
			printf("4  ÇIKIŞ\n");
			printf("SEÇİMİNİZ : ");

			scanf_s("%d", &Yapılacak_Islem);
		
		}
	
		if (Yapılacak_Islem==4)
		{
			printf("YİNE BEKLERİZ ...");
			break; // DÖNGÜDEN ÇIKIP PROGRAMIN BİTMESİ İÇİN YAPILMMIŞTIR
		}

	}


	return 0;
}


int Mevcut_bakiye(int Beslik_Sayisi, int Onluk_Sayisi, int Yirmilik_Sayisi, int Ellilik_Sayisi, int Yüzlük_Sayisi)// BANKNOT SAYISI İLE DEĞERLERİNİ ÇARPARAK KASADAKİ PARAYI BULUR
{

	int Mevcut_Bakiye = Beslik_Sayisi * 5 + Onluk_Sayisi * 10 + Yirmilik_Sayisi * 20 + Ellilik_Sayisi * 50 + Yüzlük_Sayisi * 100;
	printf("MEVCUT BAKİYE = %d\n", Mevcut_Bakiye);


	return Mevcut_Bakiye;

}


void Kasayı_göster(int Beslik_Sayisi, int Onluk_Sayisi, int Yirmilik_Sayisi, int Ellilik_Sayisi, int Yüzlük_Sayisi) //KASADAKİ BANKNOT SAYISINI GÖSTERİR
{



	printf("5 TL BANKNOT MİKTARI : %d\n", Beslik_Sayisi);
	printf("10 TL BANKNOT MİKTARI : %d\n", Onluk_Sayisi);
	printf("20 TL BANKNOT MİKTARI : %d\n", Yirmilik_Sayisi);
	printf("50 TL BANKNOT MİKTARI : %d\n", Ellilik_Sayisi);
	printf("100 TL BANKNOT MİKTARI : %d\n", Yüzlük_Sayisi);

}