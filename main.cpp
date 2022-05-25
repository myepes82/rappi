#include <iostream>
#include "string"
#include "domain/User.h"
#include "optional"
#include "controllers/UserController.h"
using namespace std;


//Controllers
UserController userController;

//Logged user status
optional<User> currentUser;

//Service Loader
void loadServices();

//General menus
void welcome();
void loadMenus();


//unauthenticated actions
int authenticationMenu();


//common functions
static void drawLine();
static void logMessage(string message);


int authenticationMenu(){
    cout<<"1) Login"<<endl;
    cout<<"2) Register"<<endl;
    cout<<"3) Exit" <<endl;
    int option;
    cout<<" -:";
    cin>>option;
    return option;
}
void loadMenus(){
    if(!currentUser.has_value()){
        const int request = authenticationMenu();
        switch (request) {
            case 1:
                userController.login();
                break;
            case 2:
                break;
            default:
                break;
        }
    }
}

void welcome(){
    cout<<"Welcome, we're excited to give you the welcome to our platform"<<endl;
    cout<<"Here you can register and manage your delivery routes"<<endl;
    cout<<"what do you want to do now?"<<endl;
    drawLine();
};

static void drawLine(){
    cout<<"--------------------------------------------------------------"<<endl;
}

void loadServices(){
    userController = UserController();
}

int main() {
    loadServices();
    welcome();
    loadMenus();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
