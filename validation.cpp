#include <iostream>
#include <cmath>
using namespace std;

class User
{
private:
    string name;
    string email;
    long long int phone;
    string password;

public:
    User(string name, string email, long long int phone, string password)
    {
        this->name = name;
        this->email = email;
        this->phone = phone;
        this->password = password;
    }
    void print()
    {
        cout << name << endl;
        cout << email << endl;
        cout << phone << endl;
    }

    void setname(string name)
    {
        bool valid = true;

        for (int i = 0; i < name.length(); i++)
        {
            if (!(name.at(i) >= 65 && name.at(i) <= 90) &&
                !(name.at(i) >= 97 && name.at(i) <= 122) &&
                !(name.at(i) == 32))
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            this->name = name;
        }
        else
        {
            cout << "invalid name, Unable to change" << endl;
        }
    }

    void setPhone(long long int phone)
    {
        int len = to_string(abs(phone)).length();
        if (len == 10)
        {
            this->phone = phone;
        }
    }
    void setPassword(string password)
    {
        if (password.length() >= 8)
        {
            this->password = password;
        }
    }
};

int main()
{
    User a("Gaurav", "gaurav@gmail.com", 9876545674, "qwertyuiop");
    a.print();

    a.setname("Capital GAURAV");
    a.setPhone(7395037593);
    a.print();

    return 0;
}