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
        cout << "�����ѧ������Ϊ��" << endl;
        return;
    }
   Student* maxStudent = students[0];
    for (int i = 1; i < size; i++) {
        if (students[i]->getScore() > maxStudent->getScore()) {
            maxStudent = students[i];
        }
    }
    cout << "�ɼ���ߵ�ѧ��ѧ��Ϊ: " << maxStudent->getNum()<< endl;
}

int main() {
    Student* students[5];
    for (int i = 0; i < 5; i++) {
        cout << "�������" << i +1<< "��ѧ����ѧ�źͳɼ���";
        int num, score;
        cin >> num >> score;
        students[i] = new Student{ num, score };
   }
    max(students, 5);
    return 0;
}