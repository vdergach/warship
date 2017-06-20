#pragma once

class Fields {
private:
	int coord_x, coord_y;
	CellStates cell_state;
public:
	Fields(int x = 0, int y = 0, CellStates state = Empty)
	{
		coord_x = x;
		coord_y = y;
		cell_state = state;
	}

	void SetX(int x)
	{
		coord_x = x;
	}

	void SetY(int y)
	{
		coord_y = y;
	}

	void SetState(CellStates state)
	{
		cell_state = state;
	}

	CellStates GetState()
	{
		return cell_state;
	}

	int GetX()
	{
		return coord_x;
	}

	int GetY()
	{
		return coord_y;
	}

	bool TryHit(int x, int y)
	{
		return x == coord_x && y == coord_y && cell_state != HitCage;
	}

	void Print()
	{
		if (cell_state == Empty)
			cout << ' ';
		else if (cell_state == HitCage)
			cout << 'x';
		else
			cout << '*';
	}
};