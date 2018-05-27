#include<iostream>
#include<iomanip>
using namespace std;
void PrintMat(int mat[][20], int n,int weight[20][20])
{
	int i, j;
 
	cout<<"\n\n"<<setw(4)<<" ";
	for(i = 0; i < n; i++)
		cout<<setw(3)<<"("<<i+1<<")   ";
	cout<<"\n\n";
 
	// Print 1 if the corresponding vertexes are connected otherwise 0.
	for(i = 0; i < n; i++)
	{
		cout<<setw(3)<<"("<<i+1<<")";
		for(j = 0; j < n; j++)
		{
			cout<<setw(4)<<mat[i][j]<<" " <<weight[i][j]<<"  ";
		}
		cout<<"\n\n";
	}
}
void PrintMat(int mat[][20], int n)
{
	int i, j;
 
	cout<<"\n\n"<<setw(4)<<"";
	for(i = 0; i < n; i++)
		cout<<setw(3)<<"("<<i+1<<")";
	cout<<"\n\n";
 
	// Print 1 if the corresponding vertexes are connected otherwise 0.
	for(i = 0; i < n; i++)
	{
		cout<<setw(3)<<"("<<i+1<<")";
		for(j = 0; j < n; j++)
		{
			cout<<setw(4)<<mat[i][j];
		}
		cout<<"\n\n";
	}
}
 
int main()
{
	int n;
	int i, j, v;
	int  mat[20][20];
	int weight[20][20];
	cout<<"choice your funcion \n 1.DIRECTED \n 2.UNDIRECTED \n 3.WEIGHTED ";
	cin>>n;
	switch(n)
	{
		case 1:
				
 
	cout<<"Enter the number of vertexes: ";
	cin>>v;
 
	int  mat[20][20];

	cout<<"\n";
	// Take input of the adjacency of each pair of vertexes.
	for(i = 0; i < v; i++)
	{
		for(j = 0; j < v; j++)
		{
		
			{
				cout<<"Enter 1 if the vertex "<<i+1<<" is adjacent to "<<j+1<<", otherwise 0: ";
				cin>>mat[i][j];
 
			//	mat[j][i] = mat[i][j];
			
			}
		
		}
	}
 
	PrintMat(mat, v);
	break;
	    case 2:
	    	
 
	cout<<"Enter the number of vertexes: ";
	cin>>v;
 
	

	cout<<"\n";
	// Take input of the adjacency of each pair of vertexes.
	for(i = 0; i < v; i++)
	{
		for(j = i; j < v; j++)
		{
			if(i != j)
			{
				cout<<"Enter 1 if the vertex "<<i+1<<" is adjacent to "<<j+1<<", otherwise 0: ";
				cin>>mat[i][j];
 
				mat[j][i] = mat[i][j];
			
			}
			else
				mat[i][j] = 0;
		}
	}
 
	PrintMat(mat, v);
	break;
	    	
	    case 3:
	    		int i, j, v;
 
	cout<<"Enter the number of vertexes: ";
	cin>>v;
 

	
 
	cout<<"\n";
	// Take input of the adjacency of each pair of vertexes.
	for(i = 0; i < v; i++)
	{
		for(j = 0; j < v; j++)
		{
		
			{
				cout<<"Enter 1 if the vertex "<<i+1<<" is adjacent to "<<j+1<<", otherwise 0: ";
				cin>>mat[i][j];
 
				mat[j][i] = mat[i][j];
				if(mat[i][j]==1)
				{
				
				    cout<<endl<<"ENTER WEIGHT OF GRAPH";
				    cin>>weight[i][j];
				   
			    }
			    else
			       weight[i][j]=0;
			}
		
		}
	}
 
	PrintMat(mat, v, weight);
	break;
	default:
		 cout<<"INVALID :";
		 
	}
	return 0;
}

