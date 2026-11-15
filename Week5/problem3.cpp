#include <iostream>
#include <string>
using namespace std;

string findMinMaxSpread(int scores[], int n)
{
    int min = scores[0];
    int max = scores[0];

    for(int i = 1; i < n; i++)
    {
        if(scores[i] < min)
            min = scores[i];

        if(scores[i] > max)
            max = scores[i];
    }

    int spread = max - min;

    return "Min: " + to_string(min)
    + " | Max: " + to_string(max)
    + " | Spread: " + to_string(spread);
}

int main()
{
    int scores[] = {45, 82, 79, 90, 33, 90, 61};

    int n = 7;

    cout << findMinMaxSpread(scores, n);

    return 0;
}
