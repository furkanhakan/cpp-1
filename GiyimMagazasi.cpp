// GİYİM MAĞAZASI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>

using namespace std;
void urunekle()
{ 
	int urunkodu,urunsayisi;
string urunismi;
fstream dosya;
dosya.open("urun.txt",ios::out|ios::in|ios::app);

cout<<endl;	
cout<<"				Ürün Kodunu Giriniz:";
cin>>urunkodu;
cout<<"				Ürün İsmi Giriniz:";
cin>>urunismi;
cout<<"				Ürün Sayısını Giriniz:";

cin>>urunsayisi;

dosya<<urunkodu<<" "<<urunismi<<" "<<urunsayisi<<" "<<endl;
cout<<endl;
cout<<"				İşleminiz Başarıyla Gerçekleştirilmiştir."<<endl;
dosya.close();


}
string durum;
void urunstok()

{   int kod;

	int urunkodu,urunsayisi;
string urunismi;
	
	fstream dosya;
dosya.open("urun.txt",ios::out|ios::in|ios::app);
	while(dosya>>urunkodu>>urunismi>>urunsayisi)
	{
	cout<<endl;
	cout<<"			"<<urunkodu<<"  "<<"Kodlu"<<" "<<urunismi<<"  "<<"	Ürününden"<<"	"<<urunsayisi<<"		"<<"Adet Bulunmaktadır."<<endl;
	
	}

dosya.close();
cout<<endl;
cout<<"				Hangi Ürünü Görmek İstiyorsunuz?:";

cin>>kod;
dosya.open("urun.txt",ios::out|ios::in|ios::app);
	while(dosya>>urunkodu>>urunismi>>urunsayisi)
	{
	

	if (kod==urunkodu)
		
	{
		if(urunsayisi==0)
			durum="				Stokta  Bulunmamaktadr. (-)";
		else
			durum="				Stokta Bulanmaktadır. (+)";
		
		cout<<"				"<<urunkodu<<" "<<"Kodlu"<<" "<<urunismi<<" "<<"Ürününden"<<" "<<urunsayisi<<" "<<"Adet vardır."<<endl<<durum<<endl;


	}



	}



}


void urunsilme()
{   int no;
cout<<endl;
	cout<<"				Silmek İstediğiniz Ürün  Numarasını Giriniz:";
	
	cin>>no;
		int urunkodu,urunsayisi;
string urunismi;
fstream dosya;
dosya.open("urun.txt",ios::out|ios::in|ios::app);
fstream dosyasil;
dosyasil.open("urunsil.txt",ios::out|ios::in|ios::app);

while(dosya>>urunkodu>>urunismi>>urunsayisi)
{

	if(urunkodu==no)
	{
	}
	else
	{
dosyasil<<urunkodu<<" "<<urunismi<<" "<<urunsayisi<<" "<<endl;

	}
	
}

cout<<"				İşleminiz Başarıyla Gerçekleştirilmiştir."<<endl;
dosyasil.close();
dosya.close();
remove("urun.txt");

rename("urunsil.txt","urun.txt");
}
void urunguncelle()
{
 int no;
 cout<<endl;
	cout<<"				Güncellemek İstediğiniz Ürün Numarasını Giriniz:";
	cin>>no;
		int urunkodu,urunsayisi;

string urunismi;
fstream dosya;
dosya.open("urun.txt",ios::out|ios::in|ios::app);
fstream dosyaguncelle;
dosyaguncelle.open("urunguncelle.txt",ios::out|ios::in|ios::app);

while(dosya>>urunkodu>>urunismi>>urunsayisi)
{

	if(urunkodu!=no)
	{ 
		dosyaguncelle<<urunkodu<<" "<<urunismi<<" "<<urunsayisi<<endl;

	}
	else
	{

dosyaguncelle<<urunkodu<<" "<<urunismi<<" "<<urunsayisi-20<<" "<<endl;

	}
	
}
cout<<"				İşleminiz Başarıyla Gerçekleştirilmiştir.(+)"<<endl;
dosyaguncelle.close();
dosya.close();
remove("urun.txt");

rename("urunguncelle.txt","urun.txt");


}


void personalekle()
{ 
	string personaladi,personalsoyadi;
	int personalno,personalmaas;
	fstream dosya;
dosya.open("personal.txt",ios::out|ios::in|ios::app);
cout<<endl;
cout<<"				Personal Numarasını Giriniz:";
cin>>personalno;
cout<<"				Personal Adını Giriniz:";
cin>>personaladi;
cout<<"				Personal Soyismini Giriniz:";
cin>>personalsoyadi;
cout<<"				Personal Maaşını Giriniz:";
cin>>personalmaas;
dosya<<personalno<<" "<<personaladi<<" "<<personalsoyadi<<" "<<personalmaas<<" "<<endl;
cout<<"				İşleminiz Başarıyla Gerçekleştirilmiştir."<<endl;
dosya.close();


}
void personalgoruntule()
{ 

	string personaladi,personalsoyadi;
	int personalno,personalmaas;
		fstream dosya;
dosya.open("personal.txt",ios::out|ios::in|ios::app);
while(dosya>>personalno>>personaladi>>personalsoyadi>>personalmaas)
{
		cout<<endl;
	cout<<"			"<<personalno<<"	 "<<"Kodlu"<<"  "<<personaladi<<"  "<<personalsoyadi<<"	"<<"Adlı Personel"<<"  " <<personalmaas<<" Tl Maaş Almaktadır "<<endl;
	
}
cout<<endl;
cout<<"				İşleminiz Başarıyla Gerçekleştirilmiştir."<<endl;
dosya.close();


}
void personalsil()
{ 
	int no;

	string personaladi,personalsoyadi;
	int personalno,personalmaas;
		fstream dosya;

	dosya.open("personal.txt",ios::out|ios::in|ios::app);

	fstream dosyasil;
	dosyasil.open("personalsil.txt",ios::out|ios::in|ios::app);
	cout<<endl;
	cout<<"				Silmek İstediginiz Personal Numarasini Giriniz:";
	cin>>no;
	while(dosya>>personalno>>personaladi>>personalsoyadi>>personalmaas)
	{
		if(no==personalno)
		{
			
		}
		else
		{
			dosyasil<<personalno<<" "<<personaladi<<" "<<personalsoyadi<<" "<<personalmaas<<" "<<endl;
		}

	}
	dosya.close();
	dosyasil.close();
	remove("personal.txt");
	rename("personalsil.txt","personal.txt");
	cout<<endl;
    cout<<"				İşleminiz Başarıyla Gerçekleştirilmiştir.";
	cout<<endl;
}
void personalguncelle()
{

	
	int no;

	string personaladi,personalsoyadi;
	int personalno,personalmaas;
		fstream dosya;

	dosya.open("personal.txt",ios::out|ios::in|ios::app);

	fstream dosyaguncelle;
	dosyaguncelle.open("personalguncelle.txt",ios::out|ios::in|ios::app);
	cout<<endl;
	cout<<"				Güncellemek İstediginiz Personal Numarasini Giriniz:";
	cin>>no;
	while(dosya>>personalno>>personaladi>>personalsoyadi>>personalmaas)
	{
		if(personalno!=no)
		{
			dosyaguncelle<<personalno<<" "<<personaladi<<" "<<personalsoyadi<<" "<<personalmaas<<" "<<endl;
		}
		else
		{
			dosyaguncelle<<personalno<<" "<<personaladi<<" "<<personalsoyadi<<" "<<personalmaas+100<<" "<<endl;
		}

	}
	dosya.close();
	dosyaguncelle.close();
	remove("personal.txt");
	rename("personalguncelle.txt","personal.txt");



}


int _tmain(int argc, _TCHAR* argv[])
{ setlocale(LC_ALL, "Turkish");
	 cout<<"						G & G  "<<endl<<endl;
	 
	 int secim=0;
	char devam;
a:
	
	cout<<endl;
	cout<<"				ÜRÜN İŞLEMLERİNİ SEÇMEK İÇİN 1:"<<endl<<"				PERSONEL BİLGİLERİNİ SEÇMEK İÇİN 2:"<<endl;
	cout<<" ";
	cout<<"	  			HANGİ İŞLEMİ YAPMAK İSTİYORSUNUZ?";
	

					
	cin>>secim;
	if(secim==1)
		
	{    cout<<endl;
		 cout<<"				ÜRÜN EKLEMEK İÇİN  1:"<<endl<<"				STOK BİLGİSİ GÖRÜNTÜLEMEK İÇİN 2:"<<endl;
		 cout<<"				ÜRÜN SİLMEK İÇİN 3:"<<endl<<"				ÜRÜN GÜNCELLEMEK İÇİN 4:";
		 
		cin>>secim;
		if(secim==1)
		{
			urunekle();



		}
		else if(secim==2)
		{
	
		urunstok();
	

	
		}

		else if(secim==3)
		{
			urunsilme();
		}
		else if (secim==4)

		{
			urunguncelle();

		}
		cout<<endl;
	}
	else if(secim==2)
	{   cout<<endl;
		cout<<"				PERSONAL EKLEME İŞLEMLERİ İÇİN 1:"<<endl<<"				PERSONAL GÖRÜNTÜLEME İŞLEMLERİ İÇİN 2:"<<endl;
		cout<<"				PERSONAL SİLME İŞLEMLERİ İÇİN 3:"<<endl<<"				PERSONEL BİLGİLERİNİ GÜNCELLEMEK İÇİN 4:"<<endl;
	    cout<<endl;
		cout<<"				YAPMAK İSTEDİĞİNİZ İŞLEMİ SEÇİNİZ:";
		cin>>secim;
		if(secim==1)
			personalekle();

		else if(secim==2)
			personalgoruntule();
		else if(secim==3)
			personalsil();
		else if(secim==4)
		{
			personalguncelle();

			}
	
	}
	cout<<endl;
	
	cout<<"				DEVAM ETMEK İSTİYOR MUSUNUZ ?(E,e)";
	
	cin>>devam;
	if (devam=='E'|| devam=='e')
	{
		goto a;
	}
	
	return 0;
}


