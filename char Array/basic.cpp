#include <bits/stdc++.h>
using namespace std;

int lenghtofString(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void reverseString(char name[])
{
    int i = 0;
    int f = strlen(name) - 1;

    while (i <= f)
    {
        swap(name[i], name[f]);
        i++;
        f--;
    }

    cout << "reverse of string= " << name << endl;
}
void ReplaceSpace(char name[])
{
    int i = 0;
    int f = strlen(name);

    for (int i = 0; i < f; i++)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
    }

    cout << "replace space with '@' = " << name << endl;
}

bool isPalindrome(char name[])
{
    int i = 0;
    int f = strlen(name) - 1;

    while (i <= f)
    {
        if (name[i] != name[f])
        {
            return false;
        }
        else
        {
            i++;
            f--;
        }
    }

    return true;
}

void Touppercase(char name[])
{
    int i = 0;
    int f = strlen(name);

    for (int i = 0; i < f; i++)
    {
        name[i] = name[i] - 'a' + 'A';
    }

    cout << "to upper " << name << endl;
}
void Tolowercase(char name[])
{
    int i = 0;
    int f = strlen(name);

    for (int i = 0; i < f; i++)
    {
        name[i] = name[i] + 'a' - 'A';
    }

    cout << "to lower " << name << endl;
}
int main(int argc, char const *argv[])
{
    char name[100];
    cin.getline(name, 50);

    Touppercase(name);
    Tolowercase(name);

    cout << name << " is palindrome =" << isPalindrome(name) << endl;

    cout << "length = " << lenghtofString(name) << endl;
    ReplaceSpace(name);
    reverseString(name);


    return 0;
}
