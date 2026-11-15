#include <iostream>
#include <string>
using namespace std;

class Course
{
    string code;
    string title;
    int credits;
    int labCredits;

public:

    Course(string c, string t, int cr, int lab)
    : code(c), title(t), credits(cr), labCredits(lab)
    {
    }

    Course(string c, string t, int cr)
    : Course(c, t, cr, 0)
    {
    }

    int totalCredits()
    {
        return credits + labCredits;
    }

    void display()
    {
        cout << code << " total credits: "
        << totalCredits() << endl;
    }
};

int main()
{
    Course c1("21CSC201J", "Data Structures", 4);

    Course c2("21CSC205L", "DSA Lab", 3, 1);

    c1.display();
    c2.display();

    return 0;
}
