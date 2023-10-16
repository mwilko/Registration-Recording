// ********** INTERFACE FILE **********
//  Reg.hpp
//  ProgrammingWorkshop4
//
//  Created by Max Wilkinson on 16/10/2023.
//

#include <iostream>//includes pre-defined libary 'iostream'

//include guard. Used to stop the header from being included more than once. Stopping repeated code and helping with memory.
#ifndef REG_HPP//checks if the header file has been defined.
#define REG_HPP//define Reg.hpp. (header file)

class Registration//declaration of a class, this links all variables and functions with would be associated with Registration.
{
public://variables and functions that can be accessed anywhere outside of the class.
    bool input();//function which takes the user input validation.
    void output();//function which outputs weather the input is accepted.
    void setRecord(bool index);//function which checks the given parameter and changes attend string according to it.
    int getCode();//Returns the input code.

private:
    bool checkCode(); //to check the input matches the access code
    int code;//integer variable which stores the user input
    std::string attend;//string which is editted by setRecord function if the user input is correct or not. After this it is displayed in the output function.
};

#endif /* Reg_hpp */ //end of the block of code
