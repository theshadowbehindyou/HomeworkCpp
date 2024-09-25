#include <iostream>
#include <vector>
#include <memory>
#include "../inc/RegularStudent.h"
#include "../inc/InserviceStudent.h"
#include "../inc/Department.h"

int main() {
    Department department("Khoa Công Nghệ Thông Tin");
    int choice = 0;
    while (true) {
        std::cout << "===============================MAIN=============================" << std::endl;
        std::cout << "1. Thêm sinh viên chính quy" << std::endl;
        std::cout << "2. Thêm sinh viên tại chức" << std::endl;
        std::cout << "3. Hiển thị danh sách sinh viên" << std::endl;
        std::cout << "4. Tìm sinh viên có điểm đầu vào cao nhất" << std::endl;
        std::cout << "5. Lấy danh sách sinh viên tại chức theo nơi liên kết đào tạo" << std::endl;
        std::cout << "6. Lấy danh sách sinh viên có điểm trung bình kỳ cuối từ 8.0 trở lên" << std::endl;
        std::cout << "7. Lấy danh sách sinh viên có điểm trung bình cao nhất" << std::endl;
        std::cout << "8. Sắp xếp sinh viên" << std::endl;
        std::cout << "9. Thoát" << std::endl;
        std::cout << "Lựa chọn: ";
        std::cin >> choice;
        
        if (choice == 1) {
            std::string id, name, birthDate;
            int year;
            float score;

            std::cout << "Nhập mã sinh viên: ";
            std::cin >> id;
            std::cout << "Nhập tên sinh viên: ";
            std::cin.ignore(); 
            std::getline(std::cin, name);
            std::cout << "Nhập ngày sinh: ";
            std::cin >> birthDate;
            std::cout << "Nhập năm nhập học: ";
            std::cin >> year;
            std::cout << "Nhập điểm đầu vào: ";
            std::cin >> score;

            auto student = std::make_shared<RegularStudent>(id, name, birthDate, year, score);
            department.addStudent(student);
        } else if (choice == 2) {
            std::string id, name, birthDate, location;
            int year;
            float score;

            std::cout << "Nhập mã sinh viên: ";
            std::cin >> id;
            std::cout << "Nhập tên sinh viên: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Nhập ngày sinh: ";
            std::cin >> birthDate;
            std::cout << "Nhập năm nhập học: ";
            std::cin >> year;
            std::cout << "Nhập điểm đầu vào: ";
            std::cin >> score;
            std::cout << "Nhập nơi liên kết đào tạo: ";
            std::cin.ignore();
            std::getline(std::cin, location);

            auto student = std::make_shared<InServiceStudent>(id, name, birthDate, year, score, location);
            department.addStudent(student);
        } else if (choice == 3) {
            department.showAllStudents();
        } else if (choice == 4) {
            department.findStudentWithHighestEntranceScore();
        } else if (choice == 5) {
            std::string location;
            std::cout << "Nhập nơi liên kết đào tạo: ";
            std::cin.ignore();
            std::getline(std::cin, location);

            department.findInServiceStudentsByLocation(location);
        } else if (choice == 6) {
            department.findStudentWithHighestAverageScore();
        } else if (choice == 7) {
            department.listTopStudentsWithLatestGPA(8.0);
        } else if (choice == 8) {
            department.sortStudents();
        } else if (choice == 9){
            std::cout << "Chương trình kết thúc!" << std::endl;
            break;
        } else {
            std::cout << "Lựa chọn không hợp lệ!" << std::endl;
        }
    }
    return 0;
}
