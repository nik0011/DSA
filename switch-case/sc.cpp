//for printing req no of notes of 100. 20 ,10 for a particular no.
#include<iostream>
using namespace std;
int main(){
    int n = 1;
    int note = 0;
    int amnt;
    cin >> amnt;
    switch (n)
    {
    case 1:{
        note = amnt / 100;
        amnt = amnt - (100 * note);
        cout << "100 rupee note" << note<<endl;
    }
    case 2:{
        note = amnt / 20;
        amnt = amnt - (20 * note);
        cout << "20 rupee note" << note<<endl;
    }
    case 3:{
        note = amnt / 10;
        amnt = amnt - (10 * note);
        cout << "10 rupee note" << note<<endl;
    }
    default:{
        cout << "Thank you";
    }
        break;
    }

    return 0;
}
