// İsim SOYİSİM: Arezoo Pouya
// Öğrenci Numarası: 229914128
// BTK Akademi Sertifika Bağlantısı: https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=2NwcJoV1A0

#include <stdio.h>

void dizi_yazdir(int dizi[], int n) {
 int i = 0;
 while (i < n) {
  printf("%d --> ", dizi[i]);
  i++;
 }
 printf("NULL\n");
}


void bubble_sort(int dizi[], int n) {
 int i, j, gecici;

 for (i = 0; i < n - 1; i++) {
  for (j = 0; j < n - 1; j++) {
   if (dizi[j] > dizi[j + 1]) {
    gecici = dizi[j];
    dizi[j] = dizi[j + 1];
    dizi[j + 1] = gecici;
   }
  }
 }
}


int binary_search(int dizi[], int n, int sayi) {
 int sol = 0;
 int sag = n - 1;
 int orta;

 while (sol <= sag) {
  orta = (sol + sag) / 2;

  if (dizi[orta] == sayi) {
   return orta;
  }
  else if (sayi < dizi[orta]) {
   sag = orta - 1;
  }
  else {
   sol = orta + 1;
  }
 }
 return -1;
}


int main() {
 int dizi[] = {8, 7, 10, 3, 2, 13};
 int n = sizeof(dizi) / sizeof(dizi[0]);
 int aranan, sonuc;

 printf("Siralanmamis dizi:\n");
 dizi_yazdir(dizi, n);

 bubble_sort(dizi, n);

 printf("Bubble Sort sonrasi dizi:\n");
 dizi_yazdir(dizi, n);

 printf("Aranan sayiyi giriniz: ");
 scanf("%d", &aranan);

 sonuc = binary_search(dizi, n, aranan);

 if (sonuc != -1) {
  printf("%d sayisi dizide bulundu. Indeks: %d\n", aranan, sonuc);
 }
 else {
  printf("%d sayisi dizide bulunamadi.\n", aranan);
 }

 return 0;
}
