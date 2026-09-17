#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MOD 1000000007LL

int compare(const void *a, const void *b) {
long long x = *(const long long *)a;
long long y = *(const long long *)b;

if (x < y)
return -1;
else if (x > y)
return 1;
else
return 0;
}

int main() {
int N;

scanf("%d", &N);

long long *A = malloc((size_t)N * sizeof(long long));

if (A == NULL) {
return 1;
}

for (int i = 0; i < N; i++) {
scanf("%lld", &A[i]);
}

qsort(A, N, sizeof(long long), compare);

long long jawaban = 0;
long long jumlahLebihKecil = 0;

int i = 0;

while (i < N) {
int j = i;

while (j < N && A[j] == A[i]) {
j++;
}

long long jumlahSama = j - i;

jawaban = (jawaban +
(jumlahSama % MOD) * (jumlahLebihKecil % MOD)) % MOD;

jumlahLebihKecil += jumlahSama;

i = j;
}

printf("%lld\n", jawaban);

free(A);

return 0;
}
