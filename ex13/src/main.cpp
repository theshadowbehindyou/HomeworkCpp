#include "../inc/EmployeeManager.h"
#include "../inc/Experience.h"
#include "../inc/Fresher.h"
#include "../inc/Intern.h"
#include "../inc/Certificate.h"
#include <iostream>

int main() {
    EmployeeManager manager;
    int choice, id;

    do {
        std::cout << "\n=== QUẢN LÝ NHÂN VIÊN ===\n";
        std::cout << "1. Thêm nhân viên\n";
        std::cout << "2. Sửa thông tin nhân viên\n";
        std::cout << "3. Xóa nhân viên\n";
        std::cout << "4. Tìm nhân viên theo ID\n";
        std::cout << "5. Hiển thị tất cả nhân viên\n";
        std::cout << "6. Tìm tất cả nhân viên Intern\n";
        std::cout << "7. Tìm tất cả nhân viên Experience\n";
        std::cout << "8. Tìm tất cả nhân viên Fresher\n";
        std::cout << "0. Thoát\n";
        std::cout << "Nhập lựa chọn: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cout << "Nhập loại nhân viên (0: Experience, 1: Fresher, 2: Intern): ";
                int type;
                std::cin >> type;

                int id;
                std::string fullName, birthDay, phone, email;
                std::cout << "Nhập ID: ";
                std::cin >> id;
                std::cin.ignore();
                std::cout << "Nhập tên đầy đủ: ";
                getline(std::cin, fullName);
                std::cout << "Nhập ngày sinh: ";
                getline(std::cin, birthDay);
                std::cout << "Nhập số điện thoại: ";
                getline(std::cin, phone);
                std::cout << "Nhập email: ";
                getline(std::cin, email);

                if (type == 0) {
                    int expYear;
                    std::string proSkill;
                    std::cout << "Nhập số năm kinh nghiệm: ";
                    std::cin >> expYear;
                    std::cin.ignore();
                    std::cout << "Nhập kỹ năng chuyên môn: ";
                    getline(std::cin, proSkill);
                    manager.addEmployee(new Experience(id, fullName, birthDay, phone, email, expYear, proSkill));
                } else if (type == 1) {
                    std::string gradDate, gradRank, education;
                    std::cout << "Nhập ngày tốt nghiệp: ";
                    getline(std::cin, gradDate);
                    std::cout << "Nhập xếp loại tốt nghiệp: ";
                    getline(std::cin, gradRank);
                    std::cout << "Nhập trường tốt nghiệp: ";
                    getline(std::cin, education);
                    manager.addEmployee(new Fresher(id, fullName, birthDay, phone, email, gradDate, gradRank, education));
                } else if (type == 2) {
                    std::string majors, university;
                    int semester;
                    std::cout << "Nhập chuyên ngành: ";
                    getline(std::cin, majors);
                    std::cout << "Nhập học kỳ: ";
                    std::cin >> semester;
                    std::cin.ignore();
                    std::cout << "Nhập tên trường đại học: ";
                    getline(std::cin, university);
                    manager.addEmployee(new Intern(id, fullName, birthDay, phone, email, majors, semester, university));
                } else {
                    std::cout << "Loại nhân viên không hợp lệ!\n";
                }
                break;
            }
            case 2:
                std::cout << "Nhập ID nhân viên cần sửa: ";
                std::cin >> id;
                manager.updateEmployee(id);
                break;
            case 3:
                std::cout << "Nhập ID nhân viên cần xóa: ";
                std::cin >> id;
                manager.removeEmployee(id);
                break;
            case 4:
                std::cout << "Nhập ID nhân viên cần tìm: ";
                std::cin >> id;
                if (Employee* emp = manager.findEmployee(id)) {
                    emp->showInfo();
                } else {
                    std::cout << "Không tìm thấy nhân viên có ID này.\n";
                }
                break;
            case 5:
                manager.showAllEmployees();
                break;
            case 6:
                manager.findAllInterns();
                break;
            case 7:
                manager.findAllExperience();
                break;
            case 8:
                manager.findAllFreshers();
                break;
            case 0:
                std::cout << "Thoát chương trình.\n";
                break;
            default:
                std::cout << "Lựa chọn không hợp lệ.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
