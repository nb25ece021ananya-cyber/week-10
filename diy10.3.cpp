#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

int main() {
    Student s[3];

    ofstream fout("student.txt");

    fout << "Anu 85\n";
    fout << "Ravi 90\n";
    fout << "Riya 95\n";
    fout.close();

    ifstream fin("student.txt");

    for(int i = 0; i < 3; i++)
        fin >> s[i].name >> s[i].marks;

    int top = 0;

    for(int i = 1; i < 3; i++) {
        if(s[i].marks > s[top].marks)
            top = i;
    }

    cout << "Topper: " << s[top].name << endl;
    cout << "Marks: " << s[top].marks;

    fin.close();
    return 0;
}