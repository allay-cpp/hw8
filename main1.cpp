#include<iostream>
#include <string>

void print(int* numbers, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << numbers[i];
	    std::cout << (i < size - 1 ? ' ' : '\n');
    }
    std::cout << std::endl;
}

int main(int argc, char** argv)
{
    int arr1[] = { 3, 4, 5 };
    int arr2[] = { 0, 1 };
    int arr3[] = { 101, 102, 103, 104, 105, 106, 107, 108, 109, 110 };
    print(arr1, 3);
    print(arr2, 2);
    print(arr3, 10);
    return 0;

}
