#include <iostream>
#include <fstream>
#include <string>

static std::string getFileContent(char *filename);

int writeInFile(std::string filename, std::string content);

bool fileExist(std::string filename);

void replaceContent(std::string &content, std::string s1, std::string s2);

int main(int argc, char **argv){
	if (argc != 4)
		std::cout << "Usage : <filename> s1 s2" << std::endl;
	for (int i = 1; i < argc; i++)
	{
		if (i != 1)
		{
			if (!argv[i][0])
				std::cout << "Error : s" << i - 1 << " is empty" << std::endl;
		}
		else
		if (!argv[i][0])
			std::cout << "Error : filename is empty"<< std::endl;
	}
	std ::string filename = argv[1];
	std::string content = getFileContent(argv[1]);
	if (content.empty())
		return 1;
	std::string newFile = filename + ".replace";
	replaceContent(content, argv[2], argv[3]);
	if (fileExist(newFile))
		return 2;
	writeInFile(newFile, content);
}

bool fileExist(std::string filename) {
	std::ifstream file(filename.c_str());
	bool fileExists = file.good();
	if (fileExists)
		std::cout << "Error : file " << filename << " exist" << std::endl;
	return fileExists;
}

int writeInFile(std::string filename, std::string content){
	std::ofstream file(filename.c_str());
	if (!file)
	{
		std::cout << "Error : file " << filename << " exist" << std::endl;
		return 1;
	}
	file << content;
	return 0;
}

static std::string getFileContent(char *filename){
	std::string  	content;
	std::ifstream 	file(filename);
	std::string 	line;
	bool			first = true;

	if (!file)
	{
		std::cout << "Error : file not found" << std::endl;
		return "";
	}
	if (!file.is_open())
	{
		std::cout << "Error : file not open" << std::endl;
		return "";
	}
	while (std::getline(file, line))
	{
		if (!first)
			content += "\n";
		content += line;
		first = false;
	}
	file.close();
	if (content.empty())
		std::cout << "Error : " << filename << " is empty" << std::endl;
	return content;
}

void replaceContent(std::string &content, std::string s1, std::string s2){
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
}
