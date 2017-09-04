#include<stdio.h>
int main()
	{
	//Abhilash
		int a[10],b[10],i,j,k;
		for(i=0;i<9;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<9;i++)
		{
		 if(a[i]==1)
			{
				for(j=0;j<9;j++)
				{
					if(a[j]==2)
					{
						b[i]=a[i];
						b[i+1]=a[j];
					}
					else if(a[j]==1)
					{
						b[i]=a[i];
						b[i+1]=a[j];
					}
				}
			}
		 else if(a[i]==0)
			{
				b[i]=a[i];
				for(j=0;j<9;j++)
				{
					if(a[j]==9)
					{
						b[i+1]=a[j];
					}
					else if(a[j]==8)
					{
						b[i+1]=a[j];
					}
					else if(a[j]==7)
					{
						b[i+1]=a[j];
					}
					else if(a[j]==6)
					{
						b[i+1]=a[j];
					}
					else if(a[j]==5)
					{
						b[i+1]=a[j];
					}
					else if(a[j]==4)
					{
						b[i+1]=a[j];
					}
					else if(a[j]==3)
					{
						b[i+1]=a[j];
					}
					else if(a[j]==2)
					{
						b[i+1]=a[j];
					}
					else if(a[j]==1)
					{
						b[i+1]=a[j];
					}
				}
			}
			
		}
		printf("%d:%d:%d",b[0]+b[1],(b[2]+b[3]),(b[4]+b[5]));
		return 0;
	}
