//
//  main.c
//  CCalculator
//
//  Created by Princess Sampson on 8/8/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

void generateNOddNumbers(int n) {
    
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0 ) {
            printf("%d \n", i);
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

int main(int argc, const char * argv[]) {
    
    bool running = true;
    char symbols[] = {'+', '-', '*', '/'};
    char option[1];
    
    while (running) {
        
        fpurge(stdin);
        
        printf(" Addition: enter + \n Subtraction: enter - \n Multiplication: enter * \n First n odd numbers: n \n Exit: enter x \n");
        scanf("%c", option);
        
        double firstNum;
        double secondNum;
        
        
        if (option[0] == symbols[0]) {
            
            printf("Enter the first operand:");
            scanf("%lf", &firstNum);
            
            printf("Enter the second operand:");
            scanf("%lf", &secondNum);
            
            printf("\n%lf + %lf = %lf \n",firstNum, secondNum, add(firstNum, secondNum));
            
        } else if(option[0] == symbols[1]) {
            
            printf("Enter the first operand:");
            scanf("%lf", &firstNum);
            
            printf("Enter the second operand:");
            scanf("%lf", &secondNum);
            
            printf("\n%lf - %lf = %lf \n",firstNum, secondNum, subtract(firstNum, secondNum));
            
            
        } else if(option[0] == symbols[2]) {
            
            printf("Enter the first operand:");
            scanf("%lf", &firstNum);
            
            printf("Enter the second operand:");
            scanf("%lf", &secondNum);
            
            printf("\n%lf * %lf = %lf \n",firstNum, secondNum, multiply(firstNum, secondNum));
            
            
        } else if(option[0] == 'n') {
            
            printf("Enter how many odd numbers you want:");
            
            scanf("%lf", &firstNum);
            
            generateNOddNumbers(firstNum);
            
            
        }
        
        else if(option[0] == 'x') {
            
            running = false;
        }
        
    }
    
    printf("Thanks for playing.\n");
    
    return 0;
}
