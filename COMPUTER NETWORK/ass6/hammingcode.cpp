#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>

using namespace std;


int pow2(int i)          
{
	int flag=1;

	while(i>2)
	{
		if(i%2)
		{
			flag=0;
			break;
		}

		i/=2;
	}

	return flag;
}

		
int* hamming_code_gen(int data[], int k, int &n)
{
	int r=0, i, j, ppos, x;

	while(pow(2,r)<k+r+1)
	    r++;
	n=k+r;

	int *code=new int[n]();

	for(i=2, j=0; i<n; i++)
		if(!pow2(i+1))
		{
			code[i]=data[j];
			j++;
		}

	for(i=1, ppos=1; ppos<n; ppos=1<<i, i++)
	{
		code[ppos-1]=0;

		for(j=ppos-1; j<n; j+=2*ppos)
		{
			code[ppos-1]^=code[j];

			for(x=j+1; x<j+ppos && x<n; x++)
				code[ppos-1]^=code[x];
		}
	}

	return code;
}


int check_hamming_code(int *code, int n)
{
    int flag=0, k, r=0, i, j, pos=0;
    
    while(pow(2,r)<n+1)
                     r++;
                     
    k=n-r;
    
    r=0;
    while(pow(2,r)<k+r+1)
	    r++;
	
	if(k+r!=n)
                return 2;
	
    int *data=new int[k];
    
    for(i=2, j=0; i<n; i++)
		if(!pow2(i+1))
		{
			data[j]=code[i];
			j++;
		} 
              
    int *code2=hamming_code_gen(data, k, n);
                
    for(i=0, j=1; j<n; i++, j=pow(2, i))
    {
             pos+=(code[j-1]^code2[j-1])*j;
             if(!flag && (code[j-1]^code2[j-1]))
                    flag=1;
    }
    
    if(flag)
             code[pos-1]^=1;
    
    return flag;
}

int main()
{
    int choice, i, j;
    char ch;

    while(1)
    {
      //system("cls");
	  cout<<"\n1. Generalised Hamming code."
	      <<"\n2. Correcting 1-bit error in a generalised codeword."
	      <<"\n3. Exit"
	      <<"\n\n Enter you choice : ";
	  cin>>choice;

	  switch(choice)
	      {

			case 1:
		     {
				int k, n, *code;

				cout<<"\nEnter length of data word:\t";
				cin>>k;

				int *data=new int[k];
				cout<<"\nEnter the data word:\n";
				for(i=0; i<k; i++)
					cin>>data[i];


				code=hamming_code_gen(data, k, n);

				cout<<"\nData word:\t";
				for(i=0; i<k; i++)
					cout<<data[i];

				cout<<"\nCode word:\t";
				for(i=0; i<n; i++)
					cout<<code[i];
			 }
		     break;

			case 2:
                 {
                       int *code, i, flag, n;
                       
                       cout<<"\nEnter the number of bits in the code word:\t";
                       cin>>n;
                       
                       code=new int[n];
                       cout<<"\nEnter "<<n<<" bit Code word:\n";
                       for(i=0; i<n; i++)
                                cin>>code[i];
                                
                       cout<<"\n\nCode word received:\t";
                       for(i=0; i<n; i++)
                                cout<<code[i];
                                                     
                       flag=check_hamming_code(code, n);
                       
                       if(flag==2)
                       {
                                  cout<<"\nCode word cannot be corrected.";
                                  break;
                       }
                       else if(flag)
                       {
                               cout<<"\nCorrected Hamming Code:\t";
                               for(i=0; i<n; i++)
                                         cout<<code[i];
                       }
                       else
                           cout<<"\nHamming Code received was correct.";
                           
                       cout<<"\nData word is:\t";
                       for(i=2; i<n; i++)
                                if(!pow2(i+1))
                                              cout<<code[i];                     
                 }                
			     break;

			case 3:
			      exit(1);
				 
			default:
 			    cout<<"\n\n\t\tInvalid Choice!!";
	  }
		
    }                                                                 
    return 0;
}
