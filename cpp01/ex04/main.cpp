#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[])
{
	if (argc != 4){
		std::cout << "argv error" << std::endl;
		return 0;
	}
	std::string file = argv[1], target = argv[2], src = argv[3];
	if (target == "") {
		std::cout << "argv error" << std::endl;
		return 0;
	}

	std::ifstream fin(file.c_str());
	if (!fin){
		std::cout << "file open fail" << std::endl;
		return 0;
	}
	std::ofstream fout((file + ".replace").c_str());
	if (!fout){
		std::cout << "file open fail" << std::endl;
		return 0;
	}
	
	std::string line;
	std::size_t found;
	while(getline(fin, line)) {
		found = line.find(target);
		while (found != std::string::npos) {
			line.erase(found, target.length());
			line.insert(found, src);
			found = line.find(target, found + src.length());
		}
		fout << line;
		if (!fin.eof())
			fout << std::endl;
	}
}
