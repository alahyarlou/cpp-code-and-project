#include <iostream>
#include <vector>
using namespace std;

void split(vector<string> *s, string s1, char ch)
{
    string sp;
    for (size_t i = 0; i < s1.length(); ++i)
    {
        sp = "";
        char c = s1[i];
        while (c != ch && i < s1.length())
        {
            sp += c;
            i++;
            c = s1[i];
        }
        s->push_back(sp);
    }
}

int main()
{
    string s;
    getline(cin, s);
    vector<string> d;
    split(&d, s, ' ');
    int max = 0;
    int index = 0;
    int ferqunce;
    for (size_t i = 0; i < d.size(); ++i)
    {
        ferqunce = 0;
        for (size_t j = i; j < d.size(); ++j)
        {
            if (d[i] == d[j])
                ferqunce++;
        }
        cout << d[i] << ": " << ferqunce << endl;
        if (ferqunce > max)
        {
            max = ferqunce;
            index = int(i);
        }
    }
    cout << endl
         << "por tekrar tarin : " << d[size_t(index)] << " : " << max << endl;
    return 0;
}