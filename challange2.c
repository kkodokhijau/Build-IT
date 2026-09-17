#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long long a, b, c, temp;
scanf("%lld %lld %lld", &a, &b, &c);

long long x = a, y = b, z = c;
if (x > y) { temp = x; x = y; y = temp; }
if (y > z) { temp = y; y = z; z = temp; }
if (x > y) { temp = x; x = y; y = temp; }

long long hasil;
if (x == y || y == z) {
hasil = 0;
} else {
long long d1 = y - x;
long long d2 = z - y;
hasil = (d1 < d2) ? d1 : d2;
}

printf("%lld\n", hasil);
return 0;
}
