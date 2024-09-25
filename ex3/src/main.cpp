// #include <iostream>
// #include <vector>
// #include <memory> 
// #include <string>

// using namespace std;

// class Candidate {
// protected:
//     string id;
//     string name;
//     string address;
//     int priority;

// public:
//     Candidate(string _id, string _name, string _address, int _priority)
//         : id(_id), name(_name), address(_address), priority(_priority) {}

//     virtual ~Candidate() = default;

//     string getId() const {
//         return id;
//     }

//     virtual void showInfo() const {
//         cout << "ID: " << id << ", Name: " << name
//              << ", Address: " << address << ", Priority: " << priority << endl;
//     }

//     virtual string getCategory() const = 0;
// };

// class CandidateA : public Candidate {
// public:
//     CandidateA(string _id, string _name, string _address, int _priority)
//         : Candidate(_id, _name, _address, _priority) {}

//     void showInfo() const override {
//         cout << "Candidate A - ";
//         Candidate::showInfo();
//     }

//     string getCategory() const override {
//         return "A";
//     }
// };

// class CandidateB : public Candidate {
// public:
//     CandidateB(string _id, string _name, string _address, int _priority)
//         : Candidate(_id, _name, _address, _priority) {}

//     void showInfo() const override {
//         cout << "Candidate B - ";
//         Candidate::showInfo();
//     }

//     string getCategory() const override {
//         return "B";
//     }
// };

// class CandidateC : public Candidate {
// public:
//     CandidateC(string _id, string _name, string _address, int _priority)
//         : Candidate(_id, _name, _address, _priority) {}

//     void showInfo() const override {
//         cout << "Candidate C - ";
//         Candidate::showInfo();
//     }

//     string getCategory() const override {
//         return "C";
//     }
// };

// class ManagerCandidate {
// private:
//     vector<shared_ptr<Candidate>> candidates;

// public:
//     void add(const shared_ptr<Candidate>& candidate) {
//         candidates.push_back(candidate);
//     }

//     void showInfo() const {
//         for (const auto& candidate : candidates) {
//             candidate->showInfo();
//         }
//     }

//     shared_ptr<Candidate> searchById(const string& id) const {
//         for (const auto& candidate : candidates) {
//             if (candidate->getId() == id) {
//                 return candidate;
//             }
//         }
//         return nullptr;
//     }
// };

// shared_ptr<Candidate> createCandidate(const string& cate) {
//     string id, name, address;
//     int priority;
//     cout << "Enter ID: ";
//     cin >> id;
//     cout << "Enter name: ";
//     cin.ignore(); // Clear the buffer
//     getline(cin, name);
//     cout << "Enter address: ";
//     getline(cin, address);
//     cout << "Enter Priority: ";
//     cin >> priority;

//     if (cate == "a") {
//         return make_shared<CandidateA>(id, name, address, priority);
//     } else if (cate == "b") {
//         return make_shared<CandidateB>(id, name, address, priority);
//     } else {
//         return make_shared<CandidateC>(id, name, address, priority);
//     }
// }

// int main() {
//     ManagerCandidate manager;
//     string choice;

//     while (true) {
//         cout << "Application Manager Candidate\n";
//         cout << "Enter 1: To insert candidate\n";
//         cout << "Enter 2: To show information of candidates\n";
//         cout << "Enter 3: To search candidate by ID\n";
//         cout << "Enter 4: To exit\n";
//         cout << "Your choice: ";
//         cin >> choice;

//         if (choice == "1") {
//             cout << "Enter a: to insert Candidate A\n";
//             cout << "Enter b: to insert Candidate B\n";
//             cout << "Enter c: to insert Candidate C\n";
//             string type;
//             cin >> type;

//             if (type == "a" || type == "b" || type == "c") {
//                 manager.add(createCandidate(type));
//             } else {
//                 cout << "Invalid candidate type!\n";
//             }
//         } else if (choice == "2") {
//             manager.showInfo();
//         } else if (choice == "3") {
//             cout << "Enter ID: ";
//             string id;
//             cin >> id;
//             auto candidate = manager.searchById(id);
//             if (candidate) {
//                 candidate->showInfo();
//             } else {
//                 cout << "Not found\n";
//             }
//         } else if (choice == "4") {
//             cout << "Exiting program.\n";
//             break;
//         } else {
//             cout << "Invalid choice!\n";
//         }
//     }

//     return 0;
// }


#include "../inc/CandidateA.h"
#include "../inc/CandidateB.h"
#include "../inc/CandidateC.h"
#include "../inc/TuyenSinh.h"
#include <iostream>
#include <memory>

std::shared_ptr<Candidate> taoThiSinh(const std::string& khoiThi) {
    std::string soBaoDanh, hoTen, diaChi;
    int mucUuTien;

    std::cout << "Nhap so bao danh: ";
    std::cin >> soBaoDanh;
    std::cout << "Nhap ho ten: ";
    std::cin.ignore();
    std::getline(std::cin, hoTen);
    std::cout << "Nhap dia chi: ";
    std::getline(std::cin, diaChi);
    std::cout << "Nhap muc uu tien: ";
    std::cin >> mucUuTien;

    if (khoiThi == "a") {
        return std::make_shared<CandidateA>(soBaoDanh, hoTen, diaChi, mucUuTien);
    } else if (khoiThi == "b") {
        return std::make_shared<CandidateB>(soBaoDanh, hoTen, diaChi, mucUuTien);
    } else {
        return std::make_shared<CandidateC>(soBaoDanh, hoTen, diaChi, mucUuTien);
    }
}

int main() {
    TuyenSinh ts;
    std::string luaChon;

    while (true) {
        std::cout << "1. Them thi sinh\n2. Hien thi thong tin thi sinh\n3. Tim kiem theo SBD\n4. Thoat\n";
        std::cout << "Nhap lua chon: ";
        std::cin >> luaChon;

        if (luaChon == "1") {
            std::string khoiThi;
            std::cout << "Nhap khoi thi (a: Khoi A, b: Khoi B, c: Khoi C): ";
            std::cin >> khoiThi;
            if (khoiThi == "a" || khoiThi == "b" || khoiThi == "c") {
                ts.themThiSinh(taoThiSinh(khoiThi));
            } else {
                std::cout << "Khoi thi khong hop le!\n";
            }
        } else if (luaChon == "2") {
            ts.hienThiThiSinh();
        } else if (luaChon == "3") {
            std::string soBaoDanh;
            std::cout << "Nhap so bao danh: ";
            std::cin >> soBaoDanh;
            auto thiSinh = ts.timKiemTheoSBD(soBaoDanh);
            if (thiSinh) {
                thiSinh->showInfo();
            } else {
                std::cout << "Khong tim thay thi sinh.\n";
            }
        } else if (luaChon == "4") {
            std::cout << "Thoat chuong trinh.\n";
            break;
        } else {
            std::cout << "Lua chon khong hop le!\n";
        }
    }

    return 0;
}
