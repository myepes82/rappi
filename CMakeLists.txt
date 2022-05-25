cmake_minimum_required(VERSION 3.22)
project(rappi)

set(CMAKE_CXX_STANDARD 17)

add_executable(rappi main.cpp domain/User.cpp domain/User.h domain/City.cpp domain/City.h services/UserService.h domain/dtos/UserLoginDTO.h services/impl/UserServiceImpl.cpp services/impl/UserServiceImpl.h  domain/Route.cpp domain/Route.h domain/dtos/UserRegisterDTO.h repository/UserRepository.cpp repository/UserRepository.h repository/database/Database.cpp repository/database/Database.h controllers/UserController.cpp controllers/UserController.h)
