#include <stdio.h>
#include <iostream>
#include "GradeBook.h"
#include <string>

int main() {
	GradeBook myNoteBook;
	myNoteBook.setCourseName("Livro compiladores C++");
	myNoteBook.displayMessage();

	GradeBook meuNoteBook;
	meuNoteBook.setCourseName("Programa��o orientada a objetos em java");
	meuNoteBook.displayMessage();

	return 0;
}
