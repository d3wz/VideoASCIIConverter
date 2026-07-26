#include "LogoLoader.h"

bool LogoLoader::Load(const std::string& filename) {
	std::wifstream file(filename);

	if (!file.is_open()) {
		return false;
	}

	file.imbue(
		std::locale(
			std::locale(),
			new std::codecvt_utf8<wchar_t>
		)
	);
	
	std::wstring line;

	while(std::getline(file,line)) {
		lines.push_back(line);
	}

	return true;
}

const std::vector<std::wstring>& LogoLoader::GetLines() const {
	return lines;
}