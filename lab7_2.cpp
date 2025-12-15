//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Etheri
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Etheri: 680610496
Fahsai: I think you may be GEAR 56. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Etheri: Star Wars VII
Fahsai: So....which day are you free to go with me?
Etheri: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Etheri: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/


#include <iostream>
#include <string>
using namespace std;

int main(){
    string Goh;
    int dex;
    string Mew;
    string Castform;
    string Quotes;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
    getline(cin, Goh);
    cout << "Fahsai: Wow!!! " << Goh << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. ";
    cout << "What is your student ID?\n" << Goh <<": ";
    cin >> dex;
    cout << "Fahsai: I think you may be GEAR "<< int(dex)/10000000 - 12 <<". ";
    cout << "I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << Goh <<": ";
    getline(cin >> ws, Mew);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << Goh <<": ";
    getline(cin, Castform);
    cout << "Fahsai: ";
    cout << Castform << "....that is OK!!! I'm looking forward to watching "<< Mew <<" with you.\n";
    cout << Goh <<": ";
    getline(cin, Quotes);
    cout << "Fahsai: 555+ see you "<< Castform << ". Bye Bye \\(^ ^)/";
    return 0;
}
