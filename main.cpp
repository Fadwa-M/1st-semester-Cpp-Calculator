#include <iostream>
using namespace std;
#define pi 3.141592
int main()


{
int x=0;
for( ; ; )


char choice;
double a,b,c;
cout<<"¥"<<endl;

cin>>choice;

if(choice='c'||'d')
{
(If1)


if(choice=='c')
{(1)

string s;
cout<<"enter any equation"<<endl;

for( ; ; )
{(2)

cin>>a;

switch(a)

{
(S1)

case 0 . . . 99999

{
(C1)

cin>>s;
if(s=="sin")
{ if ((int)a/180==a/180)
cout<<"0";
else
cout<<sin(a*pi/180);}
else if (s=="cos")
{ if (((int)a/180==a/180)|| !((int)a/90==a/90))
cout<<cos(a*pi/180);
else
cout<<"0"; }
else if (s=="tan")
{ if ((int)a/180==a/180)
cout<<"0";
else if ((int)a/90==a/90)
cout<<"math error";
else
cout<<tan(a*pi/180);
}
//their reciprocals respectively
else if (s=="csc")
{ if ((int)a/180==a/180)
cout<<"math error";
else
cout<<1/(sin(a*pi/180));
}
else if (s=="sec") {
if (((int)a/180==a/180)|| !((int)a/90==a/90))
cout<<1/(cos(a*pi/180));
else
cout<<"math error"; }
else if (s=="cot") {
if (((int)a/180==a/180) || ((int)a/90==a/90))
cout<<"math error";
else
cout<<1/(tan(a*pi/180));
}
//inverse functions- find the angle by knowing the trig function
else if (s=="sin^-1" || s=="sin-1")
{ c = asin(a);
cout<<c*180/pi;
}
else if (s=="cos^-1" || s=="cos-1")
{ c= acos(a);
cout<<c*180/pi;
}
else if (s=="tan^-1" || s=="tan-1")
{ c = atan(a);
cout<<c*180/pi;
}

else
{(3)

cin>>b;

switch(b)

{
(S2)


case 0 . . . 99999

{
(C2)

if(s=="+")
{c=a+b; cout<<'='<<c<<endl;}
else if (s=="-")
{c=a-b; cout<<'='<<c<<endl;}
else if (s=="*")
{c=a*b; cout<<'='<<c<<endl;}
else if (s=="/")
{if (b==0)
cout<<"maths error";
else
{c=a/b; cout<<'='<<c<<endl;} }

................(A)





...............(A)
................(B)





..............(B)

else
{cout<<"syntax error"<<endl; break;
x=1;
}

}
(C2)

default:cout<<"error";x=1;break;

}
(S2)


}
(C1)

default:cout<<"error";x=1;break;


}
(S1)


}(3)

}(2)

}

if(x==0)
{
(If2)
else if (choice=='d')
//convert from any base to decimal
cout<<"convert from base: ";
int FromBase; cin>>FromBase;
cout<<"to base: ";
int ToBase; cin>>ToBase;
cout<<"the number to be converted: ";
int num2, result = 0, multiplier=1;
char x;
cin>>num2;
do {
result=result+num2%10*multiplier;
multiplier=multiplier*FromBase;

num2=num2/10;

} while (num2!=0);
//from decimal to any base
do {
int remainder = result%ToBase;
cout<<(remainder);
result=result/ToBase;
}
while (result!=0);
cout<<endl;

.........................(٢)



}
(If2)
else
break;
}
(If1)
else
cout<<"error";break;



}
return 0;
}
