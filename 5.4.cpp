#include <iostream>
using namespace std;

class Student {
public:
    Student(int num, int score) : num(num), score(score) {}
    int getScore() const {
        return score;
    }
    int getNum() const {
        return num;
    }
private:
    int num;  
    int score;
   
};
void max(Student* students[], int size) {
    if (size <= 0) {
        cout << "输入的学生数据为空" << endl;
        return;
    }
   Student* maxStudent = students[0];
    for (int i = 1; i < size; i++) {
        if (students[i]->getScore() > maxStudent->getScore()) {
            maxStudent = students[i];
        }
    }
    cout << "成绩最高的学生学号为: " << maxStudent->getNum()<< endl;
}

int main() {
    Student* students[5];
    for (int i = 0; i < 5; i++) {
        cout << "请输入第" << i +1<< "个学生的学号和成绩：";
        int num, score;
        cin >> num >> score;
        students[i] = new Student{ num, score };
   }
    max(students, 5);
    return 0;
}