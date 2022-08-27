#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main(){
    time_t t = time(NULL);
    tm *timePtr = localtime(&t); //  local time of the computer.

    int seconds = (timePtr->tm_sec);
    int minutes = (timePtr->tm_min);
    int hrs = (timePtr->tm_hour);


while (true){
        system("cls");

        cout << "The digital time is :";

        cout << "      |" << hrs << " : " << minutes << " : " << seconds << " " << endl;

        seconds++;
        if (seconds >= 60)
        {
            seconds = 1;
            minutes++;
        }

        if (minutes >= 60)
        {
            minutes = 0;
            hrs++;
        }

        if (hrs > 24)
        {
            hrs = 00;
        }

        Sleep(1000);
    }

    return 0;
}
