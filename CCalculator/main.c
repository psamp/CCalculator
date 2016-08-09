//
//  main.c
//  CCalculator
//
//  Created by Princess Sampson on 8/8/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

void generateNOddNumbers(int n);
double add(int a, int b);
double subtract(int a, int b);
double multiply(int a, int b);
double divide(int a, int b);

int main(int argc, const char * argv[]) {
    
    bool running = true;
    char symbols[] = {'+', '-', '*', '/'};
    char option[1];
    
    while (running) {
        
        fpurge(stdin);
        
        printf("\nAddition: enter +\nSubtraction: enter -\nMultiplication: enter *\nDivision: enter /\nFirst n odd numbers: n\nTo exit: x\n");
        scanf("%c", option);
        
        double firstNum = 0;
        double secondNum = 0;
        
        if (option[0] == symbols[0] || option[0] == symbols[1] || option[0] == symbols[2] || option[0] == symbols[3]) {
            printf("Enter the first operand:");
            scanf("%lf", &firstNum);
            
            printf("Enter the second operand:");
            scanf("%lf", &secondNum);
            
        } else if (option[0] == 'n') {
            
            printf("Enter how many odd numbers you want:");
            
            scanf("%lf", &firstNum);
        
        } else if(option[0] == 'x') {
            running = false;
        }
        
        
        if (option[0] == symbols[0]) {
            
            printf("\n%lf + %lf = %lf \n",firstNum, secondNum, add(firstNum, secondNum));
            
        } else if(option[0] == symbols[1]) {
            
            printf("\n%lf - %lf = %lf \n",firstNum, secondNum, subtract(firstNum, secondNum));
            
            
        } else if(option[0] == symbols[2]) {
            
            printf("\n%lf * %lf = %lf \n",firstNum, secondNum, multiply(firstNum, secondNum));
            
            
        } else if(option[0] == symbols[3]) {
            
            bool noZeros = false;
            
            if (firstNum != 0 && secondNum != 0) {
                
                noZeros = true;
            } else {
                printf("\nCannot divide by 0. \n");
            }
            
            while (noZeros) {
                printf("\n%lf / %lf = %lf \n",firstNum, secondNum, divide(firstNum, secondNum));
                noZeros = false;
            }
            
        } else if(option[0] == 'n') {
            
            generateNOddNumbers(firstNum);
            
        }
    }
    
    printf("Thanks for playing.\n");
    
    return 0;
}

void generateNOddNumbers(int n) {
    
    int numbers[n*2];
    
    for (int i = 0; i < n*2; i++) {
        numbers[i] = i;
        
    }
    
    for (int i = 0; i < n*2; i++) {
        
        if(numbers[i] % 2 != 0) {
            printf("%d \n", numbers[i]);
        }
        
    }
    
}

double add(int a, int b) {
    return a + b;
}

double subtract(int a, int b) {
    return a - b;
}

double multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return a / b;
}
