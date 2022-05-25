//
// Created by marlon on 25/05/22.
//

#ifndef RAPPI_USERREPOSITORY_H
#define RAPPI_USERREPOSITORY_H

#include "./database/Database.h"
#include "../domain/User.h"

class UserRepository {
public:
    UserRepository();
    virtual ~ UserRepository();
    void save(User user);
    User findOne(string email);
private:
    Database db;
};


#endif //RAPPI_USERREPOSITORY_H
