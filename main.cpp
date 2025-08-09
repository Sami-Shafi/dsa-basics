#include<bits/stdc++.h>
using namespace std;

// You will be given a list A of size N. The list will contain data of some students where each student have Name, Roll and Marks. Then you will be given Q queries, for each query there will be some commands. Commands are given below -

// 0 X -> Insert  into the list where X is the data of a student which contain Name, Roll and Marks. Then print the current student's data who has the maximum Marks from the list.
// 1 -> Print the current student's data who has the maximum Marks from the list.
// 2 -> Delete the student who has the maximum Marks from the list and print the current student who has the maximum Marks from the list.
// Note: If there are multiple students with same Marks then we will select whose Roll is smaller. If the list is empty and you can't print anything then you should print "Empty".

// Input Format
// First line will contain N.
// Next N lines will contain Name, Role and Marks of student A.
// Third line will contain Q.
// Next Q lines will contain the commands.

class Student {
    public:
        string name;
        int mark;
        int roll;
    
    Student(string name, int roll, int mark) {
        this->name = name;
        this->mark = mark;
        this->roll = roll;
    }
};

class custom {
    public:
        bool operator()(Student l, Student r) {
            if(l.mark == r.mark)
                return l.roll > r.roll;
            return l.mark < r.mark;
        }
};

int main ()
{
    int size;
    cin >> size;
    priority_queue<Student, vector<Student>, custom> pq;

    for (int i = 0; i < size; i++)
    {
        string name;
        int mark, roll;
        cin >> name >> roll >> mark;
        pq.push(Student(name, roll, mark));
    }

    int T;
    cin >> T;

    while (T--)
    {
        int cmd;
        cin >> cmd;

        if(cmd != 0 && cmd != 1 && cmd != 2) continue;

        if(cmd == 0){
            string name;
            int mark, roll;
            cin >> name >> roll >> mark;
            pq.push(Student(name, roll, mark));
        }

        if(cmd == 2){
            if(!pq.empty()) 
                pq.pop();
            else {
                cout << "Empty" << endl;
                continue;
            }
        }

        if(!pq.empty()){
            Student ourStudent = pq.top();
            cout << ourStudent.name << " " << ourStudent.roll << " " << ourStudent.mark << endl;
        }
        else
            cout << "Empty" << endl;
    }
        
    return 0;
}