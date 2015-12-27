//
//  main.c
//  FuzzBizzNezz
//
//  Created by Thiago Heitling on 2015-12-23.
//  Copyright © 2015 Thiago Heitling. All rights reserved.
//

#include <stdio.h>

int main() {
    int fuzz = 0;
    int bizz = 0;
    int nezz = 0;
    while (fuzz <= 0) {
        printf("Please, enter a positive number: ");
        scanf("%i", &fuzz);
    }
    while (bizz <= fuzz) {
        printf("Please, enter another number greater than %i: ", fuzz);
        scanf("%i", &bizz);
    }
    while (nezz <= bizz) {
        printf("Please, enter a last number greater than %i: ", bizz);
        scanf("%i", &nezz);
    }
    printf("List of numbers from 1 to %i. Printed <Fuzz> for multiples of %i, <Bizz> for multiples of %i and <FuzzBizz> for multiples of both %i and %i: \n", nezz, fuzz, bizz, fuzz, bizz);
    for (int i = 1; i <= nezz; i++) {
        if(i % fuzz == 0 && i % bizz == 0) {
            printf("FuzzBizz \n");
        }
        else if (i % fuzz == 0) {
            printf("Fuzz \n");
        }
        else if (i % bizz == 0) {
            printf("Bizz \n");
        }
        else {
            printf("%i \n", i);
        }
    }
    return 0;
}
