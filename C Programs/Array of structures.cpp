#include<stdio.h>
int main()
{
	int i;
	struct student
	{
		int roll_no;
		float marks;
		char name[20];
	};
	struct student arr[3];
	for(i=0;i<3;i++)
	{
		printf("Enter the rollno,marks and name of the student\n");
		scanf("%d%f%s",&arr[i].roll_no,&arr[i].marks,arr[i].name);
	}
	for(i=0;i<3;i++)
	printf("%d %f %s",arr[i].roll_no,arr[i].marks,arr[i].name);
	return 0;
}






