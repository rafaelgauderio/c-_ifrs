#include <stdio.h>
#include <iostream>
#include "GradeBook.h"
#include <string>

int main() {
	GradeBook myNoteBook;
	myNoteBook.setCourseName("Livro compiladores C++");
	myNoteBook.displayMessage();

	GradeBook meuNoteBook;
	meuNoteBook.setCourseName("Programação orientada a objetos em java");
	meuNoteBook.displayMessage();

	return 0;
}
