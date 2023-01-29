#include<iostream>
using namespace std;

class Patient {
    protected:
        int patientId;
        string name;
    public:
        Patient(int id, string n) {
            patientId = id;
            name = n;
        }
        void displayPatientInfo() {
            cout << "Patient ID: " << patientId << endl;
            cout << "Patient Name: " << name << endl;
        }
};

class MedicalRecord : private Patient {
    private:
        string diagnosis;
    protected:
        string treatment;
    public:
        MedicalRecord(int id, string n, string d, string t) : Patient(id, n) {
            diagnosis = d;
            treatment = t;
        }
        void displayMedicalRecord() {
            displayPatientInfo();
            cout << "Diagnosis: " << diagnosis << endl;
            cout << "Treatment: " << treatment << endl;
        }
};


class Billing : protected MedicalRecord {
    private:
        float amount;
    public:
        Billing(int id, string n, string d, string t, float a) : MedicalRecord(id, n, d, t) {
            amount = a;
        }
        void displayBilling() {
            displayMedicalRecord();
            cout << "Amount: " << amount << endl;
        }
};

int main() {
    Billing b(123, "John Doe", "Flu", "Rest and Medication", 500.50);
    b.displayBilling();
    return 0;
}

