//Rahul has some savings, if the savings is more than 5000, he will take Neha at a date; if he has 5000>savings>2000, he will take Riya on a date; if he is haveong less than 2000 he wil go with his friends

#include<iostream>
using namespace std;

int main() {
    int savings;
    cin>>savings;

    if(savings>5000) {
        cout<<"Neha";
    } else if (savings>2000){
        cout<<"Riya";
    } else {
        cout<<"Friends";
    }

    return 0;
}