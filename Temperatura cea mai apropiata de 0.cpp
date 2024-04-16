// Temperatura cea mai apropiata de 0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>

int abs(int x) {
    return x < 0 ? -x : x;
}

int main() {
    int n;
    std::cin >> n;

    int closestTemp = 1000000; // Inițializăm cu o valoare suficient de mare
    int temperature;

    for (int i = 0; i < n; ++i) {
        std::cin >> temperature;

        if (abs(temperature) < abs(closestTemp) || (abs(temperature) == abs(closestTemp) && temperature > 0)) {
            closestTemp = temperature;
        }
    }

    std::cout << closestTemp << std::endl;

    return 0;
}



