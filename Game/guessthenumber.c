#include <stdio.h>
#include<time.h>
#include<stdlib.h>

///@param x random number
int genenum(int x){ //generating random number
    srand( time(NULL) );
    {
    x=rand() % 1001;
    //printf("Number: %d \n", x);
    }
    return x;
}
///@param X random number
///@param R player`s answer
///@param T trys
int game(int X, int R, int T){ //game
    while(R!=X){
        printf("Type the number: ");
        scanf("%d", &R);

    if(R>X){
        printf("My number is smaller!\n\n");
    }
    else if (R<X){
        printf("My number is bigger!\n\n");
    }
        ++T;
    }
    return T;
}

int main(void) {

    printf("                   ******GUESS THE NUMBER******\n\n");
    printf("Instructions: Guess the number (0 to 1000) Keep typing and I`ll say if my number is bigger or smaller than the answer! Good luck!\n\n");

    int resp=-1;//player`s number choice
    int x=0; //answer
    int tent=0; //number of try

    x=genenum(x);//function for generate the number
    tent=game(x,resp,tent);//function for trys

    if(tent==1){
    printf("YOU`RE THE MAGE MASTER\n");  
    }
    else if(tent>1 && tent<=5){
    printf("NICE!\n");  
    }
    else if(tent>5 && tent<=10){
    printf("TOP 10\n");
    }
    else if(tent>10 && tent<=20){
    printf("Hum....you´re good, I guess haha\n");  
    }
    else if(tent>20){
    printf("Man....You´re very bad...sorry\n");
    }
    printf("Congratulations! You did it in %d try(s)! :D", tent);

    return 0;
}