
#pragma once

#include "Figure.h"

class GameField	// ����� �������� ����
{
private:
    Figure *figure;    // ������
    float currentX, currentY;	// ��������� ���������� ������
    float speed;	// �������� ������� ������

    void AddFigure();	// ���������� ������ �� ������� ����

    void ClearPrevious();	// �������� ����������� ����

    bool CheckCollisionLeft();	// �������� ������������ �����

    bool CheckCollisionRight();	// �������� ������������ ������

    void DeleteHorizontalLine(int index_line);

public:
    bool **gameFieldArray;	// ��������� �� ������ ���������� / ������� ������ - ����
    const int width, height; // ������� ����

    GameField(int, int);

    ~GameField();

    void CreateFigure();	// �������� ������

    void SpeedUpFigure();	// ��������� ������� ������

    void MoveLeftFigure();	// �������� �����

    void MoveRightFigure();	// �������� ������

    void MoveRotateFigure();	// ������� ������

    void MoveDownFigure();	// �������� ������ ����

    bool CheckCollisionDown(); // �������� ������������ �����

    bool CheckGameOver();	// �������� ������������ �� "�������"

    void CheckLine();	// �������� �����
};
