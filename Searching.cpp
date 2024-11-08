#include <array>
#include <vector>

// Existing binarySearch implementation for vector
template<typename T>
int binarySearch(std::vector<T> vec, T target) {
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid potential overflow
        if (vec[mid] == target) {
            return mid; // Target found
        }
        else if (vec[mid] < target) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

// Modified binarySearchFirst for vector
template<typename T>
int binarySearchFirst(std::vector<T> vec, T target) {
    int index = binarySearch(vec, target); // Find any occurrence
    if (index == -1) return -1;           // If not found, return -1

    // Traverse left to find the first occurrence
    while (index > 0 && vec[index - 1] == target) {
        --index;
    }
    return index; // Return the first occurrence index
}

// Existing binarySearch implementation for array
template<typename T, std::size_t N>
int binarySearch(std::array<T, N> arr, T target) {
    int left = 0;
    int right = N - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid potential overflow
        if (arr[mid] == target) {
            return mid; // Target found
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

// Modified binarySearchFirst for array
template<typename T, std::size_t N>
int binarySearchFirst(std::array<T, N> arr, T target) {
    int index = binarySearch(arr, target); // Find any occurrence
    if (index == -1) return -1;           // If not found, return -1

    // Traverse left to find the first occurrence
    while (index > 0 && arr[index - 1] == target) {
        --index;
    }
    return index; // Return the first occurrence index
}
