#include<iostream>
#include "../inc/Worker.h"
#include "../inc/Engineer.h"
#include "../inc/Staff.h"
#include "../inc/ManageOfficer.h"

int main() {
    QLCB qlcb;

    qlcb.addOfficer(new CongNhan("Nguyen Van A", 30, "Male", "Hanoi", 5));
    qlcb.addOfficer(new KySu("Le Thi B", 28, "Female", "HCM", "Civil Engineering"));
    qlcb.addOfficer(new NhanVien("Pham Van C", 35, "Male", "Danang", "Office Work"));

    qlcb.displayAll();

    std::cout << "\nSearching for Nguyen Van A:\n";
    qlcb.searchByName("Nguyen Van A");

    return 0;
}
