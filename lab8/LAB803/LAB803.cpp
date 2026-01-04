#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string lineId;
    string phone;
};

// TODO:à¢ÕÂ¹¿Ñ§ªÑè¹ printStudent
void printStudent(Student s1) {
    // TODO
    cout << "ID \t nickname \t Line ID \t Phone \n";
    cout << s1.id << " \t " << s1.nickname << " \t " << s1.lineId << " \t " << s1.phone << "\n";
}
// TODO: à¢ÕÂ¹¿Ñ§ªÑè¹ inputStudent
void inputStudent(Student& s1) {
    cout << "Enter ID: ";
    cin >> s1.id;

    cout << "Enter Nickname: ";
    cin >> s1.nickname;

    cout << "Enter Line ID: ";
    cin >> s1.lineId;

    cout << "Enter Phone: ";
    cin >> s1.phone;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
    inputStudent(s1);

    cout << "\n=== Output (from function) ===\n";
    // TODO: ????? printStudent
    printStudent(s1);

    return 0;
}