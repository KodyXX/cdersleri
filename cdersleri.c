#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Diğer dilleri kapsamak için

int main()
{
    adim1: setlocale (LC_ALL, "Turkish" ); // Türkçe karakterler kullanabilmek için
    adim2: selam(); projKonusu (); // Ekrana mesaj yazdırmak için
    adim3: guvenlik (); // While ve scanf komutları ile kullanıcıdan bilgi almak için tanımlama yapıyoruz
    adim4: dogumyili (); //Bilgi alıp for ile döngü kuracağız
    adim5: kareHesapla (); // Parametreli fonksiyon çağırma




    return 0;
}

void selam ()
{
    printf ("Emre KODAZ\n");
    printf ("Ogrenci Numaram: 210709013\n");
    printf ("Kırıkkale MYO\n");
    printf ("Kontrol ve Otomasyon Teknolojisi\n");
    printf ("C Programlama Dersi\n");



}
 void projKonusu()
 {


   printf ("C de fonksiyonlar ile çalışma\n");



 }


 void guvenlik ()

 {

  while (1)

  {

    int a=rand (); // While döngüsüne rastgele bir sayı tanımlıyoruz
    printf ("%d Sayısının 2 Fazlasını Gir:",a);
    int b;
    scanf ("%d",&b);
    if (a==(b-2)) //Kullanıcıdan girdiği sayıdan if komutu ile karşılaştırma yapıyoruz

    { printf("Teyit Başarılı... Devam Ediniz.\n");
    break; }  // Komut doğru girildi ise break komutu ile while döngüsüne çıkış yapmış oluyoruz

    else //eğer komutudur
        {


          printf("\a İnsan Olduğunuzu Kanıtlamalısınız :\)\n");


        }

}

}


void dogumyili ()

{


    int dogumyili,yas;
    a1: printf ("Doğum Yılınızı Giriniz:");
    scanf ("%d",&dogumyili);
    yas=2021-dogumyili;
    if (dogumyili<1920||dogumyili>2020)


    {



        printf("Emin misin Tekrar Dene \n");
        goto a1;
    } else if (dogumyili>2010)

    {


        printf("Yaşın Tutmuyor Biraz Daha Bekle \n");


    }
    printf ("%d Yaşındasın \n \n",yas);
    for (int i=0; i<yas;i++)



    {


        printf ("%d Kere Maşallah \n", i+1);
    }







    }


void kareHesapla ()

{

    long int sayi;
    printf ("Karesini Hesaplayacağım Sayıyı Giriniz: ");
    scanf ("%d",&sayi);
    int karesi= kareFcn (sayi);
    printf("Girilen Sayının Karesi %d",karesi);
}
int kareFcn(int sayi)
{



    int sonuc=sayi*sayi;
    return sonuc;
}