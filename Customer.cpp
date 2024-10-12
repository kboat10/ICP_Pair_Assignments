#include<iostream>
#include "Customer.h"
using namespace std;

Customer::Customer(int accountNumber, string firstName, string lastName, string dob, string gender, string address, int phoneContact, string email) {
    this -> accountNumber = accountNumber;
    this ->firstName = firstName;
    this ->lastName = lastName;
    this ->dob = dob;
    this ->gender = gender;
    this ->address = address;
    this ->phoneContact = phoneContact;
    this ->email = email;
}

void Customer::setCustomerDetails(int accountNumber, string firstName, string lastName, string dob, string gender, string address, int phoneContact, string email) {
    this -> accountNumber = accountNumber;
    this ->firstName = firstName;
    this ->lastName = lastName;
    this ->dob = dob;
    this ->gender = gender;
    this ->address = address;
    this ->phoneContact = phoneContact;
    this ->email = email;
}

void Customer::setAccountNumber(int accountNumber) {
    this ->accountNumber = accountNumber;
}

void Customer::setFirstName(string fname) {
    firstName = fname;
}

void Customer::setLastName(string lname) {
    lastName = lname;
}

void Customer::setDOB(string dob) {
    this ->dob = dob;
}

void Customer::setGender(string gender) {
    this ->gender = gender;
}

void Customer::setAddress(string address) {
    this ->address = address;
}

void Customer::setPhoneContact(int phoneContact) {
    this ->phoneContact = phoneContact;
}

void Customer::setEmail(string email) {
    this ->email = email;
}

int Customer::getAccountNumber() {
    return accountNumber;
}

string Customer::getFirstName() {
    return firstName;
}

string Customer::getLastName() {
    return lastName;
}

string Customer::getDOB() {
    return dob;
}

string Customer::getGender() {
    return gender;
}

string Customer::getAddress() {
    return address;
}

int Customer::getPhoneContact() {
    return phoneContact;
}

string Customer::getEmail() {
    return email;
}
