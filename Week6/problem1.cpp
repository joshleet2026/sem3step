#include <iostream>
#include <iomanip>
using namespace std;

class PlacementRecord
{
    string studentName;
    string company;
    double packageLpa;

public:

    PlacementRecord(string name, string comp, double pkg)
    {
        studentName = name;
        company = comp;
        packageLpa = pkg;
    }

    void printRecord()
    {
        cout << studentName << " -> "
        << company << " @ "
        << fixed << setprecision(1)
        << packageLpa << " LPA" << endl;
    }
};

int main()
{
    PlacementRecord students[3] =
    {
        PlacementRecord("Ravi", "TCS", 4.5),
        PlacementRecord("Anitha", "Zoho", 6.2),
        PlacementRecord("Karthik", "Infosys", 4.0)
    };

    for(int i = 0; i < 3; i++)
    {
        students[i].printRecord();
    }

    return 0;
}
