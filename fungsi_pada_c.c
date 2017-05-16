#include <stdio.h>

//membuat fungsi kali
int kali (int a, int b){
    int hasil;
    hasil = a*b;
    return hasil;       //mengembalikan nilai hasil ke main();
}

//membuat fungsi tambah
int tambah (int a, int b){
    int hasil;
    hasil = a+b;
    return hasil;       //mengembalikan nilai hasil ke main()
}

 //mencetak string melalui fungsi
void cetakA () {
    printf("ILKOMERS ASIQ\n"); //tidak mengembalikan nilai apa - apa ke main(), hanya mencetak saja
}

//beda antara penggunaan void <namafungsi>, int <namafungsi>, float<namafungsi>, dsb
//void<namafungsi> akan digunakan ketika kita akan menggunakan suatu fungsi tapi tidak mengembalikan nilai apapun ke fungsi main
//int<namafungsi> akan digunakan ketika kita akan menggunakan suatu fungsi dan mengembalikan nilai ke int main()

int main(){
    int a, b, x, z;
    scanf("%d %d", &a, &b);
    x = kali(a,b);
    z = tambah(a,b);
    printf("%d %d\n", x, z);
    cetakA();
return 0;
}
