//
//  main.c
//  CCalculator
//
//  Created by Princess Sampson on 8/8/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include "BasicMath.h"

bool isInUserOptions(int number) {
    
    int options[5] = {1, 2, 3, 4, 5};
    
    bool rtn = false;
    
    for (int i = 0; i < 4 ; i++) {
        
        if (&number == &options[i]) {
            rtn = true;
        }
    }
    
    return rtn;
    
}

int main(int argc, const char * argv[]) {
    
    printf("Would you like to do addition (enter 1), subtraction (enter 2), multiplication (enter 3), or divison(enter 4)? Or would you like to generate n amount of odd numbers (enter 5)?");
    
    int option = -1;
    int _error = -1;
    
    _error = scanf("%d",&option);
    
    printf("Thanks for playing.");
    fpurge(stdin);
}
