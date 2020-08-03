#pragma once

#include "Graphics.h"
#include "Location.h"

class Board
{
public:
	Board(Graphics& gfx);
	void DrawCell(const Location& loc, Color c);
	int GetGridWidth() const;
	int GetGridHeight() const;
	bool IsInsideBoard(const Location& loc) const;
	void DrawBorder();

private:
	static constexpr Color borderColor = Colors::Cyan;
	static constexpr int dimension = 20;
	static constexpr int cellPadding = 1;
	int width = 32;
	int height = 24;
	static constexpr int x = 70;
	static constexpr int y = 50;
	static constexpr int borderWidth = 4;
	static constexpr int borderPadding = 2;
	Graphics& gfx;
};