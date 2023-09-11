#include <iostream>

void Output(){
	std::cout << "This is the v1\n";
}

void Output(int v1){
	std::cout << "This is the v2\n";
}

void Output(int v1, int v2){
	std::cout << "This is the v3\n";
}

int main()
{
	int v1,v2;

	Output();
	Output(v1);
	Output(v1,v2);

	return 0;
}

