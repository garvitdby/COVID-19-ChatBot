#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int getInput1();
int getInput2();
int getInput3();
int addquestion(int n)
{
    if (n==1)
	{
		FILE *fq=fopen("hospital.txt","a");
		FILE *fa=fopen("hospitalans.txt","a");
		char q[10000],a[10000];
		char s[10000];
		printf("Enter the question : ");
		scanf("%s",&q);
		gets(s);
		strcat(q,s);
		printf("\nEnter answer : ");
		scanf("%s",&a);
		gets(s);
		strcat(a,s);
	    fprintf(fq,"\n%s",q);
		fprintf(fa,"\n%s",a);
		fclose(fq);
		fclose(fa);
		printf("Question added.\n");
	}
	else if (n==2)
	{
		FILE *fq=fopen("Homecare.txt","a");
		FILE *fa=fopen("Homecareans.txt","a");
		char q[10000],a[10000];
		char s[10000];
		printf("Enter the question : ");
		scanf("%s",&q);
		gets(s);
		strcat(q,s);
		printf("\nEnter answer : ");
		scanf("%s",&a);
		gets(s);
		strcat(a,s);
	    fprintf(fq,"\n%s",q);
		fprintf(fa,"\n%s",a);
		fclose(fq);
		fclose(fa);
		printf("Question added.\n");
	}
	else if (n==3)
	{ 
		FILE *fq=fopen("Foodmed.txt","a");
		FILE *fa=fopen("Foodmedans.txt","a");
		char q[10000],a[10000];
		char s[10000];
		printf("Enter the question : ");
		scanf("%s",&q);
		gets(s);
		strcat(q,s);
		printf("\nEnter answer : ");
		scanf("%s",&a);
		gets(s);
		strcat(a,s);
	    fprintf(fq,"\n%s",q);
		fprintf(fa,"\n%s",a);
		fclose(fq);
		fclose(fa);
		printf("Question added.\n");	
	}
}
int main()
{  
   int op;
   while(1)
   {
	int opp;
	char input[1000];
	printf("\n\nHey! I am chatbot.\nYou can ask me anything from the below three topics.\n");
	printf("1. Hospitals.\n");
	printf("2. Home Care.\n");
	printf("3. Food and Medicines.\n");
    printf("4. Exit\n");
	printf("\nEnter the option number (1-4) : ");
	scanf("%d",&opp);
	if(opp>4 || opp<1)
	{
		system("color 10");
		printf("Wrong Choice! You can't proceed.\n");
		system("pause");
	}
	if(opp==1)
	{
		getInput1();
	}
	if(opp==2)
	{
		getInput2();
	}
    if(opp==3)
    {
    	getInput3();
	}
	if(opp==4)
	{
		system("color 10");
		printf("Thank You, You have exit the programme.");
		break;
	}
  } return 0;
  getch();
}
int getInput3()
{
	char array[2];
	FILE *fp=fopen("Foodmed.txt","r");
	while(!feof(fp))
	{   
			fgets(array,2,fp);
			printf("%s",array);
	}
   fclose(fp);
   fp=fopen("Foodmedans.txt","r");
   int hello;
   char add;
   printf("\n\nIf you want to add question press 0\n");
   scanf("%d",&add);
   if(add==0)
   {
   	addquestion(3);
   }
   printf("Enter Question Number -> ");
   scanf("%d",&hello);
   char arrayi[10000];
   int ans=0;
   while(!feof(fp))
   {fgets(arrayi,10000,fp);
   	 ans++;
   	 if(ans==hello)
   	 {
   	 	printf("\n%s",arrayi);
   	 	
			return 0;
		}
   }
}
int getInput2()
{
	char array[2];
	FILE *fp=fopen("Homecare.txt","r");
	while(!feof(fp))
	{   
			fgets(array,2,fp);
			printf("%s",array);
	}
   fclose(fp);
   fp=fopen("Homecareans.txt","r");
   int hello;
   char add;
   printf("\n\nIf you want to add question press 0\n");
   scanf("%d",&add);
   if(add==0)
   {
   	addquestion(2);
   }
   printf("Enter Question Number -> ");
   scanf("%d",&hello);
   char arrayi[10000];
   int ans=0;
   while(!feof(fp))
   {fgets(arrayi,10000,fp);
   	 ans++;
   	 if(ans==hello)
   	 {
   	 	printf("\n%s",arrayi);
   	 	
			return 0;
		}
   }
}
int getInput1()
{
	char array[2];
	FILE *fp=fopen("Hospital.txt","r");
	while(!feof(fp))
	{   
			fgets(array,2,fp);
			printf("%s",array);
	}
   fclose(fp);
   fp=fopen("Hospitalans.txt","r");
   int hello;
   char add;
   printf("\n\nIf you want to add question press 0\n");
   scanf("%d",&add);
   if(add==0)
   {
   	addquestion(1);
   }
   printf("Enter Question Number -> ");
   scanf("%d",&hello);
   char arrayi[10000];
   int ans=0;
   while(!feof(fp))
   {fgets(arrayi,10000,fp);
   	 ans++;
   	 if(ans==hello)
   	 {
   	 	printf("\n%s",arrayi);
   	 	
			return 0;
		}
   }
}

