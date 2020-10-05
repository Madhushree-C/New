#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <insurance_management.h>

int choice(char op1)
{
     switch(op1)
    {
        case 'B':
            return 1;
            break;
        case 'F':
            return 1;
            break;
        case 'T':
            return 1;
            break;
        default:
            return 0;
    }

}



char username(char op2[])
{
int i;
for(i=0;i<strlen(op2);i++)
{
if((op2[i]>='A'&&op2[i]<='Z')||(op2[i]>='a'&&op2[i]<='z')|op2[i]==' ')
{
continue;
}
else
    return 0;
}
return 1;

}


char password(char op2[])
{
int acount, icount, spcount, i;
if(strlen(op2)<=8)
    return 0;

for(i=0;i<strlen(op2);i++)
{
    if((op2[i]>='A' &&op2[i]<='Z')||(op2[i]>='a'&&op2[i]<='z'))
        acount++;
    else if(op2[i]>='0'&& op2[i]<='9')
        icount++;
    else if((op2[i]>=33 &&op2[i]<=47)||(op2[i]>=60 &&op2[i]<=64))
         spcount++;
}
if(acount<1||icount<1 ||spcount<1)
    return 0;
else
    return 1;
}

int gender(char op1)
{
     switch(op1)
    {
        case 'M':
        case 'm':
            return 1;
            break;
        case 'F':
        case 'f':
            return 1;
            break;
        case 'O':
        case 'o':
            return 1;
            break;
        default:
            return 0;
    }
    return 0;
}


int age(int op3)
{
if(op3>=18&&op3<=100)
    return 1;
else
    return 0;
}

int phonenumber(char op2[])
{
int i;
if(strlen(op2)==10)
{
for(i=1;i<=strlen(op2);i++)
{
if(op2[i]>='0'&&op2[i]<='9')
    return 1;
else
    return 0;
}
}
else
    return 0;
}

int vehicletype(char op1)
{
     switch(op1)
    {
        case 2:
            return 1;
            break;
        case 4:
            return 1;
            break;
        default:
            return 0;
    }

}

char licensenumber(char op2[])
{
if(strlen(op2)==15)
{
if(op2[0]>='A'&&op2[0]<='Z'||op2[0]>='a'&&op2[0]<='z')
{
if(op2[1]>='A'&&op2[1]<='Z'||op2[1]>='a'&&op2[1]<='z')
     return 1;
else
{
    return 0;
}
}
else
{
return 0;
}
}
else
{
return 0;
}
}

char enginenumber(char op2[])
{
if(strlen(op2)!=10)
    return 0;
else
    return 1;
}

char pay_pa(int op3)
{

if(op3==0)
    return 0;

else if(op3==1)
    return 1;
}


int login(char op2[],char op4[])
{

    FILE *fptr;//pointing to the file
    FILE *fptr1;
    FILE *fptr2;
    FILE *fptr3;
    fptr=fopen("userdetails.txt","a");//opening the file which is in both read and write format
    fptr1=fopen("userpass.txt","a");
    fptr2=fopen("amount.txt","a");
    fptr3=fopen("details.txt","a");
	char c;
	int i,f=0,cnt=0,ch;

    FILE *fp1 = fopen("userdetails.txt","r");
    //FILE *fp2 = fopen("userpass.txt","r");
	char temp[100],temp1[100],sent[100],temp2[100];
	label1:

	while (fgets(temp,20,fp1)!=NULL)
        {
          f=0;
        	cnt++;

        	temp[strlen(temp)-1]='\0';

        	if(strcmp(op2,temp)!=0)
        	{
        		f=1;
			}
			if(f==0)
			{
		fgets(temp1,20,fp1);
		temp1[strlen(temp1)-1]='\0';

	if((strcmp(op4,temp1))!=0)
        	{
        		f=1;
			}

			if(f==0)
			{
				fgets(temp2,20,fp1);
	        	temp2[strlen(temp2)-1]='\0';
				strcpy(sent,temp2);
				break;
			}
		}
		}



        if(f==0 && cnt>0)
        {
        	return 1;

		}
		else
		{
			return 0;
		}
}

int claim(char op2[])
{
    FILE *fptr;//pointing to the file
    FILE *fptr1;
    FILE *fptr2;
    FILE *fptr3;
    fptr=fopen("userdetails.txt","a");//opening the file which is in both read and write format
    fptr1=fopen("userpass.txt","a");
    fptr2=fopen("amount.txt","a");
    fptr3=fopen("details.txt","a");
	char temp[30];
	int yr;
	int c=1,f=0,y,choice;
	char description[250];
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	yr = tm.tm_year + 1900;
	int amt;
	FILE *fpt;
	fpt = fopen("cl.txt","a+");
		rewind(fpt);
		while(fgets(temp,100,fpt)!=NULL)
		{
			if(f==0)
			{
			temp[strlen(temp)-1]='\0';
			if(strcmp(temp,op2)==0)
			{
				fscanf(fpt,"%d",&y);
				if(y==yr)
				{
					return 0;
				}
			}
			}
		}


	if(f==0)
	{
	    return 1;
	}

	rewind(fpt);
}
