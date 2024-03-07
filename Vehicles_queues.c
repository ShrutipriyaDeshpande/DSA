#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 50

struct vehicle
{
    char carNumber[9];
    char type;
    char Name[20];
    char gender[20];
    char locality[20];
};

struct queue
{
    struct vehicle elements[size];
    int front, rear;
};

void initializeQueue(struct queue *q)
{
    q->front = -1;
    q->rear = -1;
}

int isEmpty(struct queue *q)
{
    return q->rear == -1;
}

int isFull(struct queue *q)
{
    return (q->rear + 1) % size == q->front;
}

void enqueue(struct queue *q, char t)
{
    if (!isFull(q))
    {
        q->rear = (q->rear + 1) % size;
        q->elements[q->rear].type = t;
        if (q->front == -1)
            q->front = 0;
    }
    else
    {
        printf("Queue Full Error.\n");
    }
}

char dequeue(struct queue *q)
{
    char p = q->elements[q->front].type;
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
        q->front = (q->front + 1) % size;

    return p;
}

int main()
{
    int n,i
    ;
    printf("Enter Number of Vehicles: ");
    scanf("%d", &n);
    char temp;

    struct queue q;
    initializeQueue(&q);

    int countL = 0;
    int countH = 0;
    int countT = 0;

    for (i = 0; i < n; i++)
    {
        printf("Enter Name:\n ");
        scanf(" %s", q.elements[i].Name);
        printf("Enter Type of Vehicle(L,H,T):\n ");
        scanf(" %c", &q.elements[i].type);
        printf("Enter CarNumber:\n ");
        scanf(" %s", q.elements[i].carNumber);
        printf("Enter Gender:\n ");
        scanf(" %s", q.elements[i].gender);
        printf("Enter Locality:\n ");
        scanf(" %s", q.elements[i].locality);

        if (q.elements[i].type != 'T' && q.elements[i].type != 'H' && q.elements[i].type != 'L')
            printf("Invalid Type\n");
        else
            enqueue(&q, q.elements[i].type);

    }

    for (i = 0; i < n; i++)
    {
        temp = dequeue(&q);
        if (temp == 'L')
            countL++;
        else if (temp == 'H')
            countH++;
        else if (temp == 'T')
            countT++;
    }

    printf("Toll Collected By LMV is %d.\n", 50 * countL);
    printf("Toll Collected By HMV is %d.\n", 100 * countH);
    printf("Total two-wheelers passed are %d.\n", countT);
    return 0;
}
