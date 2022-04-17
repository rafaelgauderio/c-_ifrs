#include <stdio.h>
#include <iostream>
#include "GradeBook.h"
#include <string>


    void GradeBook::setCourseName
    (std::string name) {
     courseName = name;
    }
    std::string GradeBook::getCourseName()
    {
     return courseName;
    }

    void GradeBook::displayMessage()
     { std::cout << "Welcome to the grade book for: " << getCourseName() <<"!" << endl;
     }

