#include <iostream>
#include <string>

void print_A(int i) {
    if (i == 0)
        std::cout << "   ###    ";
    else if (i == 4) {
        for (int j = 0; j < 9; j++)
            std::cout << "#";
        std::cout << " ";
    }
    else if (i == 5 || i == 6) {
        for (int j = 0; j < 9; j++) {
            if (j == 0 || j == 1 || j == 7 || j == 8)
                std::cout << "#";
            else
                std::cout << " ";
        }
        std::cout << " ";
    }
    else {
        std::string hash = "##";
        for (int k = 0; k < (3 - i); k++)
            std::cout << " ";
        std::cout << hash;
        for (int k = 0; k < (2 * (i - 1) + 1); k++)
            std::cout << " ";
        std::cout << hash;
        for (int k = 0; k < (3 - i); k++)
            std::cout << " ";
        std::cout << " ";
    }
}

void print_R(int i) {
    if (i == 0 || i == 3)
        std::cout << "########  ";
    else {
        for (int j = 0; j < 9; j++) {
            if (j == 0 || j == 1 || j == 7 || j == 8)
                std::cout << "#";
            else
                std::cout << " ";
        }
        std::cout << " ";
    }
}

void print_M(int i) {
    if (i < 3) {
        int n = 2;
        for (int k = 0; k < (n + i); k++)
            std::cout << "#";
        for (int k = 0; k < (2 * ((3 - i) - 1) + 1); k++)
            std::cout << " ";
        for (int k = 0; k < (n + i); k++)
            std::cout << "#";
        std::cout << " ";
    }
    else if (i == 3) {
        std::cout << "## ### ## ";
    }
    else {
        for (int j = 0; j < 9; j++) {
            if (j == 0 || j == 1 || j == 7 || j == 8)
                std::cout << "#";
            else
                std::cout << " ";
        }
        std::cout << " ";
    }
}

void print_I(int i) {
    if (i % 6 == 0)
        std::cout << "#### ";
    else
        std::cout << " ##  ";
}

void print_T(int i) {
    if (i == 0)
        std::cout << "######## ";
    else
        std::cout << "   ##    ";
}

void print_O(int i) {
    if (i % 6 == 0)
        std::cout << " #######  ";
    else
        std::cout << "##     ## ";
}

int main() {
    for (int i = 0; i < 7; i++) {
        print_A(i);
        print_R(i);
        print_M(i);
        print_A(i);
        print_R(i);
        print_I(i);
        print_T(i);
        print_T(i);
        print_O(i);
        std::cout << std::endl;
    }
    return 0;
}