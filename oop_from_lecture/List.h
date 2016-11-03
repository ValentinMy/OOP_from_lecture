#pragma once
#include <fstream>
#include "Time.h"

class List						//����� ������ (List)
{
protected:
	
	class Elem					//����� ������� ������ (Elem)
	{
		Time * data;			//��������� �� ���������� (�� ��������� �������� ��� private)

		Elem * next;			//��������� �� ��������� ������� ������	(�� ��������� �������� ��� private)

	public:

		Elem(Time *);			//����������� ������ Elem ����������� �� ���� ��������� �� ������ ���� Time 
		
		Elem(const Elem &);		//����������� �����������. �� ����� ��������� ������ ������ ������ �� ���� (Elem)
		
		~Elem();				//����������� �� ���������
		
		Elem *getNetx();		//����� ��� ������ �������� �������� ��������� �� ��������� ������� (�� �� ��� ��������� ��������� next � ���12)
		
		void setNext(Elem *);	//����� ����������� ������������� ����� ����� ������� �������� � ��������� (���������� ���������)
		
		Time *getData();		//����� ���������� ���������� ������� � ���� ��������� �� ������ ���� Time (�-�: Time * tPtr = �������_�������.getData())
		
		int compare(Elem *);	//����� ��� ��������� �������� ������� � ������������ �� ��������� � ���������� (�-�: �������_�������.compare(������ � ������� ����������))
	};

	Elem *head;					//���������� head ��� �������� ��������� �� ������������ ������ ���� Elem
	
	int count;					//���������� ��� �������� �������� ���������� ������������ ���������

public:

	List();						//����������� �� ���������

	~List();					//����������

	void add(Time *);			//���������� ��������� ��������� �� ������ ���� Time

	Time *remove(int);			//�������� �� �������
	
	Time *remove(Time *);		//�������� �� ����������� (��������� ��������� �� ������ ���� Time)
	
	List& concat(const List&);	//���������� ���� ������� � ����������� ������ ������ � �������� ��������� ������ ������
	
	List& copy(const List&);	//����������� ������
	
	int search(Time *);			//����� �� ������ ������ �����������, �� ������� ��������� ��������� �� ������ ���� Time, 
								//� �������� ���������� ���������� ������ �������� �������� 
	void sort();				//����������
	
	void save(std::ofstream &);	//����� ��� ���������� � ���� (������������)

	void load(std::ifstream &);	//����� ��� �������� �� ����� (��������������)

	Time *get(int);				//����� ��� ��������� ��������� �� ���������� (�� ������ ���� Time) ��������� ������
	
	int getCount();				//������ ��� ��������� ���������� ��������� � ������. ���������� int
};

