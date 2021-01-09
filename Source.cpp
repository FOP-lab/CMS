#include<iostream>
#include <windows.h>
#include <dos.h>
using namespace std;

//Introducing User Defined Functions
void mainpage(); // it shows the login page for three access party
void title(); // cosmetic title page to be used on various pages
void loading(); //loading animation
void admin();
void teacher();
void student();




// Defining User Defined Functions{
void title() {
    cout << "\t\t\t\t --------------------------" << endl;
    cout << "\t\t\t\t |COURSE MANAGEMENT SYSTEM|" << endl;
    cout << "\t\t\t\t --------------------------" << endl;
    cout << "\n";
    cout << "\t\t\t\t" << endl;
}
void loading() {
    cout << "\t\t\tLoading";
    for (int process = 0; process < 25; process++) {
        Sleep(150);
        cout << ".";
    }
    cout << endl;
}
void admin() {
    int input;
    system("CLS");
    title();
    cout << "\tSelect School" << endl;
    cout << "\t\t 1. School of Mechanical and Manufacturing Engineering (SMME)" << endl;
    cout << "\t\t 2. School of Electrical Engineering and Computer Science (SEECS)" << endl;
    cout << "\t\t 3. Atta UR Rahman School of Applied Biochemistry (ASAB)" << endl;
    cout << "\t\t 4. School of Social Sciences and Humanities (S3H)" << endl;
    cout << "\t\t 5. Return to main menu" << endl;


    cout << "\n\t\t\t Choose options:[1/2/3/4/5] ";
    cin >> input;
    //    switch (input) {
    //        case 1:
    //
    //    }
}


void teacher() {
    system("CLS");
    title();

}
void student() {
    system("CLS");
    title();

}
void mainpage() {
    int i;
    title();
    cout << "\t\t\t\t" << "Login as" << endl;
    cout << "\t\t\t\t\t" << "1. Adminstrator\n" << endl;
    cout << "\t\t\t\t\t" << "2. Teacher\n" << endl;
    cout << "\t\t\t\t\t" << "3. Student\n" << endl;
    cout << "\t\t\t Choose options:[1/2/3] ";
    cin >> i;
    switch (i) {
    case 1:
        loading(); // editing it out to avoid delay in checking
        admin();
        break;
    case 2:
        teacher();
        break;
    case 3:
        student();
        break;
    default:
        cout << "Enter a valid input" << endl;
        mainpage();

    }
}



int main() {
    mainpage();

};