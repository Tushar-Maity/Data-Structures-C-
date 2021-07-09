//Rahul has some savings, if the savings is more than 5000, he will take Neha at a date(if if again the savings is more than 10000, he will take Neha at a roadtrip otherwise for a dinner); if he has 5000>savings>2000, he will take Riya on a date; if he is haveong less than 2000 he wil go with his friends

#include<iostream>
using namespace std;

int main() {
    int savings;
    cin>>savings;

    if(savings>5000) {
        if(savings>10000) {
            cout<<"Take Neha on a RoadTrip";
        } else {
            cout<<"Take Neha for a Dinner";
        }
    } else if(savings>2000) {
        cout<<"Riya";
    } else {
        cout<<"Friends";
    }

    return 0;
}

