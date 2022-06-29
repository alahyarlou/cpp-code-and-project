#include <iostream>
#include <string>
using namespace std;

int search_word_in_str(string, string);

int main(int argc, char const *argv[])
{
    string str("Lorem ipsum dolor sit amet consectetur adipisicing elit");
    string str2("sit");

    if (search_word_in_str(str2, str) == 1)
    {
        cout << "founded !"
             << "  " << str2 << "  in " << str;
    }
    else
    {
        cout << "not found !";
    }
    
    return 0;
}

int search_word_in_str(string word, string str)
{
    // If found, return the starting position of the first match;
    // if no match is found, return string::npos
    if (str.find(word) != string::npos)
        return 1;
    else
        return 0;
}
