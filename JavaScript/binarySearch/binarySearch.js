var testArray = [1, 3, 4, 5, 9, 11, 18, 22, 31, 42, 69, 100, 101, 102, 450, 999];

function binarySearch(array, searchFor) {
    var maxIndex = array.length - 1;
    var minIndex = 0;
    var midIndex = Math.floor((minIndex + maxIndex)/2);

        while (maxIndex >= minIndex) {
            midIndex = Math.floor((minIndex + maxIndex)/2);

            if (searchFor < array[midIndex]) {
                console.log("lower");
                maxIndex = midIndex - 1;
            }

            else if (searchFor > array[midIndex]) {
                console.log("higher");
                minIndex = midIndex + 1;
            }

            else if (searchFor == array[midIndex]) {
                console.log("Found element at index " + midIndex);
                break;
            }
        }
}
