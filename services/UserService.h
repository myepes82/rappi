//
// Created by marlon on 25/05/22.
//


#ifndef RAPPI_USERSERVICE_H
#define RAPPI_USERSERVICE_H


#include "../domain/dtos/UserLoginDTO.h"
#include "../domain/dtos/UserRegisterDTO.h"

class UserService {
    public:
        UserService();
        virtual User login(UserLoginDTO dto) = 0;
        virtual User registerUser(UserRegisterDTO dto) = 0;
        virtual ~UserService();
};

UserService::UserService() {

}

UserService::~UserService() {

}

#endif //RAPPI_USERSERVICE_H
