# algorithms
Trying to learn different algos

## Big-Oh notation
A way to express how an algorithm scales, also known as time complexity. What is the difference in how much time an algorithm use to decide an output between 10 elements and 1000 elements? Down below is a table with information about this. 

Notation | Name | Description
--- | --- | ---
**O(1)** | constant | The amount of time the algorithm uses is independent of the input - it stays the same all the time.
| **O(log n)** | logarithmic | For each iteration in the algorithm, the amount of elements is the halved. For example, if the amount of elements you start with is 100, the next iteration only handle 50, and the next 25, and so on. 
| **O(n)** | linear | The relation between the number of elements and running time is linear. If the number of elements doubles, the running time also doubles.
| **O(n log n)** | linearithmic | A typical average time complexity for the best sorting algorithms. This kind of time complexity occur when you have a loop (running in **O(log n)**) in a loop (running in **O(n)**). 
| **O(n^2)** | quadratic | The relation between the number of elements and running time is quadratic. If the number of elements doubles, the running time gets quadrupled. 
| **O(2^n)** | exponential | Adding just one element to the list doubles the running time. 
| **O(n!)** | factorial | If an algorithm has this type of time complexity, it generally scales really bad. An example is that you want to find all the ways (all the different combinations) of how you can place 5 pencils with each other. This evaluates to; 5 * 4 * 3 * 2 * 1 = 120.
