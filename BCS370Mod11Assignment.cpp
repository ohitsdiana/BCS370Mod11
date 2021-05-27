/*
* 
* Partner: Patrick Adams
* Module 11 Assignment
* 
* Diana Guerrero
* Professor Zhao
* BCS 370
* 11/23/20
* 
*/

#include <iostream>

/*
* Algorithm:
*   In order to get the minimum number in an array of integers, 
    we need a base case that will only be executed if the size
    of the array is 1. Otherwise, we can compare the current 
    element with the other elements using tail recursion

  Time Complexities:
    Space: O(n)
    Time: O(n)
*/

int minimum(int arr[], int size)
{
    // Base Case
    if (size == 1)
        return arr[0];

    // Tail Recursion
    return std::min(arr[size - 1], minimum(arr, size - 1));
}
int main()
{
    int arr[] = { 7, 2, 4, 15, -3, 12, 33 };
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "The smallest integer in this array is: " << minimum(arr, size) << std::endl;
    return 0;
} 