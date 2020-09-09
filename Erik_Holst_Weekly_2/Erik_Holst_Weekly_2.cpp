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

    system("cls");
    int i{ 0 };
    int input;
    //Output immediatly
    std::cout << "1. Write a program that writes from 1 to 100." << '\n' <<"Select [1] for while-loop or [2] for for-loop"<< std::endl;
    std::cin >> input;

    switch (input){
    case 1:
        std::cout << "1.1. Use a while-loop:\n" << std::endl;


        while (i < 101) {
         std::cout << i << ' ';
         i++;
    }
    
    std::cout << "\nDone! This was while-loop!\n\n\n" << std::endl;
    break;
    case 2:
    std::cout << "1.2. Use a for-loop:\n" << std::endl;

    for (int count1{ 1 }; count1 < 101; count1++) {
        std::cout << count1 << ' ';

    }
    std::cout << "\nDone! This was for-loop!\n\n\n" << std::endl;
    break;
    }
    char done1 = _getch();

}

void task2() {
    system("cls");
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
    system("cls");
    std::cout << "3. Make a program that writes 5 to 50 in steps of 5. Use a while loop.\n" << std::endl;
    int count5{ 5 };
    while (count5 < 51)
    {
        std::cout << count5 << ' ';
        count5 == 50;
        count5 += 5;
    }
    std::cout << "\nDone! This was while-loop!\n\n\n";
    char done3 = _getch();
}


void task4() {
    system("cls");
    std::cout << "4. Make a program that writes 5 to 50 in steps of 5. Use a for loop.\n" << std::endl;
    for (int count6{ 5 }; count6 <= 50; count6 += 5)
    {
        std::cout << count6 << ' ';
    }

    std::cout << "\nDone! This was for-loop!\n\n\n";
    char done4 = _getch();
}



void task5() {
    system("cls");
    std::cout << "5. Make a program that writes 5 to 50 in steps of 5. Use do-while." << '\n'  << std::endl;

    int i{ 5 };
    do {
        
         
        std::cout << i << ' ';
        i = i + 5;
        
    } while (i <= 50);
        std::cout << "\nDone! This was do-while!\n\n\n";
    char done5 = _getch();
}



void task6() {
    system("cls");
    std::cout << "6. Make a program that ask user what grade they want in Programming 1. Use switch.\n" << std::endl;

    char grade;
    std::cout << "What grade do you want in Programming 1? [A-F]: ";
    std::cin >> grade;

    {


        switch (grade) {

        case 'A': case 'a':
            std::cout << "Outstanding" << std::endl;
            break;
        case 'B': case 'b':
            std::cout << "Very good" << std::endl;
            break;
        case 'C': case 'c':
            std::cout << "Good" << std::endl;
            break;
        case 'D': case 'd':
            std::cout << "Some flaws" << std::endl;
            break;
        case 'E': case 'e':
            std::cout << "Not very good..." << std::endl;
            break;
        case 'F': case 'f':
            std::cout << "Fail" << std::endl;
            break;
        default:
            std::cout << "That is not a grade!" << std::endl;
            break;
        }
    }

    std::cout << "\n\nWell done! Press any button to continue." << std::endl;
    char done6 = _getch();
}

void task7() {
    system("cls");
    std::cout << "7. Update task 6 to accept both capital and lower case letter.\n E.g. both 'A' & 'a' etc. are valid answers.\n\n\n";
    std::cout << "This has been added, try it out!" << '\n' << std::endl; //In reality, it was allready there, but now the player is interested to try again.

    char done7 = _getch();

}

void menu() {
    do 
    {
        int task;
        std::cout << "Please choose a task [1-7]: ";
        std::cin >> task;

        switch (task)
        {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 6:
            task6();
            break;
        case 7:
            task7();
        default:
            std::cout << "Try picking a number again: ";
            break;
        }
        
    } while (true);
}

int main()
{
    system("cls");
    std::cout << "This is Erik Holst's assignment Weekly 2.\n";
    std::cout << "It conatins 7 tasks now. \n";
    std::cout << "Some task are just information on the task or previous task, while task 6 is interactive.\n";
    std::cout << "To choose a task, type a number between 1 and 7, then press enter. \n";


    menu();

    return 0;
}
