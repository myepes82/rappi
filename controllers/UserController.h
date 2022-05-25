//
// Created by marlon on 25/05/22.
//

#ifndef RAPPI_USERCONTROLLER_H
#define RAPPI_USERCONTROLLER_H


#include "../domain/dtos/UserLoginDTO.h"
#include "../domain/User.h"
#include "../services/impl/UserServiceImpl.h"

class UserController {
public:
    UserController();
    virtual ~ UserController();
    User login();
private:
    int retryLogin();
    UserServiceImpl userService;
};


#endif //RAPPI_USERCONTROLLER_H
