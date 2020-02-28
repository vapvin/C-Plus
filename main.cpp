#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int studentId;
    string name;
public:
    Student(int studentId, string name): studentId(studentId), name(name) { }
    friend Student operator +(const Student &student, const Student &other){
        return Student(student.studentId, student.name + "&" + other.name);
    }
    void showName() {
        cout << "이름: " << name << "\n";
    }
};

int main() {
    Student student(1, "문현규");
    Student result = student + student;
    result.showName();
    return 0;
}
