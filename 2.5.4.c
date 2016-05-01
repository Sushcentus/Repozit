#include <stdio.h>

_Bool Yes_No (char *s)
{
if(*s=="\0") return 1;
char T[256]="\0",c;
int t,a=0,i=0,b;
while (*(s+i))
{
if ((*(s+i)==')') || (*(s+i)==']') || (*(s+i)=='}') || (*(s+i)=='>')) if(a%2==0) return 0;;
if ((*(s+i)=='(') || (*(s+i)=='[') || (*(s+i)=='{') || (*(s+i)=='<') || (*(s+i)=='"') || (*(s+i)=='\'') || (*(s+i)=='`'))
{
c=*(s+i);
i++;
b=0;
a++;
switch (c)
{
case '(' : while (*(s+i)!=')' && *(s+i))
{
    T[b]=*(s+i);
    i++;
    b++;
}
if (*(s+i)==')') {a++; i++;}
else return 0;
if (!Yes_No(T)) return 0;
break;

case '[' : while (*(s+i)!=']' && *(s+i))
{
    T[b]=*(s+i);
    i++;
    b++;
}
if (*(s+i)==']') {a++; i++;}
else return 0;
if (!Yes_No(T)) return 0;
break;

case '{' : while (*(s+i)!='}' && *(s+i))
{
    T[b]=*(s+i);
    i++;
    b++;
}
if (*(s+i)=='}') {a++; i++;}
else return 0;
if (!Yes_No(T)) return 0;
break;

case '<' : while (*(s+i)!='>' && *(s+i))
{
    T[b]=*(s+i);
    i++;
    b++;
}
if (*(s+i)=='>') {a++; i++;}
else return 0;
if (!Yes_No(T)) return 0;
break;

default: while (*(s+i)!=c)
{
    T[b]=*(s+i);
    i++;
    b++;
}
if (*(s+i)==c) {a++; i++;}
else return 0;
if (!Yes_No(T)) return 0;
break;
}
}
else i++;
}
if (a%2==0) return 1;
else return 0;
}

int main()
{
char str[256];
gets (str);
if (Yes_No(str)) printf("It's OK\n");
else printf ("It's not OK\n");
return 0;
}