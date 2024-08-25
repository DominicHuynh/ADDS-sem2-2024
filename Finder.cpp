
#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2)
{

    vector<int> result;
    size_t found = 0;

    for (size_t i = 1; i <= s2.size(); i++)
    {
        if (s1[found + i - 1] == s2[i - 1]) // if found index i works for found index i+1, use that
        {
            result.push_back(found);
            continue;
        }
        found = s1.find(s2.substr(0, i), found + 1); // start from the next index (found+1)
        if (found != string::npos)
        {
            result.push_back(found);
        }
        else
        {
            for (size_t i = 0; i < s2.size() - result.size() + 1; i++) // if -1, all the remaining ones become -1
                result.push_back(-1);
            return result;
        }
    }
    return result;
}
