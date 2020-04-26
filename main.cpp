#include <iostream>
#include <string>

using namespace std;

enum GENDER {
    U , M, F
};

class Human {
    int age;
    string fio;
    GENDER gender;
    int weight;

public:

    Human (int age, GENDER gender, string fio, int weight): weight(weight) {
        this->gender = gender;
        this->fio = fio ;
        this->age = age;
        //this->weight = weight;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    GENDER getGender() const {
        return gender;
    }

    void setGender(GENDER gender) {
        this->gender = gender;
    }

    string getFio() const {
        return fio;
    }

    void setFio(string fio) {
        this->fio = fio;
    }

    int getWeight() const {
        return weight;
    }

    void setWeight(int weight) {
        this->weight = weight;
    }
};

class BloodDonor : public Human {
    int amountOfBlood;
    int rezus;
public:

    BloodDonor(int age, GENDER gender, string fio, int amountOfBlood, int weight, int rezus) : Human(age, gender, fio, weight) {
        this->amountOfBlood = amountOfBlood;
        this->rezus = rezus;
    }

    int getAmountOfBlood() {
        return amountOfBlood;
    }

    void setAmountOfBlood(int amountOfBlood) {
        this->amountOfBlood = amountOfBlood;
    }

    int getRezus() {
        return rezus;
    }

    void setRezus(int rezus) {
        this->rezus = rezus;
    }

};

class Donor: public BloodDonor {

};

class Blood: public Donor {

};

class Re: public Blood {

};

class Ill: public Human {

};

int main() {
    Human adam(24, GENDER::M,"Forg",55);
    Human tanya(19,GENDER::F,"Dest" ,45);
    Human vlad(21,F,"Frolov",89);
    Human kris(89,U,"Tuktuk",70);
    BloodDonor helga(25, GENDER::F, "ADA", 15, 50,1 );
    BloodDonor valera(56, GENDER::M, "SMIT", 3, 90,-1 );

    cout << tanya.getAge()<< endl;
    cout << adam.getFio() << endl;
    cout << tanya.getWeight() << endl;

    cout << helga.getAge() << endl;
    cout << helga.getGender() <<  endl;
    cout << helga.getAmountOfBlood() << endl;
    cout << valera.getRezus() << endl ;
    cout << valera.getFio() << endl;

    return 0;
}