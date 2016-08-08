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
    
    int options[4] = {1, 2, 3, 4};
    
    bool rtn = false;
    
    for (int i = 0; i < 3 ; i++) {
        
        if (&number == &options[i]) {
            rtn = true;
        }
    }
    
    printf("inside isInUserOptions: %d", number);
    
    return rtn;
    
}

int main(int argc, const char * argv[]) {
    
    printf("Would you like to do addition (enter 1), subtraction (enter 2), multiplication (enter 3), or divison(enter 4)\n?");
    
    int option = -1;
    int _error = -1;
    bool running = true;
    
    _error = scanf("%d",&option);
    
    while (running) {
        
        if (_error != 0 || isInUserOptions(option) == false) {
            running = false;
        }
    }
    
    printf("Thanks for playing.\n");
    
    return 0;
}
