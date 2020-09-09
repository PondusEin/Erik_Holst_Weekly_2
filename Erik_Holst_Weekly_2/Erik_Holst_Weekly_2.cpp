#include <iostream>
#include <stdlib.h>
#include <string>


int main()
{
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



    std::cout << "2. Write a program that writes number from 100 down to 1 to screen. Use for-loop\n" << std::endl;


    for (int count2{ 100 }; count2 > 0; count2--)
    {
        std::cout << count2 << '\n';

    }
    std::cout << "Done! This was for-loop!\n\n\n";


    std::cout << "3. TBA\n\n\n" << std::endl;

    std::cout << "4. Make a program that writes 5 to 50 in steps of 5. Use a while loop.\n" << std::endl;
    int count5{ 5 };
    while (count5 < 51)
    {
        std::cout << count5 << ' ';
        count5 == 50;
        count5 += 5;
    }
    std::cout << "\nDone! This was while-loop!\n\n\n";

    std::cout << "5. Make a program that writes 5 to 50 in steps of 5. Use a for loop.\n" << std::endl;
    for (int count6{ 5 }; count6 <= 50; count6 += 5)
    {
        std::cout << count6 << ' ';
    }

    std::cout << "\nDone! This was for-loop!\n\n\n";


    std::cout << "6. Make a program that writes 5 to 50 in steps of 5. Use..while." << '\n' << "TBA\n\n" << std::endl;


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


        switch (grade)
        {
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
    return 0;
}
