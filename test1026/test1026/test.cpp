#include<iostream>
#include<iomanip>
using namespace std;
//const int ROWMAX = 10;
//const int LINEMAX = 10;
//class Matrix
//{
//public:
//	Matrix(int x, int y)
//	{
//		row = x;
//		line = y;
//	}
//	int row;
//	int line;
//	int array[ROWMAX][LINEMAX];
//	void CreatMatrix(Matrix matrix);
//	Matrix operator+(Matrix matrix)
//	{
//		Matrix temp(0, 0);
//		CreatMatrix(temp);
//		return temp;
//	}
//	Matrix operator*(Matrix matrix)
//	{
//		Matrix temp(0, 0);
//		CreatMatrix(temp);
//		return temp;
//	}
//	Matrix operator=(Matrix matrix)
//	{
//		Matrix temp(0, 0);
//		CreatMatrix(temp);
//		return temp;
//	}
//};
//void Matrix::CreatMatrix(Matrix matrix)
//{
//	int i, j;
//	for (i = 0; i < matrix.row; i++)
//	{
//		for (j = 0; j < matrix.line; j++)
//		{
//			cin >> matrix. array[i][j];
//		}
//		cout << endl;
//	}
//
//}
//ostream& operator<<(ostream& cout, Matrix& m)
//{
//	for (int i = 0; i < m.row; i++)
//	{
//		for (int j = 0; j < m.line; j++)
//		{
//			cout << m.array[i][j] ;
//		}
//	}
//	return cout;
//}
//void test02()
//{
//	Matrix matrix_1(4, 4);
//	matrix_1.CreatMatrix(matrix_1);
//	Matrix matrix_2(4, 4);
//	matrix_2.CreatMatrix(matrix_2);
//	Matrix matrix_3(4, 4);
//	matrix_3.CreatMatrix(matrix_3);
//	matrix_3 = matrix_1.operator+(matrix_2);
//	operator <<(cout, matrix_3);
//	//cout << "matrix_1 + matrix_2 = "<<  matrix_1.operator+( matrix_2) << endl;
//	/*cout << "matrix_1 * matrix_2 = " << matrix_1 .operator*( matrix_2) << endl;*/
//	matrix_1 = matrix_2;
//	cout << "matrix_1 = matrix_2 = " << matrix_1  << endl;
//}
//int main()
//{
//	int sel;
//	cout << "�������ѡ���ǣ�";
//	cin >> sel;
//	switch (sel)
//	{
//	case 2:
//		test02();
//		break;
//	default:break;
//	}
//	return 0;
//}


////ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<typename T>
//void MySwap( )
//{
//	cout << "MySwap�ĵ���";
//}
//int main()
//{
//	MySwap( );//err �Զ������Ƶ��Ƶ�������������
//	MySwap<int>();//��ʾָ������ǿ���Ƶ���������
//	return 0;
//}


//��������ģ��
template <typename T>
void MySort(T arr[], int sz)
{
	for(int )
}
//�Ƚ�ʱ��������
//��ӡ����ģ��
void test1()
{
	char arr[] = "bacdfeg";
	int sz = sizeof(arr) / sizeof(char);
	MySort(arr, sz);

}
void test2()
{
	int arr[] = { 1,2,4,5,7,9,8 };

}
int main()
{
	test1();
	test2();
}