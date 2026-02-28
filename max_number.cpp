// MAKSİMUM SAYI FONKSİYON KULLANARAK.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <stdio.h>
#include<math.h>
int max(int x, int y, int z);

int main()
{
    int number1;
    int number2;
    int number3;
    printf("Enter the three integer number :");
    scanf_s("%d%d%d", &number1, &number2, &number3);
    printf("maksimum is=%d", max(number1, number2, number3));

}
int max(int x, int y, int z) {
    int maksimum = x;
    if (y > maksimum) {
        maksimum = y;
    }
    if (z > maksimum) {
        maksimum = z;
    }
    return maksimum;
}
