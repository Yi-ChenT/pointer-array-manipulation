#include <stdio.h>
// Prototype of calculateSumOfArray
int calculateSumOfArray(int* arr, int size);
// Prototype of avgOfArray
double avgOfArray(int* arr, int size);
// Prototype of modifyTheElement
void modifyTheElement(int* arr, int size, int index, int newElement);
// Prototype of demonstrateTheArray
void demonstrateTheArray(int* arr, int size);
// Declare a constant to use in the array and avoid using magic number
const int maxArraySize = 10;

int main(void) {
    // Declare a array to store the predefined value
    int predefinedArray[maxArraySize] = { 10, 0, 345, -567, 7, 89, 256, 512, -2048, 4096 };
    // Using sizeof to calculate the size of the array
    int arraySize = sizeof(predefinedArray) / sizeof(predefinedArray[0]);
    // Declare a pointer to an integer pArray and initilizes it to the first element of the array
    int* pArray = predefinedArray;
    // Using calculateSumOfArray function to calculate the sum of the array and store the result to the variable
    int theSum = calculateSumOfArray(pArray, arraySize);
    // Using avgOfArray function to calculate the average of the array and store the result to the variable
    double theAverage = avgOfArray(pArray, arraySize);
    // Print the word and the value of sum of the array to the screen
    printf("Sum of array elements: %d\n", theSum);
    // Print the word and the value of average of the array with four precision to the screen
    printf("Average of array elements: %.2f\n", theAverage);
    // Using modifyTheElement function to modify the third value in the array to the number 123
    modifyTheElement(pArray, arraySize, 3, 123);
    // Print the word to the screen
    printf("Array elements after modification:\n");
    // Using demonstrateTheArray function to display the array that is after modified
    demonstrateTheArray(pArray, arraySize);
    // return 0 indicates the program runs correctly
    return 0;
}

/* FUNCTION:
   calculateSumOfArray
   DESCRIPTION :
   This function is to calculate the sum of the array with predefined value
   PARAMETERS :
   pointer arr: the pointer to array and represents the starting position of the array
   int size   : the size of the array and represents how many elements in the array
   RETURNS :
   int sum : the sum of the array
*/
int calculateSumOfArray(int* arr, int size) {
    // Declare the variable to store the sum of the array
    int sum = 0;
    // Using for loop to detect the size of the array and plus every element from the array
    for (int i = 0; i < size; i++) {
        // Store the value of the sum in the variable sum
        sum += *(arr + i);
    }
    // Return sum to let main function call to use
    return sum;
}


/* FUNCTION:
   avgOfArray
   DESCRIPTION :
   This function is to calculate the average of the array with predefined value
   PARAMETERS :
   pointer arr: the pointer to array and represents the starting position of the array
   int size   : the size of the array and represents how many elements in the array
   RETURNS :
   int sum : the average of the array
*/
double avgOfArray(int* arr, int size) {
    // Using if statement to check if the size is 0 or not
    if (size != 0) {
        // If the size is not 0, then store the sum of the array by using calculateSumOfArray function to the variable sum
        int sum = calculateSumOfArray(arr, size);
        // Declare a variable to store the average of the array
        double avg = (double)sum / (double)size;
        // Return the avg to let the main function call to use
        return avg;
    }
    // If the size is 0
    else {
        // Print the error message to the screen
        printf("Error: Division by zero is not allowed.\n");
        // Return -1 indicates the program runs incorrectly
        return -1;
    }
}

/* FUNCTION:
   modifyTheElement
   DESCRIPTION :
   This function is to modify the element from the array
   PARAMETERS :
   pointer arr: the pointer to array and represents the starting position of the array
   int size   : the size of the array and represents how many elements in the array
   int index  : the index of the array that is used to modify
   int newElement : a int variable to store the modified element
   RETURNS :
   Return 0 indicates the program runs correctly and return -1 indicates the program runs incorrectly
*/
void modifyTheElement(int* arr, int size, int index, int newElement) {
    // Using if statement to check if index is positve and less than the size
    if (index >= 0 && index < size) {
        // Store the new element into the specified array index
        *(arr + index) = newElement;
    }
    // If the index is negative or greater than the size
    else {
        // Print the error message to the screen
        printf("Error: Index is out of the range.\n");
    }
}

/* FUNCTION:
   demonstrateTheArray
   DESCRIPTION :
   This function is to display the each element in the array
   PARAMETERS :
   pointer arr: the pointer to array and represents the starting position of the array
   int size   : the size of the array and represents how many elements in the array
   RETURNS :
   No return
*/
void demonstrateTheArray(int* arr, int size) {
    // Using for loop to detect the size of the array and print each element in the array
    for (int i = 0; i < size; i++) {
        // Print each element to the screen
        printf("%d ", *(arr + i));
    }
}