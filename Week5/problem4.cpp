#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class MatchDayGridAnalyzer
{
private:

    static double rowAverage(const vector<int>& row)
    {
        int sum = 0;

        for(int i = 0; i < row.size(); i++)
        {
            sum += row[i];
        }

        return (double)sum / row.size();
    }

public:

    static string classifyMatches(vector<vector<int>>& runsPerOver, int threshold)
    {
        stringstream result;

        for(int i = 0; i < runsPerOver.size(); i++)
        {
            double avg = rowAverage(runsPerOver[i]);

            if(i > 0)
                result << " | ";

            result << "Match " << i << ": ";

            if(avg >= threshold)
                result << "Power Surge";
            else
                result << "Normal";
        }

        return result.str();
    }
};

int main()
{
    vector<vector<int>> runsPerOver =
    {
        {4, 6, 8},
        {10, 12, 14},
        {2, 3, 1}
    };

    int threshold = 8;

    cout << MatchDayGridAnalyzer::classifyMatches(runsPerOver, threshold);

    return 0;
}
