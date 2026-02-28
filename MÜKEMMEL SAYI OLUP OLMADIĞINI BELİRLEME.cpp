// MÜKEMMEL SAYI OLUP OLMADIĞINI BELİRLEME.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
#include<stdio.h>
#include <iostream>
int MükemmelSayiMi(int sayi);
int main()
{
	int sayi;
	printf(" Enter the number:");
	scanf_s("%d", &sayi);
	if (MükemmelSayiMi(sayi))
	{
		printf("%d number is a perfect number.", sayi);
	}
	else
	{
		printf(" %d number is not a perfect number .");
	} return 0;
}int MükemmelSayiMi(int sayi)
{
	int sum = 0;
	int i,n;
	n = sayi;
	for (i = 1;i < n;i++) {
		if (n % i == 0) {
			sum = sum + i;
		}
	}
	return(sum == sayi);
}