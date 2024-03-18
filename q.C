#include <stdio.h>
#include <conio.h>
#include <math.h>

int q[20], *p[20];
int size, ch, front = 1, rear=0,c =1;
int main() {
    int i;
    clrscr();
    for(i = 1; i <= 20; i++){
        p[i] = &q[i];
    }
    printf("\n\t\t QUEUE OPERATIONS");
    printf("\n]t\t****************");
    printf("\n\t ENTER THE SIZE OF THE QUEUE:");
    scanf("%d",&size); 

    do{
        printf("\n MENU");
        printf("\n ****");
        printf("\n 1.INSERT");
        printf("\n 2.DELETE");
        printf("\n 3.MODIFY");
        printf("\n 4.LIST");
        printf("\n 5.EXIT");
        printf("\n\t ENTER YOUR CHOICE[1,2,3,4,5]...");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1:
            printf("\n\t\t INSERT OPERATION");
            printf("\n\t ----------------");
            insert();
            break;
        
        case 2:
            printf("\n\t\t DELETE OPERATION");
            printf("\n\t ----------------");
            delete();
            break;
        
        case 3:
            printf("\n\t\t MODIFY OPERATION");
            printf("\n\t ----------------");
            modify();
            break;
        case 4:
            printf("\n\t\t LIST OPERATION");
            printf("\n\t ----------------");
            list();
            break;  
        case 5:
            printf("\n\t\t PROGRAM IS TERMINATED");
            printf("\n\t ----------------------");
            c = 0;
            break;
        default:
            break;
        }
    } while(c==1);
    return 0;
}
int insert(){
    int item;
    if(rear == size){
        printf("\n\t QUEUE IS FULL");
    } else {
        printf("\n\t ENTER THE ITEM TO BE INSERTED:\t");
        scanf("%d", &item);
        rear++;
        *p[rear] = item;
    }
    return 0;
}

int delete(){
    int item, i;
    if (rear == 0)
    {
        printf("\n\t QUEUE IS EMPTY");
    } else {
        item = q[front];
        printf("\n\t THE DELETED ITEM FROM THE QUEUE: %d",item);
        for (i = 0; i <= rear; i++)
        {
            *p[i] = *p[i+1];
        }
        rear--;
    }
    return 0;
}

int modify(){
    int i,item,pos;
    if(rear == 0){
        printf("\n\t QUEUE IS EMPTY");
    } else {
        printf("\n ENTER THE POSITION TO MODIFY:");
        scanf("%d",&pos);
            if (pos > size)
            {
                printf("THE GIVEN POSITION IS OUT OF RANGE");
            } else {
                printf("\n THE OLD ITEM IN THE POSITION: %d", q[pos]);
                printf("\n ENTER THE NEW ITEM:");
                scanf("%d",&item);
                q[pos] = item;
            }
    }
    return 0;
}

int list(){
    int i;
    if (rear == 0)
    {
        printf("\n QUEUE IS EMPTY");
    } else {
        printf("\n\t THE QUEUE ITEMS ARE:");
        for ( i = 1; i <= rear; i++)
        {
	    printf("\n\t %d", *p[i]);
        }
    }
    return 0;
}