#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED

 using namespace std;

    class GradeBook
    {
    public:
     void setCourseName(string);
     string getCourseName();
     void displayMessage();
    private:
     string courseName;
    };
   #endif // GRADEBOOK_H_INCLUDED
