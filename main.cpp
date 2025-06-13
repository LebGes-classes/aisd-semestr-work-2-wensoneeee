#include <iostream>;
using namespace std;

void shellsort(int n, int mass[])
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = mass[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < mass[j - step])
                    mass[j] = mass[j - step];
                else
                    break;
            }
            mass[j] = tmp;
        }
}

int main() {
    int arr[200];
    int n;
    cout << "enter amount:";
    cin >> n;

    printf("input the array:\n");
    for (int i = 0; i < n; i++)
        scanf_s("%d", &arr[i]);

    shellsort(n, arr);

    // Вывод отсортированного массива
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}