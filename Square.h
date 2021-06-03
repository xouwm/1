#pragma once
#include <iostream>
using namespace std;

class Square
{
private:
	double upper_left_corner_x;
	double upper_left_corner_y;
	double length;
	/**
	 \brief	������������� ����� ��������
	 */
	void set_length(double length);
public:
	/**
	 \brief	����������� � �����������
	 */
	explicit Square(double upper_left_corner_x, double upper_left_corner_y, double length);
	/**
	 \brief	����������� �����
	 */
	explicit Square(double side);
	/**
	 \brief	���������� �� ���������
	 */
	~Square() = default;
	/**
	 \brief	����������� ����������� �� ���������
	 */
	Square(const Square&) = default;
	/**
	 \brief	����������� ������������ �� ���������
	 */
	Square& operator=(const  Square&) = default;
	/**
	 \brief	������������� ���������� �� x
	 */
	void set_upper_left_corner_x(double x);
	/**
	 \brief	������������� ���������� �� y
	 */
	void set_upper_left_corner_y(double y);
	/**
	 \brief	������������� ����� �������� �����
	 */
	void set_new_length(double length);
	/**
	 \brief	�������� �������� ��������
	 */
	double get_perimeter();
	/**
	 \brief	�������� ������� ��������
	 */
	double get_area();
	/**
	 \brief	�������� ������
	 */
	friend ostream& operator<<(ostream& out, const Square& sq);
};