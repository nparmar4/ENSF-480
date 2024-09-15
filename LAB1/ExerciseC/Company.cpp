#include <string>
#include <vector>
using namespace std;

class Name {
  private:
    string firstName;
    string lastName;
};

class Address {
  private:
    string street;
    string city;
    string state;
    string zipCode;
};

class Date {
  private:
    string day;
    string month;
    string year;
};

class Person {
  private:
    Name name;
    Address address;
};

class Employee : public Person {
  private:
    Date dateOfBirth;
    string currentState;
};

class Customer : public Person {
  private:
    string phone;
};

class Company {
  private:
    string companyName;
    Address companyAddress;
    Date dateEstablished;
    vector<Employee> employees;
    vector<Customer> customers; };

