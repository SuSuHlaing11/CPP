#include <iostream>
#include <string>
#include <cctype>
using std::string;
using namespace std;

int main () {
    int width;
    std::cout << "Enter the width : " << std::endl;
    std::cin >> width;

    char def = '*';
    char not_def ;
    std::cout << "If there is any better character to display, then..." << std::endl;
    std::cout << "please fill in your favorite character." << std::endl;
    std::cout << "If not, please enter n to exit." << std::endl;
    std::cin >> not_def;

    int s = width/2;
    for (int i = 0; i < (width/2)+2; i++) {
        for (int space = 0; space < s+1; space++) {
            std::cout << " "; 
        }
        for (int j = 0; j < 2*i-1; j++) {
            // std::cout << def ;
            if (not_def != 'n') {
                std::cout << not_def;
            } else if (not_def == 'n') {
                std::cout << def;
            }
        }
        std::cout << "\n";
        s = s - 1;
    }

    int s2 = (width/2); 
    for (int i = s2; i >= 1; i--) {
        for (int j = 0; j < s2 - i + 1; ++j) {
            std::cout << " ";
        }

        for (int j = (2 - i); j < (2 - i) + (2 * i - 1); j++) {
            if (not_def != 'n') {
                std::cout << not_def;
            } else if (not_def == 'n') {
                std::cout << def;
            }
        }
        std::cout << "\n";
    }
}