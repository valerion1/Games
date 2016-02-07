#ifndef FIGURE_H
#define FIGURE_H

#include <time.h>
#include <cstdlib>

class Figure
{
private:
	void Clear();	// ����� ������� ������� ������

public:
	bool figureArray[4][4]; // ������ 4�4 ������
	enum { line, square, Lleft, Lright, pyramid, Zleft, Zright }type;	// ������������ ��������� �����
	int rotate;	// ������� ��������� ������

	void Create();	// ��������
	void Rotate();	// �������
};

#endif // FIGURE_H
