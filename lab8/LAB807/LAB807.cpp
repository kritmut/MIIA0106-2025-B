#include <iostream>
using namespace std;

struct Dataparent {
   char name[20];
   char relationship[20];
};

struct Studentphone {
    char home[10];
    char mobile[10];
};

struct Parentphone {
	char home[10];
	char mobile[10];
};

struct Student {
    char id[11];
    char nickname[20];
    char lineId[20];
    Studentphone phone;
	Dataparent parent;
	Parentphone parentphone;
    // TODO:
};

int main() {
    Student s1;

    // TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
    cout << "Enter Student Information:\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Nickname: "; cin >> s1.nickname;
	cout << "Line ID: "; cin >> s1.lineId;
	cout << "Student mobile phone: "; cin >> s1.phone.mobile;
	cout << "Student home phone: "; cin >> s1.phone.home;
	cout << "Parent Name: "; cin >> s1.parent.name;
	cout << "Parent Relationship: "; cin >> s1.parent.relationship;
	cout << "Parent mobile phone: "; cin >> s1.parentphone.mobile;
	cout << "Parent home phone: "; cin >> s1.parentphone.home;


   

    cout << "\n===== Output =====\n";
	cout << "Student Information:\n";
    cout << "ID: " << s1.id << endl;
	cout << "Nickname: " << s1.nickname << endl;
	cout << "Line ID: " << s1.lineId << endl;
	cout << "Student mobile phone: " << s1.phone.mobile << endl;
	cout << "Student home phone: " << s1.phone.home << endl;
	cout << "Parent Name: " << s1.parent.name << endl;
	cout << "Parent Relationship: " << s1.parent.relationship << endl;
	cout << "Parent mobile phone: " << s1.parentphone.mobile << endl;
	cout << "Parent home phone: " << s1.parentphone.home << endl;

    //// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)

    return 0;
}

