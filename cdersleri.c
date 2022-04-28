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
    adim6: vizefinalhesapla (); // Vize ve Final Notumuzu Hesaplamak




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


void vizefinalhesapla ()

 {

  int vize , final; //Tanımını Yapıyoruz
  float ortalama; //Ortalama

  printf ("Vize ve Final Notunuzu Hesaplama \n"); // Ekrana Vize ve Final Notunuzu Hesaplama Diye Mesaj Veriyoruz
  printf ("Vize Notunuzu Giriniz: \n");           // Vize Notunuzu Giriniz Diye Mesaj Veriyoruz
  scanf ("%d",&vize);                             // scanf Komutu ile yazılan değeri vize olarak tanımlıyoruz
  printf ("Final Notunuzu Giriniz: \n");          // Final Notunuzu Giriniz Diye Mesaj Veriyoruz
  scanf ("%d",&final);                            // scanf Komutu ile yazılan değeri final olarak tanımlıyoruz


    ortalama = (vize * 0.4) + (final * 0.6);      // Ortalamanın Vizede %40 Finalde İse %60'ını Alsın Diye Tanımlıyoruz

    printf ("Ders Ortalamanız = %f \n ",ortalama); // Ekrana Ders Ortalamanızı Hesaplayan Mesajı Veriyoruz

    if (ortalama > 50)                             // Ortalamayı 50 Olarak Alsın Diye if İle Tanımlama Yapıyoruz

    {

      printf ("Dersten Geçtiniz. \n");             // Ekrana Dersten Geçtiniz Diye Mesaj Veriyoruz



}

else                                               // Eğer komutu

{



    printf ("\a Dersten Kaldınız. \n");          // Ekrana Dersten Kaldınız Diye Mesaj Veriyoruz


}







 }
