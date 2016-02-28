#ifndef FIGURE_H
#define FIGURE_H

#include <time.h>
#include <cstdlib>

class Figure
{
private:
	void Clear();	// ����� ������� ������� ������


public:
    bool **getFigure;
    Figure();
    ~Figure();
	bool figureArray[4][4]; // ������ 4�4 ������
    enum { line, square, Lleft, Lright, pyramid, Zleft, Zright }type;	// ������������ ��������� �����
	int rotate;	// ������� ��������� ������

    bool** GetFigure(int figure);
    void Create(int figure);	// ��������
	void Rotate();	// �������
};

#endif // FIGURE_H
