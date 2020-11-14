#include <iostream>
#include <sstream>

int main()
{
    //Chat up the user
    std::cout << "I guess this program will be intended to figure out what I want to do";
    std::cout << "\n";
    //Initialize Variables
    int finishedchoosing(0);
    int choice_number(0);
    int array_width(1);
    bool yes_no_bool(NULL);
    char yes_no_bool_eval(NULL);
    //Begin asking
    if (finishedchoosing == 0)
    {
        //GOTO for when user has completed their first choice
    NEXT_ITEM:
        std::cout << "what is your #" << choice_number + 1 << " choice?";
        std::cout << "\n";
        std::string current_choice;
        std::cin >> current_choice;
        std::cout << current_choice << " confirmed";
        std::cout << "\n";
        //GOTO for if the user did not correctly choose N or Y
    RETRY:
        //Check if the user is all done
        std::cout << "is that your last choice? (Y/N)";
        std::cout << "\n";
        std::string yes_no_bool_eval;
        std::cin >> yes_no_bool_eval;
        //Determine if that was a Y or N
        if (yes_no_bool_eval == "Y" || yes_no_bool_eval == "y")
        {
            yes_no_bool = true;
            std::cout << "Y Confirmed";
            std::cout << "\n";
        }
        else if (yes_no_bool_eval == "N" || yes_no_bool_val == "n")
        {
            yes_no_bool = false;
            std::cout << "N Confirmed";
        }
        else
        {
            std::cout << "\n";
            std::cout << "Please enter either Y or N";
            std::cout << "\n";
            goto RETRY;
        }
        if (yes_no_bool == false)
        {
            array_width + 1;
            choice_number + 1;
            goto NEXT_ITEM;
        }
    };
}
