#include<iostream>
using namespace std;

class Customer {
private:
    int accountNumber;
    string firstName;
    string lastName;
    string dob;
    string gender;
    string address;
    int phoneContact;
    string email;
public:
    Customer(int accountNumber, string firstName, string lastName, string dob, string gender, string address, int phoneContact, string email);
    void setCustomerDetails(int accountNumber, string firstName, string lastName, string dob, string gender, string address, int phoneContact, string email);
    void setAccountNumber(int accountNumber);
    void setFirstName(string fname);
    void setLastName(string lname);
    void setDOB(string dob);
    void setGender(string gender);
    void setAddress(string address);
    void setPhoneContact(int phoneContact);
    void setEmail(string email);
    int getAccountNumber();
    string getFirstName();
    string getLastName();
    string getDOB();
    string getGender();
    string getAddress();
    int getPhoneContact();
    string getEmail();
};

