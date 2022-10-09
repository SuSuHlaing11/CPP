#include <iostream>

int main (){
    constexpr unsigned int sz = 3;
    // int a = 0, b = 1, c = 2;
    int *p = 0;
    int arr1[6] = {1, 2, 3};
    p = &arr1[3];
    // int *p = &arr[0];
    // int * parr[sz] = {&a, &b, &c};
    // int (&rofarr)[sz] = arr;
    // int twoD[5][5]= {};
    // std::cout << rofarr[2] << " " << std::endl;
    // for (int i = 0; i < sz; ++i) {
    //     // arr[i] += 1;
    //     arr[i] =i;
    //     std::cout << *(&arr + 1) << " " << std::endl;
    // }
    for (int i = 0; i < sz; i++) {
        *(p+i) = arr1[i];
    }
    for (int i = 0; i < 2*sz; i++) {
        std::cout << arr1[i] << " " << std::endl;
    }
    return 0;
}