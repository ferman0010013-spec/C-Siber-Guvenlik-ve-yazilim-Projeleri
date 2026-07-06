#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Oyuncu {
    int can;
    int hasar;
    int altin;
};

int main() {
    // Rastgele sayı üretecini saatimize bağlıyoruz
    srand(time(NULL));

    struct Oyuncu kahraman;
    kahraman.can = 100;
    kahraman.hasar = 25;
    kahraman.altin = 0;
    
    printf("====================================\n");
    printf("     KARANLIK ZINDAN MACERASI     \n");
    printf("====================================\n\n");
    
    printf("Karakter Durumu -> Can: %d | Hasar: %d | Altin: %d\n\n", kahraman.can, kahraman.hasar, kahraman.altin);
    printf("Kaçacak yer yok, savaş başlıyor!\n\n");
    
    // Canavarın canını 40 ile 70 arasında rastgele belirliyoruz
    int canavar_can = (rand() % 31) + 40;
    printf("Orc belirdi! Canı: %d\n\n", canavar_can);
    
    while (kahraman.can > 0 && canavar_can > 0) {
        printf("---- senin hamlen ----\n");
        printf("1- Kılıçla Saldır\n");

        int hamle;
        printf("Secimin: ");
        scanf("%d", &hamle);

        // 1 ile 10 arasında rastgele zar şansı
        int zar = (rand() % 10) + 1;
        int toplam_hasar = kahraman.hasar + zar;

        canavar_can -= toplam_hasar;
        // %d eksik değişken hatası düzeltildi (toplam_hasar ve zar eklendi)
        printf("Orc'a vurdun! %d hasar verdin. (Zar şansı: +%d)\n", toplam_hasar, zar);
    
        if (canavar_can <= 0) {
            printf("Tebrikler Orc'u alt ettin!\n");
            kahraman.altin += 50;
            break;
        }

        printf("👹 Orc'un kalan canı: %d\n\n", canavar_can);
        
        printf("--- Orc'un Hamlesi ---\n");
        // Orc 5 ile 20 arasında rastgele vuruyor
        int canavar_hasari = (rand() % 15) + 5; 
        kahraman.can -= canavar_hasari;
        printf("💥 Orc sana vurdu! %d can kaybettin.\n", canavar_hasari);
        printf("❤️ Kalan Canın: %d\n\n", kahraman.can);
    }

    // Koşul parantez içine alındı
    if (kahraman.can > 0) {
        printf("====================================\n");
        printf("🏆 SAVAŞI KAZANDIN VE ZİNDANDAN KAÇTIN!\n");
        printf("Son Durumun -> Can: %d | Altın: %d\n", kahraman.can, kahraman.altin);
        printf("====================================\n");
    } else {
        printf("💀 Öldün... Zindanın derinliklerinde kemiklerin kaldı.\n");
    }

    return 0;
}
