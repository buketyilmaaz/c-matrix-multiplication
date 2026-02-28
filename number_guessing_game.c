#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int secretNumber;
    int guess;
    int counter = 0;

    srand(time(NULL));  // random sayı üretmek için
    secretNumber = rand() % 100 + 1;

    printf("I picked a number between 1 and 100.\n");

    while(1){

        printf("Enter your guess: ");
        scanf("%d", &guess);

        counter++;

        if(guess > secretNumber){
            printf("Your guess is too big!\n");
        }
        else if(guess < secretNumber){
            printf("Your guess is too small!\n");
        }
        else{
            printf("Congratulations! You found the number.\n");
            printf("Total attempts: %d\n", counter);
            break;
        }
    }

    return 0;
}
