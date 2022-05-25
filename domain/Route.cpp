//
// Created by marlon on 25/05/22.
//

#include "Route.h"

const string &Route::getAddress() const {
    return address;
}

void Route::setAddress(const string &address) {
    Route::address = address;
}

int Route::getStreet() const {
    return street;
}

void Route::setStreet(int street) {
    Route::street = street;
}

int Route::getAvenue() const {
    return avenue;
}

void Route::setAvenue(int avenue) {
    Route::avenue = avenue;
}

int Route::getNumber() const {
    return number;
}

void Route::setNumber(int number) {
    Route::number = number;
}

Route::Route() {}

Route::~Route() {

}

long Route::getUserId() const {
    return userId;
}

void Route::setUserId(long userId) {
    Route::userId = userId;
}

string Route::toString() {
    return "id:" + to_string(this->id) + ",address:" + this->address + ",street:" + to_string(this->street)
    + ",avenue:" + to_string(this->avenue) + ",number:" + to_string(this->number) + ";";
}

long Route::getId() const {
    return id;
}

void Route::setId(long id) {
    Route::id = id;
}
