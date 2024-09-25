#ifndef QLCB_H
#define QLCB_H

#include <vector>
#include "Officer.h"

class QLCB {
private:
    std::vector<CanBo*> officers;

public:
    ~QLCB() {
        for (CanBo* officer : officers) {
            delete officer; 
        }
    }

    void addOfficer(CanBo* officer) {
        officers.push_back(officer);
    }

    void searchByName(const std::string& name) const {
        for (const CanBo* officer : officers) {
            if (officer->getName() == name) {
                officer->display();
                return;
            }
        }
        std::cout << "Officer not found with name: " << name << std::endl;
    }

    void displayAll() const {
        for (const CanBo* officer : officers) {
            officer->display();
        }
    }
};

#endif // QLCB_H
