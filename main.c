#include <stdio.h>
#include <stdlib.h>

// İsim SOYİSİM: Arezoo Pouya
// Öğrenci Numarası: 229914128
// BTK Akademi Sertifika Bağlantısı:
// https://www.btkakademi.gov.tr/api/service/v1/employee/certificates/issued/download/230418636?token=eyJhbGciOiJSUzI1NiJ9.eyJzdWIiOiIzMDAzOTM4IiwiZG9tYWluIjoiQlRLIiwiaXNzIjoiS0IiLCJwaWQiOjMwMDYzMzgsIm9pZCI6NTEsImV4cCI6MTc3NTk3MTUzNSwidXVpZCI6IjBiNjA5Njg3LTM1YWMtNDZmMC04YTc1LWFjMzMxOTkwOGIwMyIsImlhdCI6MTc2ODE5NTUzNSwianRpIjoiYzM0ZjUxYjktYjhjYS00N2M0LWFhODYtYTViNjUyYTdjOTA2In0.G6Waq6tNrO-cwSpLGavPWQ6-cx7GZbdTsnCrsSHkBoSQO8UlKLGL1miRnSTJ0kLQ9Z_phYkJOen1xHS-rIh1skvXvB7zTHJR0ZTaqsU11DjPKSFCSh95lwTeMJV701xv_pt6esnvD_g3NkuU43skmk1EuYaeTiteIP9VKDMBbBleH3cDK_s7y5dGdmFVFe4xOoZ1VZ-D0z36C00Mzf_TTvxKx9B6DOYt5EQ6IkrVpjVMK3E0ONfCiV2KMYk1D26u1F6gtBnDFNfqsf9krEN8gag9z8uMYWwmLonmkOBWLn_sMLsqDqT2YhfBEjnQLE6UXsh4EKvx-XtiR8Jhsbywdg


// dizi elemanlarini yazdirma
void dizi_yazdir(int dizi[], int n) {
 int i = 0;
 while (i < n) {
  printf("%d --> ", dizi[i]);
  i++;
 }
 printf("NULL\n");
}


// Bubble Sort (kucukten buyuge)
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


// Binary Search (Ikili Arama)
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
