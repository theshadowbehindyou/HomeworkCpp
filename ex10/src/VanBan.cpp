#include "../inc/VanBan.h"
#include <sstream>
#include <algorithm>
#include <cctype>
#include <iostream>

VanBan::VanBan() : text("") {}

VanBan::VanBan(const std::string& st) : text(st) {}

int VanBan::demSoTu() const {
    if (text.empty()) return 0;
    std::istringstream iss(text);
    std::string word;
    int count = 0;
    while (iss >> word) {
        count++;
    }
    return count;
}

int VanBan::demKyTuA() const {
    return std::count_if(text.begin(), text.end(), [](char c) {
        return c == 'A' || c == 'a';
    });
}

void VanBan::chuanHoaVanBan() {
    text.erase(text.find_last_not_of(" \n\r\t")+1);
    text.erase(0, text.find_first_not_of(" \n\r\t"));

    bool inSpace = false;
    std::string result;
    for (char c : text) {
        if (isspace(c)) {
            if (!inSpace) {
                result += ' ';
                inSpace = true;
            }
        } else {
            result += c;
            inSpace = false;
        }
    }
    text = result;
}

std::string VanBan::getText() const {
    return text;
}
