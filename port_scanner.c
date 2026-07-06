#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    char hedef_ip[50]; // En fazla 50 karakterlik bir yazı alanı açar
    printf("port tarayıcı başlatıldı");

    printf("\n Taramak istenen hedef ip adresini giriniz: ");
    scanf("%s", hedef_ip);

    for (int port = 20; port <=1000; port++) {
        int soket_id = socket(AF_INET, SOCK_STREAM,0);
        if(soket_id < 0) {
            printf("soket oluştulamadı!");
            return 1;
        }
        struct sockaddr_in hedef_adres;
        hedef_adres.sin_family = AF_INET;
        hedef_adres.sin_port = htons(port);
        hedef_adres.sin_addr.s_addr = inet_addr(hedef_ip);

        int sonuc = connect(soket_id, (struct sockaddr *)&hedef_adres, sizeof(hedef_adres));
        
        if (sonuc == 0) {
            printf("port %d AÇIK (servis tespit edildi)\n", port);
            
        }
        close(soket_id);
    }
    
    return 0;

}
