#include <iostream>

int colgetmul(int mt, int colnum)
{
	int result = 1;
	
	for(int x : mt){ mt *= x[colnum-1]; }
	
	return result;
}

int rowgetmul(int mt, int rownum)
{
	int result = 1;
	
	for(int x : mt[rownum]){ result *= x; }
	
	return result;
}

int[][] matmul(int mt1, int mt2)
{
	if(size(mt1[0]) != size(mt2)){ cout << "Nope" << endl; break; }
	
	int[size(mt1)][size(mt2[0])] result;
	
	for(int i = 0; i < size(mt1); i++)
	{
		for(int j = 0; j < size(mt2[0]); j++)
		{
			result[i][j] = rowgetmul(mt1, i) + colgetmul(mt2, j);
		}
	}
	
	retrun result;
	
}

void printmat(int mt)
{
	for(int x : mt)
	{
		for(int k : x){ std::cout << k; }
		std::cout << "\n";
	}
}

int main()
{
	matrix1[][] = { {1, 2, 3}, 
				    {4, 5, 6}
				  };
	
	matrix2[][] = { {3, 5, 7}, 
				    {2, 6, 3}, 
				    {8, 9, 2} 
				  };
	
	int[][] mulmatrix = matmul(matrix1, matrix2);
	
	printmat(mulmatrix);
	
}