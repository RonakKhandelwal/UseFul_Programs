#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;





int main(){
	ofstream myfile;
	myfile.open("first.html");
	myfile<<"<html>\n<body>\n";
	int nor=rand()%10;
	for (int i = 0; i < nor; i++)
	{
		int lol=rand()%5;
		switch(lol){
			case 0:myfile<<"<input type='checkbox'>SomeStuff1\n";
			case 1:myfile<<"<input type='text'>SomeStuff1\n";
			case 2:myfile<<"<input type='button'>SomeStuff1\n";
			case 3:myfile<<"<input type='range'>SomeStuff1\n";
			case 4:myfile<<"<input type='password'>SomeStuff1\n";
			default :myfile<<"<input type='password'>SomeStuff1\n";
		};

	}
	myfile<<"</body>\n</html>";
	myfile.close();
	return 0;
}