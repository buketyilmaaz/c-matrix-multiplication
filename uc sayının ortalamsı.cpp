// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <stdio.h>


	int average(int a, int b, int c) {
		return (a + b + c) / 3;
	}int main() {
		int a, b, c;
		printf("Please enter the tree numbers whose average you want to calculate:");
		scanf_s("%d %d %d", &a, &b, &c);
		int sonuc = average(a, b, c);
		printf("The average of the numbers you entered =%d\n", sonuc);
		return 0;
	}
	 