#include <stdio.h>
#include <stdlib.h>

    struct produk {
    char *kode;
    int harga;
    int avail
    };

    int main (){

    int menu = 0;
    printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
    printf("-------------------------------------------------------------------------\n");
    printf("01  : HE002  : Plain Yoghurt                 :        18 :  Rp. 15000,-\n");
    printf("02  : HE003  : Blueberry Yoghurt             :        23 :  Rp. 15000,-\n");
    printf("03  : HE006  : Manggo Peach Yoghurt          :        19 :  Rp. 18000,-\n");
    printf("04  : HE007  : Banana Strawberry Yoghurt     :        22 :  Rp. 18000,-\n");
    printf("05  : HE011  : Choco Granola Yoghurt         :        14 :  Rp. 20000,-\n");
    printf("06  : HE018  : Berry Smooth Yoghurt          :        17 :  Rp. 20000,-\n");
    printf("07  : HE022  : Pomegranate Yoghurt           :        12 :  Rp. 20000,-\n");
    printf("-------------------------------------------------------------------------");

    printf("\n\nMenu :\n");
    printf("1. Sell\n");
    printf("2. Add Stock\n");
    printf("3. Exit\n");
    printf("Input Choice : ");
    scanf("%d",&menu);

        if (menu == 1){
        sell ();
    }else if (menu == 2){
        tambah ();
    }else if (menu == 3) {
        exit;
    }else {
    printf("\n\n---Option not found---\n");
    puts("");
        }
  return 0;
}

void sell (){

struct produk code1, code2, code3, code4, code5, code6, code7;

code1.kode = "HE002";
code1.avail = 18;
code1.harga = 15000;

code2.kode = "HE003";
code2.avail = 23;
code2.harga = 15000;

code3.kode = "HE006";
code3.avail = 19;
code3.harga = 18000;

code4.kode = "HE007";
code4.avail = 22;
code4.harga = 18000;

code5.kode = "HE011";
code5.avail = 14;
code5.harga = 20000;

code6.kode = "HE018";
code6.avail = 17;
code6.harga = 20000;

code7.kode = "HE022";
code7.avail = 12;
code7.harga = 20000;

int jumlah, total, baru1, baru2, baru3, baru4, baru5, baru6, baru7;
char koode[200];

      printf("Input Yoghurt Code [5 chars]:");
      scanf("%s", &koode);
      if (strcmp(code1.kode,koode)==0){
      printf("Input Quantity [0..%d]: ",code1.avail);
      scanf("%d", &jumlah);
        if(jumlah > code1.avail || jumlah < 0){
                puts("");
            printf("...The quantity of yoghurt is not enough...\n");
            puts("");
      }else {
        total = jumlah * code1.harga;
        printf("Total Price is : Rp %d,- x %d = Rp %d,-",code1.harga,jumlah,total);
            baru1 = code1.avail - jumlah;
            baru2 = code2.avail;
            baru3 = code3.avail;
            baru4 = code4.avail;
            baru5 = code5.avail;
            baru6 = code6.avail;
            baru7 = code7.avail;

printf("\n\n---Thank you---\n");
puts("");
puts("");
puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",baru1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",baru2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",baru3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",baru4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",baru5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",baru6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",baru7);
printf("-------------------------------------------------------------------------");
      }
    }
      else if  (strcmp(code2.kode,koode)==0){
      printf("Input Quantity [0..%d]: ",code2.avail);
      scanf("%d", &jumlah);
      if(jumlah > code2.avail || jumlah < 0){
            puts("");
        printf("\n...The quantity of yoghurt is not enough...\n");
          	puts("");
      }else {
        total = jumlah * code2.harga;
        printf("Total Price is : Rp %d,- x %d = Rp %d,-",code2.harga,jumlah,total);
            baru2 = code2.avail - jumlah;
            baru1 = code1.avail;
            baru3 = code3.avail;
            baru4 = code4.avail;
            baru5 = code5.avail;
            baru6 = code6.avail;
            baru7 = code7.avail;
printf("\n\n---Thank you---\n");
puts("");
puts("");
puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",baru1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",baru2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",baru3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",baru4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",baru5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",baru6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",baru7);
printf("-------------------------------------------------------------------------");
      }
    }
      else if (strcmp(code3.kode,koode)==0){
      printf("Input Quantity [0..%d]: ",code3.avail);
      scanf("%d", &jumlah || jumlah < 0);
      if(jumlah > code3.avail){
            puts("");
        printf("\n...The quantity of yoghurt is not enough...\n");
        puts("");
      }else {
        total = jumlah * code3.harga;
        printf("Total Price is : Rp %d,- x %d = Rp %d,-",code3.harga,jumlah,total);
            baru3 = code3.avail - jumlah;
            baru1 = code1.avail;
            baru2 = code2.avail;
            baru4 = code4.avail;
            baru5 = code5.avail;
            baru6 = code6.avail;
            baru7 = code7.avail;
            printf("\n\n---Thank you---\n");
puts("");
puts("");
puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",baru1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",baru2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",baru3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",baru4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",baru5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",baru6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",baru7);
printf("-------------------------------------------------------------------------");
      }
    }
      else if(strcmp(code4.kode,koode)==0){
      printf("Input Quantity [0..%d]: ",code4.avail);
      scanf("%d", &jumlah);
      if(jumlah > code4.avail || jumlah < 0){
            puts("");
        printf("\n...The quantity of yoghurt is not enough...\n");
        puts("");

      }else {
        total = jumlah * code4.harga;
        printf("Total Price is : Rp %d,- x %d = Rp %d,-",code4.harga,jumlah,total);
            baru4 = code4.avail - jumlah;
            baru1 = code1.avail;
            baru2 = code2.avail;
            baru4 = code3.avail;
            baru5 = code5.avail;
            baru6 = code6.avail;
            baru7 = code7.avail;
            printf("\n\n---Thank you---\n");
puts("");
puts("");
puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",baru1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",baru2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",baru3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",baru4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",baru5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",baru6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",baru7);
printf("-------------------------------------------------------------------------");
    }
      }
      else if(strcmp(code5.kode,koode)==0){
      printf("Input Quantity [0..%d]: ",code5.avail);
      scanf("%d", &jumlah);
      if(jumlah > code5.avail || jumlah < 0){
            puts("");
        printf("\n...The quantity of yoghurt is not enough...\n");
        puts("");
      }else {
      total = jumlah * code5.harga;
      printf("Total Price is : Rp %d,- x %d = Rp %d,-",code5.harga,jumlah,total);
            baru5 = code5.avail - jumlah;
            baru1 = code1.avail;
            baru2 = code2.avail;
            baru4 = code3.avail;
            baru3 = code3.avail;
            baru6 = code6.avail;
            baru7 = code7.avail;
            printf("\n\n---Thank you---\n");
puts("");
puts("");
puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",baru1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",baru2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",baru3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",baru4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",baru5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",baru6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",baru7);
printf("-------------------------------------------------------------------------");
      }

      } else if(strcmp(code6.kode,koode)==0){
      printf("Input Quantity [0..%d]: ",code6.avail);
      scanf("%d", &jumlah);
      if(jumlah > code6.avail || jumlah < 0){
            puts("");
        printf("\n...The quantity of yoghurt is not enough...\n");
        puts("");
      }else {
      total = jumlah * code6.harga;
      printf("Total Price is : Rp %d,- x %d = Rp %d,-",code6.harga,jumlah,total);
            baru6 = code6.avail - jumlah;
            baru1 = code1.avail;
            baru2 = code2.avail;
            baru4 = code3.avail;
            baru3 = code3.avail;
            baru5 = code5.avail;
            baru7 = code7.avail;
            printf("\n\n---Thank you---\n");
puts("");
puts("");
puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",baru1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",baru2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",baru3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",baru4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",baru5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",baru6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",baru7);
printf("-------------------------------------------------------------------------");
      }

      } else if(strcmp(code7.kode,koode)==0){
      printf("Input Quantity [0..%d]: ",code7.avail);
      scanf("%d", &jumlah);
      if(jumlah > code7.avail || jumlah < 0){
            puts("");
        printf("\n...The quantity of yoghurt is not enough...\n");
        puts("");
      }else {
      total = jumlah * code7.harga;
      printf("Total Price is : Rp %d,- x %d = Rp %d,-",code7.harga,jumlah,total);
            baru7 = code7.avail - jumlah;
            baru1 = code1.avail;
            baru2 = code2.avail;
            baru4 = code3.avail;
            baru3 = code3.avail;
            baru5 = code5.avail;
            baru6 = code6.avail;
            printf("\n\n---Thank you---\n");
puts("");
puts("");
puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",baru1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",baru2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",baru3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",baru4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",baru5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",baru6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",baru7);
printf("-------------------------------------------------------------------------");
      }
    }else {
    puts("");
    puts("");
			printf("---The yoghurt code doesn't exist---\n");
			puts("");
			puts("");
    }
}



void tambah(){

struct produk code1, code2, code3, code4, code5, code6, code7;

code1.kode = "HE002";
code1.avail = 18;
code1.harga = 15000;

code2.kode = "HE003";
code2.avail = 23;
code2.harga = 15000;

code3.kode = "HE006";
code3.avail = 19;
code3.harga = 18000;

code4.kode = "HE007";
code4.avail = 22;
code4.harga = 18000;

code5.kode = "HE011";
code5.avail = 14;
code5.harga = 20000;

code6.kode = "HE018";
code6.avail = 17;
code6.harga = 20000;

code7.kode = "HE022";
code7.avail = 12;
code7.harga = 20000;

int jumlah1, total1, total2, total3, total4, total5, total6, total7;
char koode[20];

printf("Input Yoghurt Code [5 chars]:");
      scanf("%s", &koode);

        if (strcmp(code1.kode,koode)==0){
        printf("Input Quantity [1..100]: ");
        scanf("%d", &jumlah1);

            if(jumlah1 <= 100 && jumlah1 >= 1){

            total1 = jumlah1 + code1.avail;
            total2 = code2.avail;
            total3 = code3.avail;
            total4 = code4.avail;
            total5 = code5.avail;
            total6 = code6.avail;
            total7 = code7.avail;

        puts("");
        puts("");
        printf("---Adding Stock Success---");
        puts("");
                        puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",total1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",total2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",total3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",total4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",total5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",total6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",total7);
printf("-------------------------------------------------------------------------");
            }
            else if(jumlah1<1 || jumlah1>100){
			puts("");
			printf("...The quantity of Yoghurt is not enough...\n");
			puts("");
     }
      }else if (strcmp(code2.kode,koode)==0){
        printf("Input Quantity [1..100]: ");
        scanf("%d", &jumlah1);

        if(jumlah1 <= 100 && jumlah1 >= 1){
        total2 = jumlah1 + code2.avail;
        total1 = code1.avail;
        total3 = code3.avail;
        total4 = code4.avail;
        total5 = code5.avail;
        total6 = code6.avail;
        total7 = code7.avail;

         puts("");
        puts("");
        printf("---Adding Stock Success---");
        puts("");
                        puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",total1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",total2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",total3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",total4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",total5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",total6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",total7);
printf("-------------------------------------------------------------------------");
            }
            else if(jumlah1<1 || jumlah1>100){
			puts("");
			printf("...The quantity of Yoghurt is not enough...\n");
			puts("");
     }

      }else if (strcmp(code3.kode,koode)==0){
          printf("Input Quantity [1..100]: ");
        scanf("%d", &jumlah1);

        if(jumlah1 <= 100 && jumlah1 >= 1){

        total3 = jumlah1 + code3.avail;
        total2 = code2.avail;
        total1 = code1.avail;
        total4 = code4.avail;
        total5 = code5.avail;
        total6 = code6.avail;
        total7 = code7.avail;

         puts("");
        puts("");
        printf("---Adding Stock Success---");
        puts("");
                        puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",total1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",total2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",total3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",total4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",total5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",total6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",total7);
printf("-------------------------------------------------------------------------");
            }
            else if(jumlah1<1 || jumlah1>100){
			puts("");
			printf("...The quantity of Yoghurt is not enough...\n");
			puts("");
        }
      }else if(strcmp(code4.kode,koode)==0){
           printf("Input Quantity [1..100]: ");
        scanf("%d", &jumlah1);

        if(jumlah1 <= 100 && jumlah1>=1){

        total4 = jumlah1 + code4.avail;
        total2 = code2.avail;
        total3 = code3.avail;
        total1 = code1.avail;
        total5 = code5.avail;
        total6 = code6.avail;
        total7 = code7.avail;

        puts("");
        puts("");
        printf("---Adding Stock Success---");
        puts("");
                        puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",total1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",total2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",total3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",total4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",total5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",total6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",total7);
printf("-------------------------------------------------------------------------");
            }
            else if(jumlah1<1 || jumlah1>100){
			puts("");
			printf("...The quantity of Yoghurt is not enough...\n");
			puts("");
     }

      }else if(strcmp(code5.kode,koode)==0){
           printf("Input Quantity [1..100]: ");
        scanf("%d", &jumlah1);

        if(jumlah1 <= 100 && jumlah1>=1){

        total5 = jumlah1 + code5.avail;
        total2 = code2.avail;
        total3 = code3.avail;
        total4 = code4.avail;
        total1 = code1.avail;
        total6 = code6.avail;
        total7 = code7.avail;

         puts("");
        puts("");
        printf("---Adding Stock Success---");
        puts("");
                        puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",total1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",total2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",total3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",total4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",total5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",total6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",total7);
printf("-------------------------------------------------------------------------");
            }
            else if(jumlah1<1 || jumlah1>100){
			puts("");
			printf("...The quantity of Yoghurt is not enough...\n");
			puts("");
     }


      }else if (strcmp(code6.kode,koode)==0){
          printf("Input Quantity [1..100]: ");
        scanf("%d", &jumlah1);

        if(jumlah1 <= 100 && jumlah1>=1){

        total6 = jumlah1 + code6.avail;
        total2 = code2.avail;
        total3 = code3.avail;
        total4 = code4.avail;
        total5 = code5.avail;
        total1 = code1.avail;
        total7 = code7.avail;

        puts("");
        puts("");
        printf("---Adding Stock Success---");
        puts("");
                        puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",total1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",total2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",total3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",total4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",total5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",total6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",total7);
printf("-------------------------------------------------------------------------");
            }
            else if(jumlah1<1 || jumlah1>100){
			puts("");
			printf("...The quantity of Yoghurt is not enough...\n");
			puts("");
     }

      }else if (strcmp(code7.kode,koode)==0){
          printf("Input Quantity [1..100]: ");
        scanf("%d", &jumlah1);

        if(jumlah1 <= 100 && jumlah1 >=1){

        total7 = jumlah1 + code7.avail;
        total2 = code2.avail;
        total3 = code3.avail;
        total4 = code4.avail;
        total5 = code5.avail;
        total6 = code6.avail;
        total1 = code1.avail;

        puts("");
        puts("");
        printf("---Adding Stock Success---");
        puts("");
                        puts("");
printf("No. : Code   : Yoghurt Name                  : Available :  Price       \n");
printf("-------------------------------------------------------------------------\n");
printf("01  : HE002  : Plain Yoghurt                 :        %d :  Rp. 15000,-\n",total1);
printf("02  : HE003  : Blueberry Yoghurt             :        %d :  Rp. 15000,-\n",total2);
printf("03  : HE006  : Manggo Peach Yoghurt          :        %d :  Rp. 18000,-\n",total3);
printf("04  : HE007  : Banana Strawberry Yoghurt     :        %d :  Rp. 18000,-\n",total4);
printf("05  : HE011  : Choco Granola Yoghurt         :        %d :  Rp. 20000,-\n",total5);
printf("06  : HE018  : Berry Smooth Yoghurt          :        %d :  Rp. 20000,-\n",total6);
printf("07  : HE022  : Pomegranate Yoghurt           :        %d :  Rp. 20000,-\n",total7);
printf("-------------------------------------------------------------------------");
            }
            else if(jumlah1<1 && jumlah1>100){
			puts("");
			printf("...The quantity of Yoghurt is not enough...\n");
			puts("");
            }
        }
        else {
        puts("");
        puts("");
        printf("---The yoghurt code doesn’t exist---");
        puts("");
        puts("");
    }
}
