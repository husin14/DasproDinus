#include <stdio.h>
#include <stdlib.h>

int main () {
    int A=12;
    int B=5;
    int C=B-A;
    B=20;

///   BARIS    A      B      C
///    5.      12    null   null
///    6.      12     5     null
///    7.      12     5      -7
///    8.      12     20     -7

    return 0;
}
