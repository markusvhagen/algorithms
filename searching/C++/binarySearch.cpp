#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int binarySearch(vector<int> inArray, int searchFor) {
    int minIndex = 0;
    int maxIndex = inArray.size() - 1;
    int midIndex = floor((minIndex+maxIndex)/2);

    while (maxIndex >= minIndex) {
        midIndex = floor((minIndex+maxIndex)/2);

        if (searchFor < inArray[midIndex]) {
            maxIndex = midIndex - 1;
        }

        else if (searchFor > inArray[midIndex]) {
            minIndex = midIndex + 1;
        }

        else if (searchFor == inArray[midIndex]) {
            return midIndex;
            break;
        }
    }
}

int main() {
    vector<int> testVector = { 1, 3, 4, 5, 9, 11, 18, 22, 31, 42, 69, 100, 101, 102, 450, 999 };
    cout << binarySearch(testVector, 101);
    return 0;
}
