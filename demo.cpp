// ********** APPLICATION FILE **********
//  demo.cpp
//  ProgrammingWorkshop4
//
//  Created by Max Wilkinson on 16/10/2023.
//


//includes header class again, since the Reg class has the implimentation but it transfers back to the header class.
#include "Reg.hpp"
#include <iostream>
using namespace std;

int main()//integer function main is the entry point for every C++ program. Here it creates an object and then calls the object functions to determine if the code is correct.
    //Once all statements have been executed it will return integer value 0. If there is an issue, integer value other than 0 will be outputted
{
    //myCode, object which is an instance of the Registration class
    Registration myCode;
    cout << "Registration:\n";//text inside of speach marks is outputted to user in terminal
    
    if (myCode.input())//if statement calls input function, if returned true code below is executed (code is valid):
    {
        cout << "The input code is " << myCode.getCode() << "\n";//expression which uses the myCode object and calls the getCode function which returns the user inputted code
        cout << "The system has been updated with TRUE: ";
        myCode.output();//outputs attend = TRUE (because code is correct)
        
    }
    else//if input function returns false (code is invalid):
    {
        cout << "Your input code " << myCode.getCode() << " doesn't match the access code\n";//expression which uses the myCode object and calls the getCode function which returns the user inputted code
        cout << "Register unsuccessfully. \n";
        cout << "The system has been updated with FALSE: ";
        myCode.output();//outputs attend = False (because code is incorrect)
    }
    return 0;
}
