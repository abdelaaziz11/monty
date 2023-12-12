#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct put_s - variables -args, file, line cont
 * @ar: value
 * @file: pointer to monty file
 * @cont: line cont
 * @lil: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct put_s
{
	char *ar;
	FILE *file;
	char *cont;
	int lil;
}  put_t;

extern put_t put;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push_fun(stack_t **head, unsigned int nbr);
void pall_fun(stack_t **head, unsigned int nbr);
void pint_fun(stack_t **head, unsigned int nbr);
int execute(char *cont, stack_t **head, unsigned int count, FILE *file);
void stackFree(stack_t *head);
void pop_fun(stack_t **head, unsigned int count);
void swap_fun(stack_t **head, unsigned int count);
void add_fun(stack_t **head, unsigned int count);
void nop_fun(stack_t **head, unsigned int count);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void queue_fun(stack_t **head, unsigned int count);

#endif
