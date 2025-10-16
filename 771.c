/*
771.
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones 
is a type of stone you have. You want to know how many of the stones you have are also jewels. 
Letters are case sensitive, so "a" is considered a different type of stone from "A".
*/

int numJewelsInStones(char* jewels, char* stones) {
    int sizeJ;
    for (sizeJ = 0; jewels[sizeJ] != '\0'; sizeJ++);
    int sizeS;
    for (sizeS = 0; stones[sizeS] != '\0'; sizeS++);

    int output = 0;
    for ( int i = 0; i < sizeJ; i++ ) {
        for ( int u = 0; u < sizeS; u++ ) {
            if ( jewels[i] == stones[u] ) {
                output++;
            }
        }
    }

    return output;
}