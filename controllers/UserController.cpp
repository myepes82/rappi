//
// Created by marlon on 25/05/22.
//

#include "UserController.h"

UserController::UserController() {

}

UserController::~UserController() {

}

User UserController::login() {
    User user;
    do{
        UserLoginDTO dto;
        string email;
        string password;
        cout<<"Enter email: ";
        getline(cin, email);
        cout<<endl;
        cout<<"Enter password: ";
        getline(cin, password);
        dto.email = email;
        dto.password = password;
        const User  response = userService.login(dto);
        if(response.getId()){
            user = response;
            break;
        } else{
            const int request = retryLogin();
            if(request == 0) break;
        }
    } while (true);
    return user;
}

int UserController::retryLogin() {
    cout<<"User or password incorrect"<<endl;
    cout<<"Do you want try to login again?"<<endl;
    cout<<"1) Yes"<<endl;
    cout<<"0) No"<<endl;
    int request;
    cin>>request;
    return request;
}
