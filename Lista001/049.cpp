#include <iostream>
using namespace std;

int main( void ) {
    int readHours;
    int readMinuts;
    int readSeconds;
    int elapsedSeconds;
    int seconds;
    int hours;
    int minuts;
    int endHours;
    int endMinuts;
    int endSeconds;

    cin >> readHours >> readMinuts >> readSeconds >> elapsedSeconds;


    seconds = elapsedSeconds;

    hours = static_cast<int>(seconds / 3600);
    minuts = static_cast<int>((seconds - hours * 3600) / 60);
    seconds = seconds - (hours * 3600 + minuts * 60);

    endHours = readHours + hours;
    endMinuts = readMinuts + minuts;
    endSeconds = readSeconds + seconds;

    if( endSeconds >= 60 ) {
        endMinuts = endMinuts + static_cast<int>(endSeconds / 60);
        endSeconds = endSeconds - static_cast<int>(endSeconds / 60) * 60;
    }

    if( endMinuts >= 60 ) {
        endHours = endHours + static_cast<int>(endMinuts / 60);
        endMinuts = endMinuts - static_cast<int>(endMinuts / 60) * 60;
    }

    cout << endHours << " hour(s)" << endl;
    cout << endMinuts << " minut(s)" << endl;
    cout << endSeconds<< " second(s)" << endl;
    
    cout << endl;
    return 0;
}