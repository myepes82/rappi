//
// Created by marlon on 25/05/22.
//
#include "iostream"
#include "string"

using namespace std;

#ifndef RAPPI_ROUTE_H
#define RAPPI_ROUTE_H


class Route {
public:
    const string &getAddress() const;

    void setAddress(const string &address);

    int getStreet() const;

    void setStreet(int street);

    int getAvenue() const;

    void setAvenue(int avenue);

    int getNumber() const;

    void setNumber(int number);
    long getUserId() const;

    void setUserId(long userId);

    Route();
    virtual ~Route();

    string toString();

    long getId() const;

    void setId(long id);

private:
    long id;
    string address;
    int street;
    int avenue;
    int number;
    long userId;
};



#endif //RAPPI_ROUTE_H
