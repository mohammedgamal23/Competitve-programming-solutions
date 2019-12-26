#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int matrix[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]==1)
            {
                cout<<(abs(i-2)+abs(j-2));
                break;
            }
        }
    }

    return 0;
}
/*
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0

*/

/*
            if(matrix[i][j]==1 && j>2)
            {
                matrix[i][j-1]=matrix[i][j];
                counter++;
                if(matrix[i][2]==1)
                {
                    break;
                }
                else
                {
                    matrix[i][j-1]=matrix[i][j];
                    counter++;
                }
            }
            else if (matrix[i][j]==1 && j>2)
            {
                matrix[i][j+1]=matrix[i][j];
                counter++;
                if(matrix[i][2]==1)
                {
                    break;
                }
                else
                {
                    matrix[i][j+1]=matrix[i][j];
                    counter++;
                }
            }
            */
