#include "bits/stdc++.h"
#include<windows.h>

using namespace std;

class Employee{
public:
    int total;
    string id;
    string notice;
    bool found = false;
    struct person{
        string name;
        string ID;
        string address;
        string e_mail;
        long long salary;
        string contact;
    }person[100];

    Employee() {
        total = 0;
    }

    void choice();
    void enter_data();
    void show_data();
    void search_data();
    void update_data();
    void delete_data();
    void post_notice();
    void show_notice();
};

int main() {
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t EMPLOYEE MANAGEMENT SYSTEM" << endl;
    cout << "\t\t\t\t **************************" << endl;

    bool logee = false;

    cout << endl;
    cout << endl;

    cout << "\t\t\t\t\t   Signup" << endl;
    cout << endl;
    string user_name;
    string pass_word;
    cout << "\tEnter Username : ";
    cin >> user_name;
    cout << "\tEnter Password : ";
    cin >> pass_word;
    cout << endl;
    cout << "\t\tYour ID is creating, Please wait";
    for(int i = 0; i < 5; i++) {
        cout << ".";
        Sleep(500);
    }
    cout << endl;
    cout << "\t\tYour ID created successfully." << endl;
    Sleep(500);
    system("CLS");
    cout << endl;
    cout << endl;
    start :
    cout << "\t\t\tLOGIN" << endl;
    string user_name1;
    string pass_word1;
    cout << endl;
    cout << "\tEnter Username : ";
    cin >> user_name1;
    cout << "\tEnter Password : ";
    cin >> pass_word1;
    cout << endl;

    if(user_name1 == user_name && pass_word1 == pass_word) {
        logee = true;
    }

    else {
        cout << '\a';
        cout << "\tYour Username or Password is incorrect!!! " << endl;
        cout << endl;
        goto start;
    }


    if(logee) {
    Employee ee;
    ee.choice();
    }
    return 0;
}


void Employee :: choice() {

    char option;
    while(1) {
        cout << "\n\n\t Press " << endl;
        cout << "\t =====" << endl << endl;
        cout << "  1. to enter data" << endl;
        cout << "  2. to show data" << endl;
        cout << "  3. to search data" << endl;
        cout << "  4. to update data" << endl;
        cout << "  5. to delete data" << endl;
        cout << "  6. to post notice" << endl;
        cout << "  7. show notice" << endl;
        cout << "  8. to exit" << endl;

        cin >> option;
        system("CLS");
        switch(option) {

        case '1' :
            Employee :: enter_data();
            break;
        case '2' :
            Employee :: show_data();
            break;

        case '3' :
            Employee :: search_data();
            break;

        case '4' :
            Employee :: update_data();
            break;
        case '5' :
            Employee :: delete_data();
            break;
        case '6' :
            Employee :: post_notice();
            break;
        case '7' :
            Employee :: show_notice();
            break;
        case '8' :
            exit(0);
            break;

        }
    }

}

void Employee :: enter_data() {

    cout << "\tEnter data of person : " << total + 1 << endl;
    cout << "\tEnter Name : ";
    getline(cin, person[total].name);
    getline(cin, person[total].name);
    cout << "\tEnter ID : ";
    cin >> person[total].ID;
    cout << "\tEnter Address : ";
    getline(cin, person[total].address);
    getline(cin, person[total].address);
    cout << "\tEnter e-mail address : ";
    cin >> person[total].e_mail;
    cout << "\tEnter Salary : ";
    cin >> person[total].salary;
    cout << "\tEnter Contact NO. : ";
    cin >> person[total].contact;
    total++;

}

void Employee :: show_data() {

    if(total == 0) {
        cout << '\a';
        cout << endl;
        cout << "\t\tThere is no data to show." << endl;
    }


    for(int i = 0; i < total; i++) {
        cout << "\tData of Person " << i + 1 << endl << endl;
        cout << "\tName : " << person[i].name << endl;
        cout << "\tID : " << person[i].ID << endl;
        cout << "\tAddress : " << person[i].address << endl;
        cout << "\tE-mail : " << person[i].e_mail << endl;
        cout << "\tSalary : " << person[i].salary << endl;
        cout << "\tContact : " << person[i].contact << endl;
        cout << endl;

    }




}

void Employee :: search_data() {

    cout << "Enter the id of those employee you want to search : ";
    cin >> id;
    found = false;

    for(int i = 0; i < total; i++) {
        if(id == person[i].ID) {
        found = true;
        cout << "Data of Person " << i + 1 << endl;
        cout << "Name : " << person[i].name << endl;
        cout << "ID : " << person[i].ID << endl;
        cout << "Address : " << person[i].address << endl;
        cout << "E-mail : " << person[i].e_mail << endl;
        cout << "Salary : " << person[i].salary << endl;
        cout << "Contact : " << person[i].contact << endl;
        cout << endl;
        }

        if(i == total - 1 && !found) {
            cout << '\a';
            cout << "SORRY!!! No such employee found." << endl;
        }
    }


}

void Employee :: update_data() {

    cout << "Enter the id of the employee you want to update :" << endl;
    cin >> id;
    found = false;
    for(int i = 0; i < total; i++) {
        if(id == person[i].ID) {
            found = true;
            cout << "Previous Data of the Employee : " << endl;
            cout << "Name : " << person[i].name << endl;
            cout << "ID : " << person[i].ID << endl;
            cout << "Address : " << person[i].address << endl;
            cout << "E-mail : " << person[i].e_mail << endl;
            cout << "Salary : " << person[i].salary << endl;
            cout << "Contact : " << person[i].contact << endl;
            cout << endl;

            cout << "Enter New Data : " << endl;

            cout << "\tEnter Name : ";
            getline(cin, person[total].name);
            getline(cin, person[total].name);
            cout << "\tEnter ID : ";
            cin >> person[i].ID;
            cout << "\tEnter Address : ";
            getline(cin, person[i].address);
            getline(cin, person[i].address);
            cout << "\tEnter e-mail address : ";
            cin >> person[i].e_mail;
            cout << "\tEnter Salary : ";
            cin >> person[i].salary;
            cout << "\tEnter Contact NO. : ";
            cin >> person[i].contact;
        }

         if(i == total - 1 && !found) {
            cout << '\a';
            cout << "SORRY!!! No such record found." << endl;
        }
    }

}

void Employee :: delete_data() {

    char ch;
    cout << "Press 1 to remove specific record " << endl;
    cout << "Press 2 to remove full record " << endl;

    cin >> ch;

    switch(ch){
    case '1' :
        cout << "Enter the ID of those employee those you want to remove : ";
        cin >> id;
        found = false;
        for(int i = 0; i < total; i++) {
        if(id == person[i].ID) {
            for(int j = i; j < total; j++) {
            person[j].name = person[j + 1].name;
            person[j].ID = person[j + 1].ID;
            person[j].address = person[j + 1].address;
            person[j].e_mail = person[j + 1].e_mail;
            person[j].salary = person[j + 1].salary;
            person[j].contact = person[j + 1].contact;
            found = true;
            total--;
            cout << "Your required data is deleted" << endl;
            break;
            }
        }
        if(i == total - 1 && !found) {
            cout << '\a';
            cout << "SORRY!!! No such record found." << endl;
        }

    }
    break;

    case '2' :
        total = 0;
        cout << "All record is deleted." << endl;
        break;
    default:
        cout << '\a';
        cout << "Invalid input" << endl;
        break;
    }

}

void Employee :: post_notice() {
    getline(cin, notice);
    getline(cin, notice);
}
void Employee :: show_notice() {
    cout << "\t\tNOTICE - : ";
    if(notice.size() > 0) {
        cout << notice << endl;
    }
    else {
        cout << "NO NOTICE TO SHOW!!!" << endl;
    }


}


