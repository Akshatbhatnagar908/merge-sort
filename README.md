# Merge Sort in C++

This repository contains a simple and efficient implementation of the **Merge Sort** algorithm in C++.

## 📌 About

Merge Sort is a classic **divide and conquer** sorting algorithm with a time complexity of `O(n log n)`. It recursively splits the array into halves, sorts each half, and then merges them in a sorted manner.

## 🧠 Algorithm Steps

1. Divide the array into two halves.
2. Recursively sort both halves.
3. Merge the sorted halves into one.

## 🛠️ Features

* Recursive merge sort logic
* Uses a temporary array for merging
* Handles edge cases gracefully
* Written in clean, modern C++

## 🗞 Code Snippet

```cpp
vector<int> data{12, 14, 112, 113, 15, 19, 100};
vector<int> temp(data.size());
mergesort(data, temp, 0, data.size() - 1);
```

## 📂 Files

* `merge_sort.cpp`: Complete implementation of Merge Sort in C++.

## ▶️ How to Run

1. **Clone the repo:**

   ```bash
   git clone https://github.com/your-username/merge-sort-cpp.git
   cd merge-sort-cpp
   ```

2. **Compile the code:**

   ```bash
   g++ -std=c++11 merge_sort.cpp -o merge_sort
   ```

3. **Run the executable:**

   ```bash
   ./merge_sort
   ```

> If you’re using Dev-C++, make sure to enable C++11 from compiler settings (`-std=c++11`).

## 📈 Output

```
12
14
15
19
100
112
113
```

## 📘 Learn More

* [Merge Sort - GeeksForGeeks](https://www.geeksforgeeks.org/merge-sort/)
* [Merge Sort - Wikipedia](https://en.wikipedia.org/wiki/Merge_sort)

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
