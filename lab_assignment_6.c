#include <stdio.h>

int binarySearch(int numbers[], int low, int high, int value) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (numbers[mid] == value)
        return mid;
    else if (numbers[mid] < value)
        return binarySearch(numbers, mid + 1, high, value);
    else
        return binarySearch(numbers, low, mid - 1, value);
}

int search(int numbers[], int low, int high, int value) {
    return binarySearch(numbers, low, high, value);
}

int main() {
    // Test case from the provided input
    int numbers[] = {3, 6, 'a', 'b', 'c', 'd', 'e', 'f'};
    int low = 4;
    int high = 7;
    int value = 'd';

    int index = search(numbers, low, high, value);

    printf("Index: %d\n", index);

    return 0;
}
