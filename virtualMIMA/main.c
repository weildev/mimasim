//
//  main.c
//  virtualMIMA
//
//  Created by Jacques Marco Jung on 30.11.16.
//  Copyright © 2016 Jacques Marco Jung. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    if (argc != 2) {
        return -1;
    }
    FILE *file;
    file = fopen(argv[1], "r");
    if (!file) {
        return -2;
    }
    __uint32_t programm[0x7FFFFF];
    char buffer[1000];
    while (fgets(buffer, sizeof(buffer), file)) {
        
    }
    return 0;
}
