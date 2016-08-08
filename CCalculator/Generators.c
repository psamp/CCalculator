//
//  Generators.c
//  CCalculator
//
//  Created by Princess Sampson on 8/8/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include <stdio.h>

void generateNOddNumbers(int n) {
    
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0 ) {
            printf("%d \n", i);
        }
    }
}
