
#pragma once

#include "Figure.h"

class GameField	// ����� �������� ����
{
private:
        // ������
    float currentX, currentY;	// ��������� ���������� ������
    float speed;	// �������� ������� ������
    int score;
    int next_figure;

    void AddFigure();	// ���������� ������ �� ������� ����

    void ClearPrevious();	// �������� ����������� ����

    bool CheckCollisionLeft();	// �������� ������������ �����

    bool CheckCollisionRight();	// �������� ������������ ������

    void DeleteHorizontalLine(int index_line);

public:
    Figure *figure;
    bool **gameFieldArray;	// ��������� �� ������ ���������� / ������� ������ - ����
    const int width, height; // ������� ����

    GameField(int, int);

    ~GameField();

    int GetScore();

    bool** NextFigure();

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
