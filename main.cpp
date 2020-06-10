#include<iostream>
#include<fstream>

using namespace std;

#define FILE "input3.txt"
#define SIZE 12
void readfile(int maze[][SIZE]);

int main(void)
{
//======= don't change =================================

	int maze[SIZE][SIZE]={0};
	readfile(maze);

//======= don't change =================================
  for(int i=0; i<12; i++)
  {
    for(int j=0; j<12; j++)
        cout<<maze[i][j];
    cout<<endl;
        
  }


for (int k =0; k<100; k++)
  for(int i=1; i<11; i++)
    for(int j=1; j<11; j++)
      {
        if(i==10 && j==10)
            break;
        if(maze[i][j]==1 && maze[i+1][j]==0 && maze[i][j+1]==0)
            maze[i][j]=0;
      }
      

  int i =1;
  int j =1;
  for(int k=1; k<20; k++)
      {
        cout<<'('<<i<<','<<j<<')'<<endl;
        if(maze[i+1][j]==1)
            i=i+1;
        else if (maze[i][j+1]==1)
            j=j+1;
      }


	return 0;	
}

void readfile(int maze[][SIZE])
{
	fstream inFile;
	inFile.open(FILE);
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			inFile>>maze[i][j];
		}
	}
}
