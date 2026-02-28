
/*KÜÇÜK HARFLERİ BÜYÜK HARFE ÇEVİRME*/
#include <stdio.h>
void buyukHarfeCevir(char*);
int main() {
	char string[] = "Hello world 123";
	printf("cevirilmeden önceki string= %s", string);
	buyukHarfeCevir(string);
	printf(" \nCevirildikten sonraki string=%s", string);
	return 0;
}void buyukHarfeCevir(char*Ptr) {
	while (*Ptr != '\0') {
		if (*Ptr >= 'a' && *Ptr <= 'z') {
			*Ptr = *Ptr - 32;
		}*Ptr++;
	}
}



