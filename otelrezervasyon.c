#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int room(int);//Oda ucretleri icin
int havuz(int);//havuz ucretleri icin
int sauna(int);//sauna ucretleri icin
int yemek(int);//yemek ucretleri icin
int main()
{
char isim[50];
char soy_isim[30];
char e_mail[50];
int secim;
int ucret=0;
double telefon;
int gun;
int onay;
int ilkgiris;
    do{
        printf("                        *****************************************************\n");
        printf("                        *                 MERT HOTELS & RESORTS             *\n");
        printf("                        *                     INTERNATIONAL                 *\n");
        printf("                        *****************************************************\n");
        printf("--------------------------------------------------\n");
        printf("                  HOSGELDINIZ                       \n\n");
        printf("MISYONUMUZ\n'MERT MISAFIRPERVERLIGI' ile anilariniza ev sahipligi yapmak.\n\n");
        printf("VIZYONUMUZ\nMarkamizi global duzeyde tercih edilen ve buyuyen otel zinciri haline getirmek.\n\n");
        do{
        printf("Direkt kayit Islemine devam etmek istiyorsaniz '1' tusuna, otel planlamasini gorup sonra kayit islemine\ndevam etmek istiyorsaniz '2' tusuna basiniz:\n");
        scanf("%d",&ilkgiris);
        }while(ilkgiris!=1 && ilkgiris!=2);
        if(ilkgiris==1){//DIREK KAYIT ISLEMI YAPILAN KISIM

            printf("Kayit yapmak icin lutfen gerekli bilgileri giriniz:\n");//Kayit Bilgileri Girisleri
            printf("##################################################\n");
            printf("                  KAYIT FORMU                     \n");
            printf("ISIM:");
            scanf("%s",&isim);
            printf("--------------------------------------------------\n");
            printf("SOY ISIM:");
            scanf("%s",&soy_isim);
            printf("--------------------------------------------------\n");
            printf("E-MAIL:");
            scanf("%s",&e_mail);
            printf("--------------------------------------------------\n");
            printf("TELEFON(lutfen numaranizi 5********* gibi doldurunuz)(+90):\n");
            scanf("%lf",&telefon);
            printf("--------------------------------------------------\n");
            printf("##################################################\n");

            printf("Lutfen Asagidakilerden birini seciniz.\n\n");//kayit cesitleri
            printf("SECENEK 1= Kendin Belirle \n\nSECENEK 2= Oda + Kahvalti\n\nSECENEK 3= Her sey dahil(Oda+yemek+sauna+havuz)\n\n");
            printf("--------------------------------------------------\n");
            printf("Kahvalti servisimiz oda ucretine dahildir.\n");
            printf("Fiyatlarimizi gecelik olarak baz aliniz.\n\n");
            printf("--------------------------------------------------\n");
            printf("SECENEK 1 icin 1'e - SECENEK 2 icin 2'ye - SECENEK 3 icin 3'e basiniz:\n\n");
            do{
            scanf("%d",&secim);
            printf("--------------------------------------------------\n");

            }while(secim>3 || secim<1);
                switch(secim){// secimler
                        case 1:
                            { {
                                 ucret=room(ucret);
                             }
                             {
                                 ucret=sauna(ucret);
                             }
                             {
                                 ucret=havuz(ucret);
                             }
                             {
                                 ucret=yemek(ucret);
                             }
                            printf("Kac gun kalacaksiniz ?\n");
                            scanf("%d",&gun);
                            printf("\n*****************************************************\n");
                            printf("\nKAYIT BILGILERI\n");//Kayitlari son kez gözden gecirme
                            printf("\nISIM= %s\n",isim);
                            printf("\nSOYISIM= %s\n",soy_isim);
                            printf("\nE-MAIL= %s\n",e_mail);
                            printf("\nTELEFON= +90%10.lf\n",telefon);
                            printf("\nTOPLAM GUN= %d\n",gun);
                            printf("\nUCRET= %d TL\n",ucret*gun);
                            printf("\n*****************************************************\n");
                            printf("!!Guvenliginiz icin bu bilgileri izniniz dahili disinda hicbir kisi,\nkurum veya kurulusla paylasilmayacaktir.Bilginize!!\n");
                            printf("Bizi tercih ettiginiz icin tesekkurler\n");
                            break;
                            }
                        case 2:
                            {
                            {
                                 ucret=room(ucret);
                             }
                            printf("Kac gun kalacaksiniz ?\n");
                            scanf("%d",&gun);
                            printf("\n*****************************************************\n");
                            printf("\nKAYIT BILGILERI:\n");//Kayitlari son kez gözden gecirme
                            printf("\nISIM= %s\n",isim);
                            printf("\nSOYISIM= %s\n",soy_isim);
                            printf("\nE-MAIL= %s\n",e_mail);
                            printf("\nTELEFON= +90%10.lf\n",telefon);
                            printf("\nTOPLAM GUN= %d\n",gun);
                            printf("\nUCRET= %d TL\n",ucret*gun);
                            printf("\n*****************************************************\n");
                            printf("!!Guvenliginiz icin bu bilgileri izniniz dahili disinda hicbir kisi,\nkurum veya kurulusla paylasilmayacaktir.Bilginize\n!!");
                            printf("Bizi tercih ettiginiz icin tesekkurler\n");
                            break;
                            }
                        case 3:
                         {
                          {
                            ucret=room(ucret);

                          }
                            ucret+=210;
                            printf("Kac gun kalacaksiniz ?\n");
                            scanf("%d",&gun);
                            printf("\n*****************************************************\n");
                            printf("\nKAYIT BILGILERI\n");//Kayitlari son kez gözden gecirme
                            printf("\nISIM= %s\n",isim);
                            printf("\nSOYISIM= %s\n",soy_isim);
                            printf("\nE-MAIL= %s\n",e_mail);
                            printf("\nTELEFON= +90%10.lf\n",telefon);
                            printf("\nTOPLAM GUN= %d\n",gun);
                            printf("\nUCRET= %d TL\n",ucret*gun);
                            printf("\n*****************************************************\n");
                            printf("!!Guvenliginiz icin bu bilgileri izniniz dahili disinda hicbir kisi,\nkurum veya kurulusla paylasilmayacaktir.Bilginize\n\n!!");
                            printf("Bizi tercih ettiginiz icin tesekkurler\n\n");
                            break;
                          }
                  }do{
                   printf("\nOnayliyor musunuz?\n\nEvet icin 0\n\nhayir icin 1\n\nyeniden kayit yapmak icin 2 tusuna basiniz\n\n");
                   scanf("%d",&onay);
                  }while(onay>2);
            }
        else if(ilkgiris==2){//ONCE PLANLAMAYI GOSTEREN SONRA KAYIT ISLEMINE DEVAM EDEN KISIM

            printf("---------------------------------------------------------------------\n");
            printf("|   ACIK ALAN(ARKA BAHCE) |        SPOR(ARKA BAHCE)|    COCUK        \n");
            printf("|      BUFE               |           ALANI        |       PARKI     \n");
            printf("|-------------------------|------------------------|-----------------\n");
            printf("|         |  4.KAT  ODA 4(AILE ODALARI)                   |          \n");
            printf("|         |-----------------------------------------------|          \n");
            printf("|AQUAPARK |  3.KAT  ODA 3(UC KISILIK ODALAR)              | ORMANLIK \n");
            printf("|         |-----------------------------------------------|   ALAN   \n");
            printf("|  ****   |  2.KAT  ODA 2(IKI KISILIK ODALAR)/SAUNA       |          \n");
            printf("|         |-----------------------------------------------|          \n");
            printf("|         |  1.KAT  ODA 1(TEK KISILIK ODALAR)/HAVUZ/BUFE  |          \n");
            printf("|---------|------------------|       |--------------------|----------\n");
            printf("|                            | GIRIS |                             \n\n");
            printf("Kayit yapmak icin lutfen gerekli bilgileri giriniz:\n");//Kayit Bilgileri Girisleri
            printf("##################################################\n");
            printf("                  KAYIT FORMU                     \n");
            printf("ISIM:");
            scanf("%s",&isim);
            printf("--------------------------------------------------\n");
            printf("SOY ISIM:");
            scanf("%s",&soy_isim);
            printf("--------------------------------------------------\n");
            printf("E-MAIL:");
            scanf("%s",&e_mail);
            printf("--------------------------------------------------\n");
            printf("TELEFON(lutfen numaranizi 5********* gibi doldurunuz))(+90):\n");
            scanf("%lf",&telefon);
            printf("--------------------------------------------------\n");
            printf("##################################################\n");

            printf("Lutfen Asagidakilerden birini seciniz.\n\n");//kayit cesitleri
            printf("SECENEK 1= Kendin Belirle \n\nSECENEK 2= Oda + Kahvalti\n\nSECENEK 3= Her sey dahil(Oda+yemek+sauna+havuz)\n\n");
            printf("--------------------------------------------------\n");
            printf("Kahvalti servisimiz oda ucretine dahildir.\n");
            printf("Fiyatlarimizi gecelik olarak baz aliniz.\n\n");
            printf("--------------------------------------------------\n");
            printf("SECENEK 1 icin 1'e - SECENEK 2 icin 2'ye - SECENEK 3 icin 3'e basiniz:\n\n");
            do{
            scanf("%d",&secim);
            printf("--------------------------------------------------\n");

            }while(secim>3 || secim<1);
                    switch(secim){// secimler
                        case 1:
                            { {
                                 ucret=room(ucret);
                             }
                             {
                                 ucret=sauna(ucret);
                             }
                             {
                                 ucret=havuz(ucret);
                             }
                             {
                                 ucret=yemek(ucret);
                             }
                            printf("Kac gun kalacaksiniz ?\n");
                            scanf("%d",&gun);
                            printf("\n*****************************************************\n");
                            printf("\nKAYIT BILGILERI\n");//Kayitlari son kez gözden gecirme
                            printf("\nISIM= %s\n",isim);
                            printf("\nSOYISIM= %s\n",soy_isim);
                            printf("\nE-MAIL= %s\n",e_mail);
                            printf("\nTELEFON= +90%10.lf\n",telefon);
                            printf("\nTOPLAM GUN= %d\n",gun);
                            printf("\nUCRET= %d TL\n",ucret*gun);
                            printf("\n*****************************************************\n");
                            printf("!!Guvenliginiz icin bu bilgileri izniniz dahili disinda hicbir kisi,\nkurum veya kurulusla paylasilmayacaktir.Bilginize!!\n");
                            printf("Bizi tercih ettiginiz icin tesekkurler\n");
                            break;
                            }
                        case 2:
                            {
                            {
                                 ucret=room(ucret);
                             }
                            printf("Kac gun kalacaksiniz ?\n");
                            scanf("%d",&gun);
                            printf("\n*****************************************************\n");
                            printf("\nKAYIT BILGILERI:\n");//Kayitlari son kez gözden gecirme
                            printf("\nISIM= %s\n",isim);
                            printf("\nSOYISIM= %s\n",soy_isim);
                            printf("\nE-MAIL= %s\n",e_mail);
                            printf("\nTELEFON= +90%10.lf\n",telefon);
                            printf("\nTOPLAM GUN= %d\n",gun);
                            printf("\nUCRET= %d TL\n",ucret*gun);
                            printf("\n*****************************************************\n");
                            printf("!!Guvenliginiz icin bu bilgileri izniniz dahili disinda hicbir kisi,\nkurum veya kurulusla paylasilmayacaktir.Bilginize\n!!");
                            printf("Bizi tercih ettiginiz icin tesekkurler\n");
                            break;
                            }
                        case 3:
                         {
                          {
                            ucret=room(ucret);

                          }
                            ucret+=210;
                            printf("Kac gun kalacaksiniz ?\n");
                            scanf("%d",&gun);
                            printf("\n*****************************************************\n");
                            printf("\nKAYIT BILGILERI\n");//Kayitlari son kez gözden gecirme
                            printf("\nISIM= %s\n",isim);
                            printf("\nSOYISIM= %s\n",soy_isim);
                            printf("\nE-MAIL= %s\n",e_mail);
                            printf("\nTELEFON= +90%10.lf\n",telefon);
                            printf("\nTOPLAM GUN= %d\n",gun);
                            printf("\nUCRET= %d TL\n",ucret*gun);
                            printf("\n*****************************************************\n");
                            printf("!!Guvenliginiz icin bu bilgileri izniniz dahili disinda hicbir kisi,\nkurum veya kurulusla paylasilmayacaktir.Bilginize\n\n!!");
                            printf("Bizi tercih ettiginiz icin tesekkurler\n\n");
                            break;
                          }
                          }do{
                           printf("\nOnayliyor musunuz?\n\nEvet icin 0\n\nhayir icin 1\n\nyeniden kayit yapmak icin 2 tusuna basiniz\n\n");
                           scanf("%d",&onay);
                           }while(onay>2);
                    }

                          }while(onay==2);




return 0;
}
int room(int a){
    int s,u1;//u1 ucret1 anlaminda
    printf("Lutfen bir oda seciniz(1,2,3,4):\n");
             printf("Odalarimiz:\n TEK Kisilik(1) 150 TL\n Cift kisilik(2) 250TL\n Uc kisilik(3) 400TL\n Aile Odasi(4) 500 TL\n");
             do{
             scanf("%d",&s);

             if(s==1){
                 u1+=150;
             }
             else if(s==2){
                 u1+=250;
             }
             else if(s==3){
                 u1+=400;
             }
             else if(s==4){
                 u1+=500;
             }else
                printf("Yanlis deger girdiniz.Tekrar deneyiniz.\n");
                printf("--------------------------------------------------\n");
             }while(s>4 || s<1);
return u1;
}
int sauna(int a){
    int s,u2;//u2 ucret2 anlaminda
    printf("Sauna kullanmak ister misiniz?(evet icin 1\nhayir icin 2)\n\n");
             printf("Sauna ucret 25 TL\n");
             do{
             scanf("%d",&s);
             printf("--------------------------------------------------\n");

             if(s==1){
                 u2+=25;
             }
             else if(s==2){
                u2;
            }
             else
                printf("Yanlis deger girdiniz.Tekrar deneyiniz.\n");
                printf("--------------------------------------------------\n");
            }while(s>2 || s<1);
    return u2;
}
int havuz(int a){
     int s,u3;//u3 ucret3 anlaminda
             printf("Havuzumuzu Kullanmak ister misiniz?\n\n");
             printf("KAPALI HAVUZ (75 TL) (1) \nAQUAPARK (75TL) (2) \nHER IKISI ICIN (140 TL) (3) \n");
             printf("Hayir ise (4) tusuna basiniz;\n");
              do{
              scanf("%d",&s);
              printf("--------------------------------------------------\n");

              if(s==1){
                 u3+=75;
              }
              else if(s==2){
                 u3+=75;
              }
              else if(s==3){
                 u3+=140;
              }
              else if(s==4){
                 u3;
              }
              else
                printf("Yanlis deger girdiniz.Tekrar deneyiniz.\n");
                printf("--------------------------------------------------\n");
              }while(s>4 || s<1);

    return u3;
}
int yemek(int a){
    int s,u4;//u4 ucret 4 anlaminda
      printf("Yemek servisimizlerimiz Sabah ve Aksam olmak uzere 2 ogundur.\n\n");
      printf("Kahvalti servisimiz oda fiyatina dahildir.Aksam yemegi isterseniz 1 \nistemezseniz 2 tusuna basiniz\n ");
      printf("Aksam yemegi fiyati 55 TL\n");
	  do{
      scanf("%d",&s);
      printf("--------------------------------------------------\n");

        if(s==1){
          u4+=55;
      }
      else if(s==2){
       u4;
      }
      else
        printf("Yanlis deger girdiniz.Tekrar deneyiniz.\n");
        printf("--------------------------------------------------\n");
      }while(s>2 || s<1);
    return u4;
}
