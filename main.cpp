#include <iostream>
#include <string>

class PersonData {

private:
    std::string lastName;
public:
    const std::string &getLastName() const {
        return lastName;
    }

    void setLastName(const std::string &lastName) {
        PersonData::lastName = lastName;
    }

private:
    std::string firstName;
public:
    const std::string &getFirstName() const {
        return firstName;
    }

    void setFirstName(const std::string &firstName) {
        PersonData::firstName = firstName;
    }

private:
    std::string address;
public:
    const std::string &getAddress() const {
        return address;
    }

    void setAddress(const std::string &address) {
        PersonData::address = address;
    }

private:
    std::string city;
public:
    const std::string &getCity() const {
        return city;
    }

    void setCity(const std::string &city) {
        PersonData::city = city;
    }

private:
    std::string state;
public:
    const std::string &getState() const {
        return state;
    }

    void setState(const std::string &state) {
        PersonData::state = state;
    }

private:
    std::string zip;
public:
    const std::string &getZip() const {
        return zip;
    }

    void setZip(const std::string &zip) {
        PersonData::zip = zip;
    }

private:
    std::string phone;
public:
    const std::string &getPhone() const {
        return phone;
    }

    void setPhone(const std::string &phone) {
        PersonData::phone = phone;
    }

public:
    PersonData(std::string ln, std::string fn, std::string a, std::string c, std::string s, std::string z,
               std::string p) {
        lastName = ln;
        firstName =fn;
        address =a;
        city = c;
        state =s;
        zip = z;
        phone =p;
    }

};

class CustomerData: public PersonData{
    int customerNumber;
    bool mailingList;

public:
    CustomerData(int c, bool m): PersonData("Paul","John","200 big street","Pomona","CA","91706","666798999"),
    customerNumber(c),mailingList(m){
        std::cout<<"Customer constructed"<<std::endl;
    }

public:
    int getCustomerNumber() const {
        return customerNumber;
    }

    void setCustomerNumber(int customerNumber) {
        CustomerData::customerNumber = customerNumber;
    }

    bool isMailingList() const {
        return mailingList;
    }

    void setMailingList(bool mailingList) {
        CustomerData::mailingList = mailingList;
    }


};




int main() {
    CustomerData c(37010,true);
    c.setAddress("temple street");
    c.setCity("LA");
    c.setFirstName("Bob");
    c.setLastName("Patrick");

    std::cout<<"Customer number: "<<c.getCustomerNumber()<<"\nIs on mailing list: "<<c.isMailingList()<<
    "\nFull Name: "<<c.getFirstName()<<" "<<c.getLastName()<<"\nAdress: "<<c.getAddress()<<" "<<c.getState()<<
    ", "<<c.getZip();

}