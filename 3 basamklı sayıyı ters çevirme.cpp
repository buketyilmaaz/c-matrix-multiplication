// 3 basamklı sayıyı ters çevirme.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include<stdio.h>
int main()
{
	int dignum, birler, onlar, yüzler, new_num;

	printf("uc basamakli bir sayi giriniz=");
	scanf_s("%d", &dignum);
	birler = dignum % 10;
	onlar = dignum % 100 / 10;
	yüzler = dignum / 100;
	new_num = birler * 100 + onlar * 10 + yüzler;
	printf("Girilen sayinin tersi =%d", new_num);
	return 0;
}