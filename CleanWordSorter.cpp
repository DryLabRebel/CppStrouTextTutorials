// This program will blot out undesireable words from the output and replace them with CENSORED!

#include "std_lib_facilities.h"

int main ()
{
    string killcode{"killmenow"};
    vector<string> words;
    vector<string> censored = {"fuck", "shit", "cunt", "asshole"};

    for(string word; cin >> word && word != killcode; )
    {
        words.push_back(word);
        cout << "Number of words: " << words.size() << "\n";
    }

    sort(words);

    for(int i = 0; i<words.size(); ++i)
    {
        if(words[i]!=censored[0] && words[i]!=censored[1] && words[i]!=censored[2] && words[i]!=censored[3])
            cout << words[i] << "\n";
        else
            cout << "CENSORED" << "\n";
    }
    cout << "\n\n";
    return 0;
}
