

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(int* a, const int n, const int Low, const int High,int i) {
    a[i]=Low + rand() % (High - Low + 1);
    if (i < n - 1) {
        create(a, n, Low, High, i + 1);
    }
}

void print(int* a, const int n, int i) {
    cout << setw(4) << a[i];

    if (i < n - 1) {
        print(a, n, i + 1);
    }
    else {
        cout << endl;
    }
    
    
}
double AverageMinMax(int* a, const int n,int i,int min,int max) {

    if (a[i] > max) {
        max = a[i];
    }

    if (a[i] < min) {
        min = a[i];
    }

    if (i < n - 1) {
       return AverageMinMax(a, n, i + 1,min,max);
    }
    return (1.0 * (min + max)) / 2;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 10;
    const int Low = -20, High = 20;
    int a[n];

    create(a, n, Low, High,0);
    print(a, n,0);

    cout << AverageMinMax(a, n,0,a[0],a[0]);
}

