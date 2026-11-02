#include "student.h"

void stud_add(ST **ptr)
{
    ST *new = (ST*)malloc(sizeof(ST));
    new->next = NULL;
    printf("Enter the roll number : ");
    scanf("%d", &new->roll);
    
    printf("Enter the name : ");
    scanf("%s",new->name);

    printf("Enter the percentage : ");
    scanf("%f",  &new->per );
    if((*ptr)==NULL)
    {
	    (*ptr) = new;
    }
    else
    {
	    ST* temp = (*ptr);
	    while(temp->next != NULL)
	    {
		    temp = temp-> next;
	    }
	         temp->next = new;
	    	     
    }
    printf("Node is Successfully Linked..\n");
}
