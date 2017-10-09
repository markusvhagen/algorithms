# algorithms
Different search and sort algorithms in python and C++.

# Big-Oh notation
A way to express how an algorithm scales, also known as time complexity. What is the difference in how much time an algorithm use to decide an output between 10 elements and 1000 elements? Down below is a table with information about this. All logarithms in the table under are in base 2.

Notation | Name | Description
--- | --- | ---
**O(1)** | constant | The amount of time the algorithm uses is independent of the input - it stays the same all the time.
**O(log n)** | logarithmic | For each iteration in the algorithm, the amount of elements is the halved. For example, if the amount of elements you start with is 100, the next iteration only handle 50, and the next 25, and so on.
**O(n)** | linear | The relation between the number of elements and running time is linear. If the number of elements doubles, the running time also doubles.
**O(n log n)** | linearithmic | A typical average time complexity for the best sorting algorithms. This kind of time complexity occur when you have a loop (running in **O(log n)**) in a loop (running in **O(n)**).
**O(n^2)** | quadratic | The relation between the number of elements and running time is quadratic. If the number of elements doubles, the running time gets quadrupled.
**O(2^n)** | exponential | Adding just one element to the list doubles the running time.
**O(n!)** | factorial | If an algorithm has this type of time complexity, it generally scales really bad. An example is that you want to find all the ways (all the different combinations) of how you can place 5 pencils with respect to each other. This evaluates to; 5 * 4 * 3 * 2 * 1 = 120.

## Searching

### Binary search
**Best-case performance:** O(1) <br>
**Worst-case performance:** O(log n) <br>
**Analysis:** The best-case performance **O(1)** only happens if the first element that the algorithm checks, is the actual element that the user are searching for. Because the binary search algorithm halves the dataset for each iteration, the next dataset needs to be of size floor(log<sub>2</sub> k), where k is the size of the dataset from the previous iteration. Therefore the worst-case performance needs to be **O(log n)**.

## Sorting

### Bubble sort
**Best-case performance:** O(n) <br>
**Worst-case performance:** O(n^2) <br>
**Analysis:** If the array is already sorted, the algorithm will iterate once through all the elements. In the worst-case the outer loop will iterate **n** times, and the inner loop will also iterate **n** times, making it **n*n* = n^2** iterations.
