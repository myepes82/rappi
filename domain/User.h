//
// Created by marlon on 25/05/22.
//
#include <vector>
#include "string"
#include "iostream"
#include "Route.h"
using namespace std;

#ifndef RAPPI_USER_H
#define RAPPI_USER_H



class User {
public:
    User();
    virtual ~ User();

    const string &getName() const;

    void setName(const string &name);

    const string &getSecondName() const;

    void setSecondName(const string &secondName);

    const string &getEmail() const;

    void setEmail(const string &email);

    const string &getPassword() const;

    void setPassword(const string &password);


    long getId() const;

    void setId(long id);

    string toString();

private:
    long id;
    string name;
    string secondName;
    string email;
    string password;
};


#endif //RAPPI_USER_H
