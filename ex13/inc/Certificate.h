#ifndef CERTIFICATE_H
#define CERTIFICATE_H

#include <string>

class Certificate {
private:
    int certificatedID;
    std::string certificateName;
    std::string certificateRank;
    std::string certificatedDate;

public:
    Certificate(int id, std::string name, std::string rank, std::string date);
    void showCertificate() const;
};

#endif // CERTIFICATE_H
