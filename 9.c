/*
9.
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

bool isPalindrome(int x) {
    int original = x, resto;
    double invertido = 0;

    if ( x == 0 ) {
        return true;
    } else {
        while ( x != 0 ) {
            resto = x % 10;
            invertido = invertido * 10 + resto;
            x /= 10;
        }

        if ( original == invertido && original > 0 ) {
            return true;
        } else {
            return false;
        }
    }
 
}