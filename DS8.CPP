#include<iostreame.h>
#include<conio.h>
 void main()
 {
    int a[100],n,i,j,temp,loc,min;
    clrscr();
    cout<<"How many elements enters "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array :"<<endl;
	 for(i=0;i<=n-1;i++)
	    {
	    cin>>a[i];
	    }
     min=a[0];
     for(i=0;i<=n-1;i++)
	 {
	 min=a[i];
	 loc=i;
	 for(j=i+1;j<=n-1;j++)
	   {
	   if(a[j]<min)
	      {
	      min=a[j];
	      loc=j;

	      }
	   }
	   if(loc!=1)
	      {
	      temp=a[i];
	      a[i]=a[loc];
	      a[loc]=temp;
	      }
	 }
  cout<<"The number after selection sorting are :"<<endl;
  for(i=0;i<=n-1;i++)
  {
  cout<<"\n"<<a[i];
  }
  getch();
  }