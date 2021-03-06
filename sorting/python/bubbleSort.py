testArray = [7468, 1132, 8237, 9027, 4669, 4612, 8754, 3350, 9947, 1220, 4168, 3575, 4205, 6357, 7001, 6989, 4576, 4808, 3093, 1171, 8200, 4841, 4678, 9323, 5477, 1903, 9195, 8768, 1481, 6290, 9284, 9605, 239, 7378, 8274, 7322, 6380, 7056, 3823, 2208, 7355, 6339, 7263, 9169, 9914, 4817, 5894, 3310, 4782, 9777, 3529, 1885, 1312, 9931, 9426, 6273, 1834, 701, 377, 4222, 9076, 5797, 9450, 2409, 3341, 2659, 6513, 7402, 8031, 7218, 1557, 814, 1514, 1609, 6103, 3538, 8600, 6184, 887, 8245, 5222, 1866, 1607, 3855, 3771, 8767, 9898, 2957, 9483, 5982, 1229, 7710, 7429, 5909, 488, 913, 7706, 8846, 4330, 8261]
testArray2 = [1,2,3,4,5,6,7]

def bubbleSort(array):
    i = 0
    numberOfIndexes = len(array) - 1
    doneSorting = False;
    while i < numberOfIndexes and not doneSorting:
        doneSorting = True;
        for elements in range(0, numberOfIndexes):
            if array[i] > array[i+1] and i != numberOfIndexes:
                k = array[i]
                l = array[i+1]
                array[i] = l
                array[i+1] = k
                doneSorting = False;
            i += 1
        numberOfIndexes -= 1
        i = 0
    return array

print(bubbleSort(testArray))
