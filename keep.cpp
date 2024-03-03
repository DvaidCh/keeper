#include <iostream>
#include <cstdlib>
#include <string> 
int main(int argc, char *argv[]){
	std::string gate=argv[1];
	std::string command;
	system("");
	std::cout<<"you now keeped in the \033[1;32m"<<gate<<"\033[0m\n";
	std::cout<<"to exit write\033[1m exit\033[0m\n";
	while(true){
		std::cout<<"\033[1;32m"<<gate<<">\033[0m";
		std::cin>>command;
		if(!command.compare("exit"))break;
		system((gate+" "+command).c_str());
	}
}
