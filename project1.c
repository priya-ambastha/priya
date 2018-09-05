#include<stdio.h>
#include<string.h>
struct student{
	char Name[30];
		int Age;
		char Branch[10];
		int Sem;
		int prev_score;

}studs;
int main()
{
	int no_stud;
	printf("enter the number of students\n");
	scanf("%d",&no_stud);

	for(int i=0;i<no_stud;i++)
	{
		printf("Enter the details of student %d\n",i+1);
		printf("Name:");
		scanf("%s",&studs.Name);
		printf("Age: ");
		scanf("%d",&studs.Age);
		printf("Branch: ");
		scanf("%s",&studs.Branch);
		printf("Semester: ");
		scanf("%d",&studs.Sem);
		printf("Previous score: ");
		scanf("%d",&studs.prev_score);

	}
	printf("the list is\n");
	for(int i=0;i<no_stud;)
	{
		if(studs.Name[i]==studs.Name[i+1]&&studs.prev_score[i]==studs.prev_score[i+1])
			i++;
		else{
		printf("Details of student %d\n",i+1);

		printf("Name: %s\n",studs.Name);

		printf("Age: %d\n",studs.Age);

		printf("Branch: %s\n",studs.Branch);

		printf("Semester: %d\n",studs.Sem);

		printf("Previous Score: %d\n",studs.prev_score);
		i++;
		}

	}
	for(int i=0;i<no_stud;i++)
	{
		for(int j=i+1;j<no_stud;j++)
		{
			if(studs.prev_score[i]<studs.prev_score[j])
			{
				int temp;
				temp = studs.prev_score[i];
				studs.prev_score[i]=studs.prev_score[j];
				studs.prev_score[j]=temp;
			}
		}
	}
	printf("After filtering the data and sorting it in descending order according to previous semester marks\n");

	for(int i=0;i<no_stud;i++)
	{
		printf("%s ",studs.Name);
		printf("%d ",studs.Age);
		printf("%s ",studs.Branch);
		printf("%d ",studs.Sem);
		printf("%d\n",studs.prev_score);
	}



	return 0;

}
