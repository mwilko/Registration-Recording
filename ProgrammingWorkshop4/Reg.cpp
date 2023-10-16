// ********** IMPLEMENTATION FILE **********
//  Reg.cpp
//  ProgrammingWorkshop4
//
//  Created by Max Wilkinson on 16/10/2023.
//

#include "Reg.hpp"//includes function and variable declarations from header class
#include <iostream>//includes pre-defined libary 'iostream'
using namespace std;//imports namespace 'std' so any identifier from the namspaces doesnt need to be referenced as 'std::string' for example

//Uses iostream:
bool Registration::input()//boolean function of Registration class return true if code is correct or false if its incorrect. In other words, this acts as an input validation function.
{
    cout << "Enter the access code: ";
    //integer variable code saved as user input
    cin >> code;
    if (checkCode())//if checkCode returns true:
    {
        setRecord(true);//function which sets 'attend' string to TRUE
        return true;//code is correct
    }
    else//if checkCode returns false:
    {
        setRecord(false);//function which sets 'attend' string to False
        return false;//code is incorrect
    }
}

void Registration::output()//void function (which doesnt need to return anything), displays you have attended the session if the code you enetered is correct. This is outputted at the end of the program.
{
    cout << "attend = " << attend << endl;//displays attend and the value of the string (which will be true or false)
}

void Registration::setRecord(bool index)//void function (which doesnt need to return anything), uses parameter value and sets string value accordingly
{
    if (index)//if parameter == true.
        attend = "TRUE";//set attend string to TRUE
    else//if parameter == false.
        attend = "False";//set attend string to False
}

bool Registration::checkCode()//boolean function checks if code entered is valid or not. (returns true if code is correct, false if its not)
{
    int accesscode = 123456; //integer which represents the correct code (user should input this value)
    if (code == accesscode)//if code is correct
    {
        cout << "Register successfully.\n";
        return true;
    }
    else//if code is incorrect
    {
        return false;
    }
}

int Registration::getCode()//integer function which when called, returns the code the user entered.
{
    return code;//integer user input is given back
}
