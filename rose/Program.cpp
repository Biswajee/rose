#include "pch.h"
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

using namespace winrt;

// You should also change the Alias value in the AppExecutionAlias Extension
// in the package.appxmanifest to a value that you define. To edit this file
// manually, open it with the XML Editor.

	


int main()
{
	std::string banner = R"(
    ____                   
   / __ \ ____   _____ ___ 
  / /_/ // __ \ / ___// _ \
 / _, _// /_/ /(__  )/  __/
/_/ |_| \____//____/ \___/ 
                           
)";

	std::cout << banner << std::endl;
    wprintf(L"rose :: console notification utility for windows\n");
	if(__argc == 1) {
		std::cout << "Too few arguments. Try passing a job with rose. For more command options, use: rose help" << std::endl;
		std::cout << "Basic Syntax : rose [COMMAND]" << std::endl;
		return 0;
	}

	if (__argc == 2) {
		std::string command = __argv[1];
		if (command.compare("help")) {
			std::cout << "\nROSE :: COMMAND LINE NOTIFICATION UTILITY FOR WINDOWS, *Beta release*" << std::endl;
			std::cout << "USAGE: rose [COMMAND]\nCOMMAND : All windows command line operations" << std::endl;
			std::cout << "COMMAND : All windows command line jobs and processes" << std::endl;
		} else
			system(__argv[1]);
	}
	else
		wprintf(L"Too many arguments. ");
	return 0;
}
