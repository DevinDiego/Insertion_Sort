#include <iostream>

void insertionSort(int arr[], const int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;         
        int x = arr[i]; 
       
        while (j > -1 && arr[j] > x)
        {
            std::cout << "arr[j + 1]: " << arr[j + 1] << " = "
                << "arr[j]: " << arr[j] << " | j = " << j 
                << " | x = " << x <<  "\n";
            arr[j + 1] = arr[j];             
            j--;
            
        }
        arr[j + 1] = x;
    }
}

void insertionSort2(int* v, const int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int x = v[i];

        while (j > -1 && v[j] > x)
        {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = x;
    }
}

void display(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}

int main()
{		
    int arr[] = { 9, 2, 1, 3, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);
    
    display(arr, size);

    std::cout << "\n";

    int arr1[] = { 9, 2, 1, 3, 7 };
    int size1 = sizeof(arr1) / sizeof(arr[0]);
    int* A = arr1;

    insertionSort2(A, size1);

    for (int i = 0; i < size1; i++)
        std::cout << A[i] << " ";
    std::cout << "\n";



	std::cout << "\n\n";
	system("pause");
	return 0;
}