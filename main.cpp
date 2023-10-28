#include "classes.h"

class User 
{
    protected:
    string firstName;
    string lastName;
    string email;
    string password;
    string DOB;

    public:
    string GetfirstName() const { return firstName; };
    void SetfirstName(const string& user_first) { firstName = user_first; };
    string GetfastName() const { return lastName; };
    void SetlastName(const string& user_last) { lastName = user_last; };
    string Getemail() const { return email; };
    void Setemail(const string& user_email) {email = user_email; };
    string Getpassword() const { return password; };
    void Setpassword(const string& user_password) { password = user_password; };
    string GetDOB() const { return DOB; };
    void SetDOB(const string& user_DOB) {DOB = user_DOB; };
};

int main()
{
    
    cout << "Enter your username: " << endl;
    cout << "Enter your password: " << endl;


    return 0;
}
