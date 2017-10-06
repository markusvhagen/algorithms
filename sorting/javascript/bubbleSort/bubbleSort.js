function bubbleSort(array) {
    var thisIndex;
    var nextIndex;
    var n = 0;
    var numberOfIndexes = array.length - 1;

    while (n < numberOfIndexes) {
        for (var i = 0; i < numberOfIndexes; i++) {
            if (array[i] > array[i+1]) {
                thisIndex = array[i];
                nextIndex = array[i+1];
                array[i] = nextIndex;
                array[i+1] = thisIndex;
            }
        }
        numberOfIndexes--;
    }
    return array;
}

document.getElementById("submit").onclick = function() {
    var input = document.getElementById("arrayInput").value;
    var inputConvertedToArray = input.split(",");
    for (var i = 0; i < inputConvertedToArray.length; i++) {
        inputConvertedToArray[i] = parseInt(inputConvertedToArray[i]);
    }
    var timeStart = Date.now();
    document.getElementById("sortedArrayOutput").innerHTML = bubbleSort(inputConvertedToArray);
    document.getElementById("timeUsedToSort").innerHTML = (Date.now() - timeStart) + "ms";
}
