import math

testArray = [1, 3, 4, 5, 9, 11, 18, 22, 31, 42, 69, 100, 101, 102, 450, 999];

def binarySearch(array, searchFor):
    minIndex = 0
    maxIndex = len(array) - 1
    midIndex = math.floor((minIndex + maxIndex)/2)

    while maxIndex >= minIndex:
        midIndex = math.floor((minIndex + maxIndex)/2)

        if searchFor < array[midIndex]:
            print("lower")
            maxIndex = midIndex - 1

        elif searchFor > array[midIndex]:
            print("higher")
            minIndex = midIndex + 1

        elif searchFor == array[midIndex]:
            print("Found element at index " + str(midIndex))
            break

nInput = input("Search for: ")
binarySearch(testArray, int(nInput))
