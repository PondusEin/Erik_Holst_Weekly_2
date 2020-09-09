#define NOMINMAX
#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <limits>

int getintfromuser() {
    int integer;
    std::cin >> integer;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max()), '\n';
        system("cls");
        std::cout << "That, my friend, is not a number...\n";
        std::cin >> integer;
    }
    return integer;
}


void task1() 
{
    //Output immediatly
    std::cout << "1. Write a program that writes from 1 to 100." << '\n' << std::endl;
    std::cout << "1.1. Use a while-loop:\n" << std::endl;
    
    int count{ 1 };
    while (count < 101) {
        std::cout << count << ' ';
        count++;
    }
    std::cout << "\nDone! This was while-loop!\n\n\n" << std::endl;

    std::cout << "1.2. Use a for-loop:\n" << std::endl;

    for (int count1{ 1 }; count1 < 101; count1++) {
        std::cout << count1 << ' ';

    }
    std::cout << "\nDone! This was for-loop!\n\n\n" << std::endl;
    char done1 = _getch();

}

void task2() {

    //Output immediatly
    std::cout << "2. Write a program that writes number from 100 down to 1 to screen. Use for-loop\n" << std::endl;


    for (int count2{ 100 }; count2 > 0; count2--)
    {
        std::cout << count2 << '\n';

    }
    std::cout << "Done! This was for-loop!\n\n\n";

    char done2 = _getch();
}

void task3() {
    std::cout << "3. Seems like there's nothing here.\n\n\n" << std::endl;

    std::cout << "Press any button to go back.\n\n\n" << std::endl;
    char done3 = _getch();
}


void task4() {

    std::cout << "4. Make a program that writes 5 to 50 in steps of 5. Use a while loop.\n" << std::endl;
    int count5{ 5 };
    while (count5 < 51)
    {
        std::cout << count5 << ' ';
        count5 == 50;
        count5 += 5;
    }
    std::cout << "\nDone! This was while-loop!\n\n\n";
    char done4 = _getch();
}

void task5() {
    std::cout << "5. Make a program that writes 5 to 50 in steps of 5. Use a for loop.\n" << std::endl;
    for (int count6{ 5 }; count6 <= 50; count6 += 5)
    {
        std::cout << count6 << ' ';
    }

    std::cout << "\nDone! This was for-loop!\n\n\n";
    char done5 = _getch();
}



void task6() {
    std::cout << "6. Make a program that writes 5 to 50 in steps of 5. Use..while." << '\n' << "TBA\n\n" << std::endl;


    char done6 = _getch();
}


/*
void task7() {
   
    std::cout << "7. Make a program that ask user what grade they want in Programming 1. Use switch.\n" << std::endl;

    enum class Grade
    {
        A,
        B,
        C,
        D,
        E,
        F
    };
    void printGrade(Grade grade);
    {


        switch (grade) {

        case Grade::A:
            std::cout << "Outstanding";
            break;
        case Grade::B:
            std::cout << "Very good";
            break;
        case Grade::C:
            std::cout << "Good";
            break;
        case Grade::D:
            std::cout << "Some flaws";
            break;
        case Grade::E:
            std::cout << "Not very good...";
            break;
        case Grade::F:
            std::cout << "Fail";
            break;
        default:
            std::cout << "That is not a grade!";
            break;
        }
    }

    std::cout << "\n\nWell done! Press any button to continue." << std::endl;
    char done7 = _getch();
}
*/


int main()
{

    bool complete1 = false;
    bool complete2 = false;
    bool complete3 = false;
    bool complete4 = false;
    bool complete5 = false;
    bool complete6 = false;
    bool complete7 = false;
    bool complete8 = false;

    system("cls");
    std::cout << "This is Erik Holst's assignment Weekly 2.\n";
    std::cout << "It conatins 8 tasks now. \n";
    std::cout << "Some task are just information on the task or previous task, while task 7 is interactive.\n";
    std::cout << "To choose a task, type a number between 1 and 8, then press enter. \n";


    return 0;
}
