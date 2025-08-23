#include"../include/EasyC.h"
#include<filesystem>
#include<fstream>
#include<sstream>

namespace fs = std::filesystem;

void create_folder(text path, text name) {
	text pn = path + name;
	if (!fs::exists(pn)) {
		fs::create_directories(pn);
	}
	print("folder: " + pn + "created");
}

void create_file(text path, text name) {
	text pn = path + name;
	std::ofstream file(pn);

	if (file.is_open()) {
		file << "÷е вм≥ст файлу з назвою: " << pn << "\n";
		file.close();
	}
}

void delete_folder(text path, text name) {
	text pn = path + name;

	std::filesystem::remove_all(pn);
}

void delete_file(text path, text name) {
	text pn = path + name;
	const char* cpn = pn.c_str();

	if (std::remove(cpn) == 0) {
		print("File deleted with name" + pn);
	}
	else {
		print("File didnt deleted");
	}
}