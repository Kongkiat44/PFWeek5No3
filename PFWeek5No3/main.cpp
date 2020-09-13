#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0, gcd = 1, lcm = 1,pd=0;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0) {
		pd = (a * b * c);
		printf("Product = %d\n", pd);
		//greatest common divisor
		for (int i = 2; i <= a && i <= b && i <= c;) {
			if (a % i == 0 && b % i == 0 && c % i == 0) {
				a /= i;
				b /= i;
				c /= i;
				gcd *= i;
				i = 2;
			}
			else i++;
		}
		printf("G.C.D = %d\n", gcd);
		//least common multiple
		for (int k = 2; k <= a && k <= b && k <= c;) {
			if (a % k == 0 && b % k == 0 && c % k == 0) {
				a /= k;
				b /= k;
				c /= k;
				lcm *= k;
				k = 2;
			}
			else if (a % k == 0 && b % k == 0) {
				a /= k;
				b /= k;
				lcm *= k;
				k = 2;
			}
			else if (a % k == 0 && c % k == 0) {
				a /= k;
				c /= k;
				lcm *= k;
				k = 2;
			}
			else if (b % k == 0 && c % k == 0) {
				b /= k;
				c /= k;
				lcm *= k;
				k = 2;
			}
			else k++;
		}
		lcm *= (gcd*a*b*c);
		printf("L.C.M = %d\n", lcm);
		printf("\nIs the product of three numbers equal to the product of G.C.D and L.C.M of three numbers?");
		if (pd == (gcd * lcm)) printf("\nAnswer: Absolutely Yes\n");
		else if(pd != (gcd * lcm)) printf("\nAnswer: Maybe No\n");
	}
	else printf("Enter three numbers which is more than zero\n");
	return 0;


}