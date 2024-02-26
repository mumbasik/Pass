#include <iostream>
using namespace std;
class Passport {
protected:
    string Name;
    string Surname;
    string LastName;
    int age;
    string citizenship;
public:
    Passport() {
        Name = "unknown";
        Surname = "unknown";
        LastName = "unknown";
        age = 0;
        citizenship = "unknown";
    }
    Passport(string name, string surname, string lastName, int age, string citi) {
        this->Name = name;
        this->Surname = surname;
        this->LastName = lastName;
        this->age = age;
        this->citizenship = citi;
    }
    void Output() {
        cout << "About person: " << endl;
        cout << "Name: " << Name << endl;
        cout << "Surname: " << Surname << endl;
        cout << "LastName: " << LastName << endl;
        cout << "Age: " << age << endl;
        cout << "Citizenship: " << citizenship << endl;
    }
};
class ForeignPassport : public Passport {
    int NumberPass;
    string DataVisa;

public:
    ForeignPassport();
    ForeignPassport(int Numberpass, string DataVis, string name, string surname, string lastname, int age, string cit);
    void Print();
};
ForeignPassport::ForeignPassport() {
    NumberPass = 0;
    DataVisa = "unknown";
}
ForeignPassport::ForeignPassport(int Numberpass, string DataVis, string name, string surname, string lastname, int age, string cit) : Passport(name, surname, lastname, age, cit) {
    this->NumberPass = Numberpass;
    this->DataVisa = DataVis;

}
void ForeignPassport::Print() {
    Output();
    cout << "Number pass: " << NumberPass << endl;
    cout << "Data Visa: " << DataVisa << endl;
}



int main()
{
    ForeignPassport first(45379, "Visa: X23133", "Andrey", "Ivanov", "Ivanovich", 34, "Ukraine");
    first.Print();
}
