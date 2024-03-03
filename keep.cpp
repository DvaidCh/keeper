#include <iostream>
#include <cstdlib>
#include <string> 
int main(int argc, char *argv[]){
	std::string gate="";
	//=argv[1];
	{
		std::string temp;
		for(int i=1;i<argc;i++){
			temp=argv[i];
			gate+=(temp)+" ";
		}
	}
	
	std::string command;
	system("");
	std::cout<<"you now kept in the \033[1;32m"<<gate<<"\033[0m\n";
	std::cout<<"to exit press\033[1m Ctrl+C\033[0m\n";
	while(true){
		std::cout<<"\033[1;32m"<<gate<<"\033[0m";
		std::cin>>command;
		
		system((gate+command).c_str());
	}
}
