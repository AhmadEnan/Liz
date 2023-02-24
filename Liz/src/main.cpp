#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv) 
{
	/* Implementing the Parser */
	/* Step 1 - read the file into the memory */

	// read the file
	std::ifstream file("E:/dev/liz/Liz/examples/hello world.liz", std::ios::in | std::ios::binary);
	if (!file.is_open()) 
	{
		std::cerr << "can't read the file, the path might be incorrect or the file may not exist!";
		file.close();
		return 1;
	}

	// get the size of the file
	std::streampos file_size = 0;
	file.seekg(0, std::ios::end);
	file_size = file.tellg();
	file.seekg(0, std::ios::beg);

	// allocate a string to hold the file data
	std::string file_data;
	file_data.resize(file_size);

	//actually read the data
	file.read(&file_data[0], file_size);

	// print out the contents of the file (just testing)
	std::cout << file_data << std::endl;

	file.close();
	return 0;
}