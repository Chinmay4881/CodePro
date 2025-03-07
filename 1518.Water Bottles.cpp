#include <iostream>

using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
    int total = numBottles;
    int empty = numBottles;

    while (empty >= numExchange) {
        int newB = empty / numExchange;
        total += newB;
        empty = empty % numExchange + newB;
    }

    return total;
}

int main() {
    int numBottles, numExchange;
    cin >> numBottles >> numExchange;
    cout << numWaterBottles(numBottles, numExchange) << endl;
    return 0;
}

   
