#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "entre string...";
    getline(cin, word);
    string word2;
    cout << "entre second string ...";
    getline(cin, word2);
    int count = 0;
    int idx = 0;
    int idx1 = 0;
    while (word[idx1] != '\0')
    {
        while (word2[idx] != '\0')
        {
            if (word[idx1] == word2[idx])
            {
                {
                    count++;
                }
            }
            idx = idx + 1;
        }
        idx1 = idx1 + 1;
    }
    cout << count;
}