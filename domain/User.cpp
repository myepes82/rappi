//
// Created by marlon on 25/05/22.
//

#include "iostream"
#include "string"
#include "User.h"

using namespace std;

const string &User::getName() const {
    return name;
}

void User::setName(const string &name) {
    User::name = name;
}

const string &User::getSecondName() const {
    return secondName;
}

void User::setSecondName(const string &secondName) {
    User::secondName = secondName;
}

const string &User::getEmail() const {
    return email;
}

void User::setEmail(const string &email) {
    User::email = email;
}

const string &User::getPassword() const {
    return password;
}

void User::setPassword(const string &password) {
    User::password = password;
}



long User::getId() const {
    return id;
}

void User::setId(long id) {
    User::id = id;
}

string User::toString() {
    return "id:" + to_string(this->id) + ",name:", this->name + ",secondName:" +
    this->secondName + ",email:" + this->email + ",password:" + this->password + ";";
}
