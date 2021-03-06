/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-13
 *
 * MIT LICENCE
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct SqList sqlist;
void lprintf(sqlist list);
sqlist initSqList(int size);
int findElement(sqlist list, int element);
sqlist addElement(sqlist list, int element, int index);
sqlist removeElement(sqlist list, int element);
sqlist amendElement(sqlist list, int element, int newElement);

typedef struct SqList
{
    int *head;  // array of list elements
    int length; // list length
    int size;   // list size
} sqlist;

// initialize a sequence list
sqlist initSqList(int size)
{
    sqlist list;
    list.head = (int *)malloc(size * sizeof(int));

    // if failed
    if (!list.head)
    {
        printf("Initialization failed!\n");
    }

    list.length = 0;
    list.size = size;
    return list;
}

// print the sequence list
void lprintf(sqlist list)
{
    printf("%d", *list.head);
    for (int i = 1; i < list.length; i++)
    {
        printf(" %d", list.head[i]);
    }
    printf("\n");
}

// find element in the sequence list by sequential search
int findElement(sqlist list, int element)
{
    for (int i = 0; i < list.length; i++)
    {
        if (element == list.head[i])
        {
            return i;
        }
    }
    return -1;
}

// add element into sequence list
sqlist addElement(sqlist list, int element, int index)
{
    // if invalid index
    if (index > list.length || index < 0)
    {
        printf("Invalid index!\n");
        return list;
    }

    for (int i = list.length - 1; i >= index; i--)
    {
        list.head[i + 1] = list.head[i];
    }
    list.head[index] = element;
    list.length++;
    return list;
}

// remove element out of sequence list
sqlist removeElement(sqlist list, int element)
{
    while (findElement(list, element) >= 0)
    {
        int index = findElement(list, element);
        for (int i = index + 1; i < list.length; i++)
        {
            list.head[i - 1] = list.head[i];
        }
        list.length--;
    }
    return list;
}

// change element in the sequence list
sqlist amendElement(sqlist list, int element, int newElement)
{
    int index = findElement(list, element);
    if (index >= 0)
    {
        list.head[index] = newElement;
    }
    return list;
}
