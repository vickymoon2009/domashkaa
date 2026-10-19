#include <iostream>
using namespace std;

void Init(int mas[], int size)
{
    for (int i = 0; i < size; i++)
    {
        mas[i] = rand() % 41 - 20;
    }
}

void Init(double mas[], int size)
{
    for (int i = 0; i < size; i++)
    {
        mas[i] = rand() % 100 * 1.6;
    }
}

void Init(char mas[], int size)
{
    for (int i = 0; i < size; i++)
    {
        mas[i] = rand() % 30 + 65;
    }
}

template<class T>
void Print(T mas[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << mas[i] << "|";
    }
    cout << endl;
}
template<class T>
int MinIndex(T mas[], int size)
{
    int index = 0;

    for (int i = 1; i < size; i++)
    {
        if (mas[i] < mas[index])
        {
            index = i;
        }
    }

    return index;
}

template<class T>
T MinValue(T mas[], int size)
{
    T min = mas[0];

    for (int i = 1; i < size; i++)
    {
        if (mas[i] < min)
        {
            min = mas[i];
        }
    }

    return min;
}

// 3. Возвращает сумму элементов

template<class T>
T Sum(T mas[], int size)
{
    T sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += mas[i];
    }

    return sum;
}

template<class T>
int CountPositive(T mas[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (mas[i] > 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int arr1[5];
    double arr2[10];
    char arr3[7];

    Init(arr1, 5);
    Init(arr2, 10);
    Init(arr3, 7);

    Print(arr1, 5);
    Print(arr2, 10);
    Print(arr3, 7);

    cout << "\nMinimum index: "
         << MinIndex(arr1, 5) << endl;

    cout << "Minimum value: "
         << MinValue(arr1, 5) << endl;

    cout << "Sum: "
         << Sum(arr1, 5) << endl;

    cout << "Positive elements: "
         << CountPositive(arr1, 5) << endl;

    return 0;
}
