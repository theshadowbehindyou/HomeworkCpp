#include "../inc/VanBan.h"
#include <iostream>
#include <string>

int main() {
    std::string input;
    
    std::cout << "Nhap van ban: ";
    std::getline(std::cin, input);

    VanBan vb(input);

    std::cout << "So tu trong van ban: " << vb.demSoTu() << std::endl;

    std::cout << "So ky tu 'A' hoac 'a': " << vb.demKyTuA() << std::endl;

    vb.chuanHoaVanBan();
    std::cout << "Van ban sau khi chuan hoa: " << vb.getText() << std::endl;
    return 0;
}
