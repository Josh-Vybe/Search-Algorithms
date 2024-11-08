#include <iostream>
#include <vector>
#include <array>
#include "Searching.cpp" // Include the library file

int main() {
    // Pre-sorted vector for binary search
    std::vector<int> vec = {10, 20, 30, 30, 30, 40, 50, 60, 70, 70};
    std::array<int, 10> arr = {10, 20, 30, 30, 30, 40, 50, 60, 70, 70};
    
    int target;
    std::cout << "Enter the value of target: ";
    std::cin >> target;

    // Binary search in vector
    int index = binarySearch(vec, target);
    if (index != -1) {
        std::cout << "Binary search (vector): Element found at index " << index << std::endl;
    } else {
        std::cout << "Binary search (vector): Element not found." << std::endl;
    }

    // Binary search first occurrence in vector
    index = binarySearchFirst(vec, target);
    if (index != -1) {
        std::cout << "Binary search (first occurrence in vector): Element found at index " << index << std::endl;
    } else {
        std::cout << "Binary search (first occurrence in vector): Element not found." << std::endl;
    }

    // Linear search in vector
    index = linearSearch(vec, target);
    if (index != -1) {
        std::cout << "Linear search (vector): Element found at index " << index << std::endl;
    } else {
        std::cout << "Linear search (vector): Element not found." << std::endl;
    }

    // Binary search in array
    index = binarySearch(arr, target);
    if (index != -1) {
        std::cout << "Binary search (array): Element found at index " << index << std::endl;
    } else {
        std::cout << "Binary search (array): Element not found." << std::endl;
    }

    // Binary search first occurrence in array
    index = binarySearchFirst(arr, target);
    if (index != -1) {
        std::cout << "Binary search (first occurrence in array): Element found at index " << index << std::endl;
    } else {
        std::cout << "Binary search (first occurrence in array): Element not found." << std::endl;
    }

    // Linear search in array
    index = linearSearch(arr, target);
    if (index != -1) {
        std::cout << "Linear search (array): Element found at index " << index << std::endl;
    } else {
        std::cout << "Linear search (array): Element not found." << std::endl;
    }

    return 0;
}
