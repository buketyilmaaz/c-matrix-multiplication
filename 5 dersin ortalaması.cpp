// 5 dersin ortalaması.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <stdio.h>
#include "5 dersin ortalaması.h"
int main()
{
	float midterm,lab, final;
	double avarege;
	char dersadi[100];
	printf("Enter the lesson name: ");
	   sca+nf("%s", dersadi);
	printf("Enter your midterm result:");
	   scanf_s(" %f\n", &midterm);
	printf("Enter your lab result: ");
	   scanf_s("%f\n", &lab);
	printf("Enter your final result:");
	   scanf_s("%f\n", &final);
	   avarege = 0.2 * midterm + 0.2 * lab + 0.2 * final;
	   printf("%s avarege= %lf", dersadi,avarege);
	   if (avarege >= 60 && avarege<= 100) {
		   printf("YOU PASSED:)   avarege=%2.f", avarege);
	   }
	   else if (avarege <= 59 && avarege>=0) {
		   printf("I am sorry you stayed :(  avarege= %f",avarege);
	   }
	   else {
		   printf("ERROR, TRY AGAİN ");
	   } return 0;
}