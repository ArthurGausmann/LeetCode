// 3110.

#include <stdlib.h>
#include <stdio.h>

int scoreOfString(char* s) {
    int score = 0;
    for ( int i = 0; s[ i ]!= '\0'; i++) {
        if ( s[ i + 1 ] != '\0' ) {
            score += abs( s[ i ] - s[ i + 1 ]);
        }
    }
    return score;
}

int main() {
    char* palavra = "guanabara";
    printf( "%d\n", scoreOfString(palavra) );

    return 0;
}