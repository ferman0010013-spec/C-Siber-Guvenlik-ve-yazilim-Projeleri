# C-Siber-Guvenlik-ve-yazilim-Projeleri
C Dili ile yapılan siber güvenlik ağırlıklı projelerim ve Python ile yapılan yazılım,algoritma projelerim

# C ile Siber Güvenlik ve Sistem Programlama Çalışmaları

Bu depo, alt seviye (low-level) network mantığını, bellek yönetimini ve C programlama dilinin sistem mimarisini siber güvenlik konseptleriyle anlamak için geliştirdiğim projeleri içermektedir.

---

## 🛠️ Projeler

### 1. TCP Connect Port Tarayıcı (`port_tarayici.c`)
Bu araç, Linux çekirdeğinin ağ kütüphanelerini (`sys/socket.h`, `netinet/in.h`) kullanarak dinamik hedef odaklı çalışan bir **TCP Connect Scanner** simülasyonudur. 
* **Çalışma Mantığı:** Nmap'in `-sT` parametresiyle gerçekleştirdiği TCP Üçlü El Sıkışması (Three-Way Handshake) mekanizmasını temel alır. Target IP üzerindeki portlara bağlantı istekleri göndererek işletim sisteminden dönen yanıtları (`0` veya `-1`) süzerek açık kapıları raporlar.
* **Özellikler:** Kullanıcıdan dinamik IP adresi alır ve 20-1000 arasındaki portları tarar.

### 2. Metin Tabanlı RPG Zindan Oyunu (`macera.c`)
C dilindeki algoritma mantığını, oyun döngülerini (game loops) ve bellek yapılarını pekiştirmek için geliştirilmiş metin tabanlı bir rol yapma oyunudur.
* **Kullanılan Yapılar:** `struct` veri yapıları, rastgele sayı üretimi (`rand()`) ile şans faktörü yönetimi ve dinamik döngü kontrolleri.

---

## 🚀 Çalıştırma Adımları

Projeleri Linux (Kali Linux / Arch Linux) ortamında derlemek ve çalıştırmak için:

```bash
# Port Tarayıcıyı Derleme ve Çalıştırma
gcc port_tarayici.c -o port_tarayici && ./port_tarayici

# Zindan Oyununu Derleme ve Çalıştırma
gcc macera.c -o macera && ./macera
