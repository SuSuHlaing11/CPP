#include <iostream>

int max (int a[], int n) {

    int j = a[0];
    for (int i =1; i < n; ++i) {
        if (j < a[i]) {
            j = a[i];
        }
    }

    return j;
}

int mini (int a[], int n) {

    int j = a[0];
    for (int i =1; i < n; ++i) {
        if (j > a[i]) {
            j = a[i];
        }
    }

    return j;
}

int avg (int a[], int n) {

    int sum =0;
    int j;
    for (int i =0; i < n; ++i) {
        sum += a[i];
    }
    j = sum / n;

    return j;
}

int deavg (int a[], int n) {

    int sum = 0;
    int j;
    for (int i =1; i < n; ++i) {
        sum += a[i] - a[i-1];
    }
    j = sum / (n-1);

    return j;
}

int main () {

    int a;
    std::cout << "Enter 1 or 0 : " << std::endl;
    std::cin >> a;

    int n;
    std::cout << "Enter the amount of number : " << std::endl;
    std::cin >> n;

    int arr [n] = {};
    std::cout << "Print the item : " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    if (a == 0) {

        int ret;
        int ret1;
        ret = mini (arr,n);
        ret1 = max (arr,n);
        std::cout << "The minimum number is : " << ret << std::endl;
        std::cout << "The maximum number is : " << ret1 << std::endl;

    } else if (a == 1) {

        int ret;
        int ret1;
        ret = avg (arr,n);
        ret1 = deavg (arr,n);
        std::cout << "The average is : " << ret << std::endl;
        std::cout << "The average of differentiation is : " << ret1 << std::endl;
        
    }

    return 0;
}


