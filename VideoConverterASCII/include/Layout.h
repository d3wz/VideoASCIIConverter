#pragma once

class Layout {
	public:
		static constexpr short Width = 100;
		static constexpr short Height = 25;

		static constexpr short LogoX = 2;
		static constexpr short LogoY = 2;

		static constexpr short SeparatorX = 34;

		static constexpr short MenuX = 38;
		static constexpr short MenuY = 5;

		static constexpr short FooterHeight = 1;
		static constexpr short FooterY = Height - FooterHeight - 1;

		static constexpr short StatusX = 2;
		static constexpr short ProgressX = 20;
		static constexpr short VersionX = Width - 8;
};