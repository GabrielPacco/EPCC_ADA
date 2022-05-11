#include <iostream>
#include <vector>
using namespace std;

string pick_resume(vector <string> resumes)
{
    int n = sizeof(resumes) / sizeof(resumes[0]);
    bool top = true;
    int a = 0, b = n -1;

    while (a < b)
    {
        if (top)
        {
            a += n/2;
            top = false;
        }else{
            b -= n/2;
            top = true;
        }
        n = b + 1 - a;
    }
    return resumes[a];
}

int main()
{
    vector <string> resumes;
    resumes.push_back("gaeaagdsgdsgdasgdfdsfdfdsafe");
        
    pick_resume(resumes);

    for (auto resume : resumes)
    {
        cout << resume << endl;
    }

    return 0;
}