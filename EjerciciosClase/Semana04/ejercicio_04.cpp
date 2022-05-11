#include <iostream>
using namespace std;

bool find_needle(string needle, string  haystack)
{
    int needle_index = 0;
    int haystack_index = 0;
    while (haystack_index < haystack.length())
    {
        if (needle[needle_index] == haystack[haystack_index])
        {
            bool found_needle = true;
            while (needle_index < needle.length())
            {
                if (needle[needle_index] != haystack[haystack_index + needle_index])
                {
                    found_needle = false;
                    break;
                }
                needle_index++;
            }
            if (found_needle)
            {
                return true;
            }
            needle_index = 0;
        }
        haystack_index++;
    }
    return false;
}

int main()
{
    string needle = "fgh";
    string haystack = "abcdefghijklmn";
    bool is_found = find_needle(needle, haystack);
    cout << "The needle is: " << needle << endl;
    if (is_found)
    {
        cout << "The needle is found" << endl;
    }
    else
    {
        cout << "The needle is not found" << endl;
    }
        
    return 0;
}
