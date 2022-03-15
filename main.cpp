#include <boost/json.hpp>
#include <iostream>
#include <filesystem>
#include <fstream>

int main(int argc, char* argv[])
{
    try 
	{
		// Read file to input file stream
        std::filesystem::path path{ "../data/test.json" };
        std::ifstream fileContentStream{ path };
        
        

        // Convert it to string
        std::string fileContentString;
        fileContentStream.seekg(0, std::ios::end);
        fileContentString.reserve(fileContentStream.tellg());
        fileContentStream.seekg(0, std::ios::beg);
        fileContentString.assign((std::istreambuf_iterator<char>(fileContentStream)), std::istreambuf_iterator<char>());

        std::cout << fileContentString << std::endl;

        // create boost json object
        boost::json::object rootNode = boost::json::parse(fileContentString).as_object();
        
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
