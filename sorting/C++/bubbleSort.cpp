#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

vector<int> bubbleSort(vector<int> array) {
    int i = 0;
    int numberOfIndexes = array.size();
    while (i < numberOfIndexes) {
        for (int j = 0; j < numberOfIndexes; j++) {
            if (array[j] > array[j+1] && j != numberOfIndexes) {
                int currentIndex = array[j];
                int nextIndex = array[j+1];
                array[j] = nextIndex;
                array[j+1] = currentIndex;
            }
        }
        numberOfIndexes--;
    }
    return array;
}

int main() {
    vector<int> testArray = {7468, 1132, 8237, 9027, 4669, 4612, 8754, 3350, 9947, 1220, 4168, 3575, 4205, 6357, 7001, 6989, 4576, 4808, 3093, 1171, 8200, 4841, 4678, 9323, 5477, 1903, 9195, 8768, 1481, 6290, 9284, 9605, 239, 7378, 8274, 7322, 6380, 7056, 3823, 2208, 7355, 6339, 7263, 9169, 9914, 4817, 5894, 3310, 4782, 9777, 3529, 1885, 1312, 9931, 9426, 6273, 1834, 701, 377, 4222, 9076, 5797, 9450, 2409, 3341, 2659, 6513, 7402, 8031, 7218, 1557, 814, 1514, 1609, 6103, 3538, 8600, 6184, 887, 8245, 5222, 1866, 1607, 3855, 3771, 8767, 9898, 2957, 9483, 5982, 1229, 7710, 7429, 5909, 488, 913, 7706, 8846, 4330, 8261 };
    vector<int> sortedArray = bubbleSort(testArray);

    /* Looping through the vector to print it */
    for (int k = 0; k < sortedArray.size(); k++) {
        cout << sortedArray[k] << ", ";
    }
    return 0;
}
