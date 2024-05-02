#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>
using namespace std;

class Login
{
private:
    string LoginID, Password;

public:
    Login() : LoginID(""), Password("") {}

    void setID(string id)
    {
        LoginID = id;
    }
    void setPwd(string pwd)
    {
        Password = pwd;
    }
    string getID()
    {
        return LoginID;
    }
    string getPws()
    {
        return Password;
    }
};

int registration(Login log)
{
    system("cls");
    string id, pwd;
    cout << "\tEnter Login Id: ";
    cin >> id;
    log.setID(id);
start:
    cout << "\tEnter Password: ";
    cin >> pwd;
    if (pwd.length() >= 8)
    {
        log.setPwd(pwd);
    }
    else
    {
        cout << "Enter minimum 8 characters";
        goto start;
    }

    Sleep(3000);
}

int main()
{
    Login log;
    bool exit = false;
    while (!exit)
    {
        system("cls");
        int val;
        cout << "\tWelcome to registration and login form" << endl;
        cout << "\t**************************************" << endl;
        cout << "\t1.Register" << endl;
        cout << "\t2.Login" << endl;
        cout << "\t3.Exit" << endl;
        cout << "\tEnter Choice: ";
        cin >> val;
        if (val == 1)
        {
        }
        Sleep(3000);
    }
}