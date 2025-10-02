/*
1518.
There are numBottles water bottles that are initially full of water. You can exchange numExchange empty water bottles from the market with one full water bottle.
The operation of drinking a full water bottle turns it into an empty bottle.
Given the two integers numBottles and numExchange, return the maximum number of water bottles you can drink.
*/

int numWaterBottles(int numBottles, int numExchange) {
    int bebidas = 0, vazias = 0;
    while( numBottles >= numExchange ) {
        int divisao = numBottles / numExchange;
        bebidas += numExchange * divisao;
        numBottles -= numExchange * divisao;
        numBottles += divisao;
    }

    return bebidas + numBottles;
}