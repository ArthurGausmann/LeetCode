/*
3110.
You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.
Return the score of s.
*/

int scoreOfString(char* s) {
    int score = 0;
    for ( int i = 0; s[ i ]!= '\0'; i++) {
        if ( s[ i + 1 ] != '\0' ) {
            score += abs( s[ i ] - s[ i + 1 ]);
        }
    }
    return score;
}