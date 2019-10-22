#include <stdio.h>
#include <stdlib.h>
struct sit 
{
	char name[20];
	char div;
	char prn[15];
};
int main()
{
	struct sit a[5];
	int i;
	printf("Enter student details:\n");
	for(i=0;i<=2;i++)
	{
        printf("\nName:");
	    scanf("%s", &a[i].name);
    	printf("\nDivision:");
    	scanf("%s", &a[i].div);
    	printf("\nPRN:");
    	scanf("%s", &a[i].prn);
    }
    printf("\ndetails of the student are:");
	for(i=0;i<=2;i++)
	{
    	printf("\nName:%s", a[i].name);
    	printf("\nDivision:%c", a[i].div);
    	printf("\nPRN:%s", a[i].prn);
    	printf("\n");
   }
}
