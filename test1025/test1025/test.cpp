//������������صı��ʣ��ܹ������Ƹ�����������أ����Ը������� + �� == �� * �� / Ϊ���;���� + �� * �� = ����Ϊ����
//ʵ����������أ����о���Ҫ��ʵ�ֶ�̬��С����������������������
#include <iostream>
using namespace std;
//class complex
//{
//public:
//	complex(double x, double y) :real(x), imaginary(y)
//	{
//
//	}
//	complex operator+(complex c)
//	{
//		complex temp(0.0, 0.0);
//		temp.real = this->real + c.real;
//		temp.imaginary = this->imaginary + c.imaginary;
//		return temp;
//	}
//	complex operator-(complex c)
//	{
//		complex temp(0.0, 0.0);
//		temp.real = this->real - c.real;
//		temp.imaginary = this->imaginary - c.imaginary;
//		return temp;
//	}
//	complex operator*(complex c)
//	{
//		complex temp(0.0, 0.0);
//		temp.real = this->real * c.real - this->imaginary * c.imaginary;
//		temp.imaginary = this->imaginary * c.real + this->real * c.imaginary;
//		return temp;
//	}
//	complex operator/(complex c)
//	{
//		complex temp(0.0,0.0);
//		double t;
//		t = 1 / (c.real * c.real + c.imaginary * c.imaginary);
//		temp.real = (this->real * c.real + this->imaginary * c.imaginary) * t;
//		temp.imaginary = (this->imaginary* c.real - this->real * c.imaginary) * t;
//		return temp;
//	}
//	~complex()
//	{
//
//	}
//	double real;
//	double imaginary;
//};
//int main()
//{
//	complex c1(1, 1);
//	complex c2(2,2);
//	complex c3 = c1.operator*(c2);
//	cout <<"real:" << c3.real <<"imaginar:" << c3.imaginary << endl;
//	complex c4 = c1.operator+(c2);
//	cout << "real:" << c4.real << "imaginar:" << c4.imaginary << endl;
//	complex c5 = c1.operator-(c2);
//	cout << "real:" << c5.real << "imaginar:" << c5.imaginary << endl;
//	complex c6 = c1.operator/(c2);
//	cout << "real:" << c6.real << "imaginar:" << c6.imaginary << endl;
//}

class matrix
{
public:
	matrix();
	matrix operator+(matrix m)
	{
		//�ж��Ƿ�ƥ��
		if (this->col == m.col && this->row == m.row)
		{
			for (int i = 0; i < this->row; i++)
			{
				for (int j = 0; j < this->col; j++)
				{
					m.arr[i][j] = this->arr[i][j] + m.arr[i][j];
				}
			}
			return m;
		}
		else
		{
			cout << "error!Cannot add!" << endl;
			exit(0);
		}

	}
	matrix operator=(matrix m)
	{
		//�ж��Ƿ�ƥ��
		if (this->col == m.col && this->row == m.row)
		{
			for (int i = 0; i < this->row; i++)
			{
				for (int j = 0; j < this->col; j++)
				{
					m.arr[i][j]=this->arr[i][j];
				}
			}
			return m;
		}
		else
		{
			cout << "error!" << endl;
			exit(0);
		}

	}
	matrix operator*(matrix m)
	{
		matrix temp;
		//�ж��Ƿ�ƥ��
		if (this->col==m.row&&this->row==m.col)
		{
			for (int i = 0; i < this->row; i++)
			{
				for (int j = 0; j < this->col; j++)
				{
					temp.arr[i][j]+=this->arr[i][j] * m.arr[j][i];
				}
			}
			return temp;
		}
		else
		{
			cout << "error!" << endl;
			exit(0);
		}

	}
	int row;//��
	int col;//��
	int **arr;
};
matrix::matrix()
{
	int x, y;
	cout << "please input rows :" << endl;
	cin >> x;
	cout << "please input cols:" << endl;
	cin>> y;
	row = x;
	col = y;
	arr = new int* [row];//��ʹһ������ָ��ָ������ָ��ĵ�ַ

	for (int i = 0; i < row; ++i)
	{
		arr[i] = new int[col]();//Ϊһ��ָ������ַ
	}
	cout << "please input element :" << endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)//Ϊ�������Ԫ��
		{
			cin >> arr[i][j];
		}
	}
}

void test1() 
{
	matrix m1;
	matrix m2;
    matrix m3 = m2.operator+(m1);
	for (int i = 0; i < m3.col; i++)
	{
		for (int j = 0; j < m3.col; j++)
		{
			cout << m3.arr[i][j];
		}
		cout<< endl;
	}
}
void test2()
{
	matrix m1;
	matrix m2;
	m2 = m2.operator*(m1);
	for (int i = 0; i < m2.col; i++)
	{
		for (int j = 0; j < m2.col; j++)
		{
			cout << m2.arr[i][j];
		}
		cout << endl;
	}
}
void test3()
{
	matrix m1;
	matrix m2;
	m1 = m2.operator=(m1);
	for (int i = 0; i < m1.col; i++)
	{
		for (int j = 0; j < m1.col; j++)
		{
			cout << m1.arr[i][j];
		}
		cout << endl;
	}
}
int main()
{
	int choose = 0;
	do
	{
		cout << "1. add  2.mul 3.equel  0.eixt" << endl;;
		cout << "please input:" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
			//������Ӳ���
			test1();
			break;
		case 2:
			//������˲���
			test2();
			break;
		case 3:
			//����ֵ����
			test3();
			break;
		case 0:
			exit(0);
			break;
		default:
			cout << "error!please input again!" << endl;
			break;
		}

	} while (choose);
}