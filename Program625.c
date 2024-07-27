#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}   

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
} 

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
} 
int Addition(PNODE First)
{
    int iSum = 0;

    while(First != NULL)
    {
        iSum = iSum + (First -> data);
        First = First -> next;
    }
return iSum;
}

int EvenCount(PNODE First)
{
    int iSum = 0,iCount = 0;

    while(First != NULL)
    {
        if((First -> data) %2 == 0)
        {
            iCount++;
        }
       
        First = First -> next;
    }
return iCount;
}

int OddCount(PNODE First)
{
    int iSum = 0,iCount = 0;

    while(First != NULL)
    {
        if((First -> data) % 2 == 1)
        {
            iCount++;
        }
       
        First = First -> next;
    }
return iCount;
}

int Frequency(PNODE First, int No)
{
    int iCount = 0;

    while(First != NULL)
    {
       if(First -> data == No)
       {
        iCount++;
       }
        First = First -> next;
    }
return iCount;
}

bool Search(PNODE First, int No)
{
    bool bFlag = false;
    //int iCount = 0;

    while(First != NULL)
    {
       if(First -> data == No)
       {
        bFlag = true;
        break;
       }
       else
       {
        bFlag = false;
       }
        First = First -> next;
    }
return bFlag;
}

int SearchFirstOcc(PNODE First, int No)
{
    int iCount = 1;
   int iPos = -1;
   while(First != NULL)
   {
    if(First->data == No)
    {
       iPos = iCount;
        break;
    }
    iCount++;
    First = First -> next;
   }
   return iPos;
}

int SearchLastOcc(PNODE First, int No)
{
    int iCount = 1;
   int iPos = -1;
   while(First != NULL)
   {
    if(First->data == No)
    {
       iPos = iCount;
       
    }
    iCount++;
    First = First -> next;
   }
   return iPos;
}

void SumDigits(PNODE First)
{
    int dSum,digit = 0, No = 0;
   
   while(First != NULL)
   {
    First->data = No;
    while(No != 0)
    {
       digit = digit % 10;
       dSum = dSum + digit ;
       No = No /10;  
    }
    printf("%d",dSum);
    dSum = 0;
    First = First -> next;
   }
  
}
 bool CheckPerfect(int iNo)
  {
    int iSum = 0, i = 0;

   for(int i = 1; i < iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iSum = iSum + i;
        }
  }
  if(iSum == iNo)
  {
    return true;
  }
  else
  {
    return false;
  }
  }

  void DisplayPerfect(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPerfect(First->data)==true)
        {
             printf("Perfect number is: ",First->data);
        }
        First = First -> next;
    }
    printf("NULL\n");
} 

int MiddleElement(PNODE First)
{
    int iCnt = 0;
    PNODE temp = First;
    int iPos = 0, i = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    iPos = iCnt /2;

    for(i = 1; i <= iPos; i++)
    {
        First = First -> next;
    }
    return First->data;

}
int MiddleElementX(PNODE First)
{
    PNODE Teacher = First;
    PNODE Student = First;

    while((Teacher != NULL) && (Teacher -> next != NULL))
    {
        Teacher = Teacher -> next -> next;
        Student = Student -> next;
    }
return (Student -> data);
}

bool CheckLoop(PNODE First)
{
    PNODE Teacher = First;
    PNODE Student = First;
    bool bFlag = false;

    while((Teacher != NULL) && (Teacher -> next != NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;

        if(Teacher == Student)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    bool bRet = false;

     InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    InsertFirst(&Head,28);
    InsertFirst(&Head,50);
    InsertFirst(&Head,10);
    InsertFirst(&Head,42);
    
    temp1 = Head;
    temp1 = temp1->next->next;

    temp2 = Head;
    temp2 = temp2 ->next->next->next->next->next;

    temp2 -> next = temp1;
   
   bRet = CheckLoop(Head);
   if(bRet == true)
   {
    printf("Loop detected.../n");
   }
  else
      {
        printf("There is no Loop in LL...\n");
      }
    return 0;
}
