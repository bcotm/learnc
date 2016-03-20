#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if(sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

double pop(void)
{
    if(sp > 0)
        return val[--sp];
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}

/* printtop: print the top element of the stack */
void printtop(void)
{
    if (sp > 0)
        printf("%g\n", val[sp - 1]);
    else
        printf("error: stack empty\n");
}

/* duplicate:  duplicate the top element of the stack */
void duplicate(void)
{
    double top = pop();
    push(top);
    push(top);
}

/* swap:  swap the top two elements of the stack */
void swap(void)
{
    double top1 = pop();
    double top2 = pop();
    push(top1);
    push(top2);
}

/* clear: clear stack */
void clear(void)
{
    sp = 0;
}
