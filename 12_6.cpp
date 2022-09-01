#include <iostream>
#define MAX 100
using namespace std;
int result[MAX], count;
int n, x, arr[20], b[1000000];
void sort(int arr[], int n);
void print(int len);
void solve(int arr[], int n, int j, int sum);

int main()
{
    cin>>n>>x;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sort(arr, n);
    result[0] = arr[0];
    count = 0;
    solve(arr, n, 1, x);
    if (count == 0)
        printf("-1");
    printf("\n");
    return 0;
}

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void print(int len)
{
    for(int i = 0; i < 1e6; i++)
        b[i] = 0;
    int flat = 1;
    for (int i = 1; i <= len; i++)
    {
        b[result[i]]++;
        if(b[result[i]] > 1)
            flat = 0;
    }
       if(flat)
    printf("[");
    for (int i = 1; i <= len; i++)
    {
        if(flat == 0)
        break;
        printf("%d", result[i]);
        if (i != len)
            printf(" ");
    }
    if(flat)
    printf("] ");
}

void solve(int arr[], int n, int j, int sum)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= result[j - 1])
        {
            result[j] = arr[i];
            int temp = sum;
            sum -= arr[i];
            if (sum < 0)
                return;
            else if (sum == 0)
            {
                print(j);
                count++;
            }
            else
                solve(arr, n, j + 1, sum);
            sum = temp;
        }
    }
}
