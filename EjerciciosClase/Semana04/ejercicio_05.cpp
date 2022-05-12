#include <iostream>
using namespace std;

string pick_resume(string resumes)
{
    auto eliminate = "top";
    cout << resumes << endl;
    while (resumes.length() > 1)
    {
        if (eliminate == "top")
        {
            resumes = resumes[resumes.length() /2, resumes.length() - 1];
            eliminate = "bottom";
            cout << resumes << endl;
        }
        else
        {
            resumes = resumes[0, resumes.length() / 2];
            eliminate = "top";
        }
        cout << resumes << endl;
    }
    return resumes;
}

int main()
{
    string resumes = "the world is a vampire and a werewolf and a zombie and your works id aren't good enough";
    string resume = pick_resume(resumes);
    cout << "The resume is: " << resume << endl;
    return 0;
}