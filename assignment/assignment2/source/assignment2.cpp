#include <iostream>
#include <math.h>

float x1(int a, int b, int c, float ret)
{

    float x1;
    x1 = (-b + sqrt(ret)) / (2 * a);
    return x1;
}

float x2(int a, int b, int c, float ret)
{

    float x2;
    x2 = (-b - sqrt(ret)) / (2 * a);
    return x2;
}

float determinant (int a[3][3])
{
    float det;
    int i = 0;
    while (i < 3) 
    {
        det = det + (a[0][i] * (a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3]));
        ++i;
    }
    return det;        
}

int main()
{

    int j;
    std::cout << "Enter 1 or 0 " << std::endl;
    std::cin >> j;

    if (j == 0)
    {

        float a = 0;
        float b = 0;
        float c = 0;

        std::cout << "Enter the number a , b and c " << std::endl;
        std::cin >> a >> b >> c;

        float l = 0;
        l = (b * b) - (4 * a * c);

        if (l > 0)
        {

            std::cout << "x1 = " << x1(a, b, c, l) << std::endl;
            std::cout << "x2 = " << x2(a, b, c, l) << std::endl;
        }
        else if (l == 0)
        {

            std::cout << "x1 and x2 are : " << -b / (2 * a) << std::endl;
        }
        else if (l < 0)
        {

            std::cout << "There is no real value." << std::endl;
        }
    }
    else if (j == 1)
    {

        int arr[3][3] = {};
        std::cout << "Print the item for 3x3 matrix :" << std::endl;
        for (int i = 0; i < 3; ++i)
        {
            for (int j =0; j < 3; ++j)
            {
                std::cin >> arr[i][j];
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << "The determinant for the matrix is :" << std::endl;
        std::cout << determinant(arr) << std::endl;
        if (determinant(arr) == 0) 
        {
            std::cout << "The inverse of the matrix doesn't exit." << std::endl;
        } else 
        {
            std::cout << "The inverse of 3x3 matrix is :" << std::endl;
            for (int i = 0; i < 3; ++i) 
            {   
                for (int j = 0; j < 3; ++j) 
                {
                    std::cout << ((arr[(j+1)%3][(i+1)%3] * arr[(j+2)%3][(i+2)%3]) - (arr[(j+1)%3][(i+2)%3] * arr[(j+2)%3][(i+1)%3]))/ determinant(arr) << "\t";
                }
                std::cout << std::endl;
            }
        }
    }    
    return 0;
}

// |A| = arr(ei − fh) − b(di − fg) + c(dh − eg)

