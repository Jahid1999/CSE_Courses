#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct node
{
    string firstName;
    string lastName;
    node *next;
};

class List
{
private:
    node *head, *tail;
public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void create_contact(string first, string last) // Create node and add it onto the linked list
    {
        node *temp = new node;
        temp->firstName = first;
        temp->lastName = last;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
