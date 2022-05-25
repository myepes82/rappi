//
// Created by marlon on 25/05/22.
//

#ifndef RAPPI_USERSERVICEIMPL_H
#define RAPPI_USERSERVICEIMPL_H


#include "../UserService.h"
#include "../../repository/UserRepository.h"

class UserServiceImpl : public UserService{
public:
    UserServiceImpl();
    virtual ~UserServiceImpl();
    User registerUser(UserRegisterDTO dto) ;
    User login(UserLoginDTO dto) ;
private:
    UserRepository userRepository;
};


#endif //RAPPI_USERSERVICEIMPL_H
