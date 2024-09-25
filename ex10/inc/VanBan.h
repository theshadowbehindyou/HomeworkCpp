#ifndef VANBAN_H
#define VANBAN_H

#include <string>

class VanBan {
private:
    std::string text;

public:
    VanBan();                          
    VanBan(const std::string& st);      

    int demSoTu() const;

    int demKyTuA() const;

    void chuanHoaVanBan();
    
    std::string getText() const;
};

#endif // VANBAN_H
