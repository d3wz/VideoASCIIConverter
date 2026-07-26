#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <codecvt>
#include <locale>

class LogoLoader {
	public:
		bool Load(const std::string& filename);
		const std::vector<std::wstring>& GetLines() const;

	private:
		std::vector<std::wstring> lines;
};