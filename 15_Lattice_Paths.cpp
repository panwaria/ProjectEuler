#include<iostream>
#include<map>

using namespace std;

long long **matrix;

/*
class Matrix
{
public:
	Matrix(int r, int c)
	{
		rowSize = r;
		columnSize = c;
	}

	int rowSize, columnSize;
};

bool operator < (const Matrix &l, const Matrix &r) { return l.rowSize < r.rowSize; }

map<Matrix, int> gNumPaths;

void iterateMap()
{
    cout<<"---------------------\n";
	for (map<Matrix, int>::iterator it = gNumPaths.begin(); it != gNumPaths.end(); it++)
	{
		cout<<"Key<"<<(*it).first.rowSize<<","<<(*it).first.columnSize<<">="<<(*it).second<<endl;
	}
	cout<<"---------------------\n";
}

Matrix *m;*/

long long numPaths(int rowSize, int columnSize)
{
//	iterateMap();

//	Matrix m(rowSize, columnSize);
/*
	m = new Matrix(rowSize, columnSize);
	
	map<Matrix, int>::iterator it = gNumPaths.find(*m);
	if(it != gNumPaths.end())
	{
		cout<<"\nrowSize="<<rowSize<<" columnSize="<<columnSize<<endl;
		cout<<"value="<<(*it).second<<endl;
		return (*it).second;
	}*/
	
	if(matrix[rowSize][columnSize] != 0)
	    return matrix[rowSize][columnSize];

	if(rowSize == 1 && columnSize == 1)
	    return 2;
	else if( columnSize == 0 || rowSize == 0 )
		return 1;

	long long totalValue = numPaths(rowSize-1, columnSize) +
		   numPaths(rowSize, columnSize-1);// +
//		   numPaths(rowSize-1, columnSize-1);

//	gNumPaths[*m] = totalValue;
	//gNumPaths.insert(std::make_pair(m, totalValue));
	
	matrix[rowSize][columnSize] = totalValue;
	return totalValue;
}

//Matrix m1(1,1), m2(1,0), m3(0,1);

int main()
{
	int num;
	
	cout << "Enter the degree of lattice: ";
	cin >> num;
	
	matrix = new long long*[num+1];
	for (int i = 0; i <= num; i++)
	{
		matrix[i] = new long long[num+1];
	}
	
	for (int i = 0 ; i <= num; i++)
    	for (int j = 0 ; j <= num; j++)
    	{
			matrix[i][j] = 0;
		}

	matrix[1][1] = 2;
	matrix[1][0] = 1;
	matrix[0][1] = 1;

/*
gNumPaths.insert(std::make_pair(m1, 2));
gNumPaths.insert(std::make_pair(m2, 1));
gNumPaths.insert(std::make_pair(m3, 1));

//	gNumPaths[m1] = 2;
//	gNumPaths[m2] = 1;
//	gNumPaths[m3] = 1;
//	gNumPaths[m1] = 2;
	
	iterateMap();
*/

	cout<<"\nThe output is: \n";
	cout << numPaths(num, num);
}
