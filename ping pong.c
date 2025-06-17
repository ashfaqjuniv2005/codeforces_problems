#include <stdio.h>
#include <math.h>
int main()
{
	int t,i;
	scanf("%d", &t);
	while (t--)
	{
		int a[1][2];
		for(i=0;i<2;i++){
		scanf("%d",&a[0][i]);
		}
		
		

			printf("%d %d\n",a[0][0]-1,a[0][1]);

		
	}
}
