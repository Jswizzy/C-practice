//
// Created by justin smith on 5/8/17.
//

#include <stdio.h>

main() {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}