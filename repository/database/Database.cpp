//
// Created by marlon on 25/05/22.
//

#include "iostream"
#include "string"
#include "Database.h"
#include "fstream"

using namespace std;

Database::Database() {
}

Database::~Database() {
}

void Database::save(string data, string record) {
    ofstream file = this->loadWritableRecord(record);
    file<<data<<endl;
}

template<typename T> T Database::findOne(string data, string record) {
    cout<<"Prueba"<<endl;
}

void Database::findAll(string record) {
    ifstream file = this->loadRecord(record);
    string content;
    while (!file.eof()){
        getline(file, content);
        cout<<content<<endl;
    }
}

ifstream Database::loadRecord(string record) {
    ifstream file;
    string composedString = "./records/" + record + ".txt";
    file.open(composedString.c_str(), ios::in);
    if(file.fail()){
        this->commonError("An error has occurred while connecting db");
    }
    return file;
}

void Database::closeLoadedRecord(ifstream record) {
    record.close();
}

ofstream Database::loadWritableRecord(string record) {
    ofstream file;
    string composedString =  "./records/" + record + ".txt";
    file.open(composedString.c_str(), ios::app);
    if(file.fail()){
        this->commonError("An error has occurred while connecting db");
    }
    return file;
}

void Database::closeLoadedWritableRecord(ofstream record) {
    record.close();
}

void Database::commonError(string error) {
    cout<<error;
    exit(1);
}
