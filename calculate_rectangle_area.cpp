// en son.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include<stdio.h>
int main()
{
	int kenar1, kenar2;
	int area;
	printf("dikdorgenlerin kisa ve uzun kenar uzunluklarini giriniz=");
	scanf_s("%d%d", &kenar1, &kenar2);
	area = kenar1 * kenar2;
	printf(" Uzunluklari verilen diktortgenin alanı=%d\n", area);
	return 0;

	}
