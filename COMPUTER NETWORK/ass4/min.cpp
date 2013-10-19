#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>

using namespace std;
char codes[5][9];
void hamming_distance(char codes[5][9])
{
    int h_distances[5][5]={0}, min=10, i, j, k, temp, ip, jp;

    for(i=0; i<5; i++)
    {
	     for(k=i+1; k<5; k++)
	     {
			temp=0;
			for(j=0; j<8; j++)
			{
				 if(codes[i][j]^codes[k][j])
					  temp++;
			}

			h_distances[i][k]=temp;
	     }
    }

   cout<<"\nHamming distance matrix:\n";
    for(i=0; i<5; i++)
    {
	     cout<<endl;
	     for(j=0; j<5; j++)
		       cout<<"\t"<<h_distances[i][j];
    }

    for(i=0; i<5; i++)
	for(j=i+1; j<5; j++)
		if(min>h_distances[i][j])
		{
			min=h_distances[i][j];
			ip=i;
			jp=j;
		}

    cout<<"\n\nThe minimum hamming distance is:\t"<<min;
    cout<<"\nAnd between the codes:\t";
    for(i=0; i<8; i++)
	cout<<codes[ip][i];
    cout<<"\tand\t";
    for(i=0; i<8; i++)
	cout<<codes[jp][i];
}
int main()
{
	 int choice, i, j;

    while(1)
    {
      system("cls");
	  cout<<"\n\t\tMENU\n\t\t-----\n"
	      <<"\n1. Hamming distance.";
	cin>>choice;
    system("cls");
    
    switch(choice)
	      {
			case 1:
			 {
				

				cout<<"\nEnter the 8-bit datawords:\n";
				for(i=0; i<5; i++)
			      {
					cout<<"\nCode "<<i+1<<":\n";
					cin>>codes[i];
					cout<<codes[i];
				  } 

				hamming_distance(codes);
		     }
		     break;
		}
	
	getch();

   }

	return 0;
}


