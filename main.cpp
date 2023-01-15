#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
string input = "";

int random(int l, int u)
{
    srand(time(0));
    if (l > 0 && u > l)
        return (rand() % (u + l - 1)) + l;
    else
    {
        cout << "-> Error: Unknown Range.";
        return 0;
    }
}

void enter()
{
    cout << "\n-> ";
    getline(cin, input);
}

void other(string input)
{
    if (input != "")
        cout << "-> Unknown Input.";
}

int main()
{
    int r, p = 0, c = 0;
    cout << "-> Game Started..\n-> **** Stone_Paper_Scissor. v1.0 By: Munish ****\n";
    while (1)
    {
        enter();
        r = random(1, 3);
        if (input == "exit" || input == "close" || input == "-x")
        {
            cout << "-> SPS closed..";
            break;
        }
        else if (input == "stone")
        {
            if (r == 1)
                cout << "-> Stone\n **** Tie ****";
            else if (r == 2)
            {
                cout << "-> Paper\n **** You Loss ****";
                c = c + 1;
            }
            else if (r == 3)
            {
                cout << "-> Scissor\n **** You Won ****";
                p = p + 1;
            }
            cout << "\nScores:\nComputer: " << c << "| Player: " << p;
        }
        else if (input == "paper")
        {
            if (r == 1)
            {
                cout << "-> Stone\n **** You Won ****";
                p = p + 1;
            }
            else if (r == 2)
                cout << "-> Paper\n **** Tie ****";
            else if (r == 3)
            {
                cout << "-> Scissor\n **** You Loss ****";
                c = c + 1;
            }
            cout << "\nScores:\nComputer: " << c << "| Player: " << p;
        }
        else if (input == "scissor")
        {
            if (r == 1)
            {
                cout << "-> Stone\n **** You Loss ****";
                c = c + 1;
            }
            else if (r == 2)
            {
                cout << "-> Paper\n **** You Won ****";
                p = p + 1;
            }
            else if (r == 3)
                cout << "-> Scissor\n **** Tie ****";
            cout << "\nScores:\nComputer: " << c << "| Player: " << p;
        }
        else
            other(input);
    }
}
