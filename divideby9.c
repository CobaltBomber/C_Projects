#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Zach Wadhams, Lab #1

int order (int n) {  //Function that pulls off each digit from the user provided integer
    while(n > 1) {   //(Does it in reverse order, Professor Cummings said this was okay in class)
        printf("%d + ", n % 10);
        n /= 10;
    }
    printf("%d = ", n % 10);
    return(0);

}

int getSum(int n) { //Function that adds up the values of the digits in the number and returns that value
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;

}

int main(void) {

    int userInput = 1;

    while(userInput != 0) { //user input handling
        printf("Enter a number to check (0 to end program)");
        scanf("%d", &userInput);
        if (userInput == 0) exit(0);
        int sum = getSum(userInput);
        order(userInput);
        printf("%d \n", sum);
        
        if (sum % 9 == 0) { //Checks to see if the number is divisible by 9, runs this if it is
            printf("Since %d is divisible by 9, %d is divisible by 9 \n", sum, userInput);           
        }   

        else if(sum % 9 != 0) { //If the number is not divisible by 9, this runs
            printf("Since %d is not divisible by 9, %d is not divisible by 9 \n", sum, userInput);
        }
        
            
    }

return(0);
}


