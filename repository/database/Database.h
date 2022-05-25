//
// Created by marlon on 25/05/22.
//
#include "iostream"
#include "string"
#include "fstream"

using namespace std;

#ifndef RAPPI_DATABASE_H
#define RAPPI_DATABASE_H


class Database {
public:
    Database();
    virtual ~Database();
    void save(string data, string record);
    template<typename T> T findOne(string data, string record);
    void findAll(string record);
private:
    ifstream loadRecord(string record);
    void closeLoadedRecord(ifstream record);
    ofstream loadWritableRecord(string record);
    void closeLoadedWritableRecord(ofstream record);
    void commonError(string error);
};


#endif //RAPPI_DATABASE_H
