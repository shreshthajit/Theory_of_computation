#include<bits/stdc++.h>

 using namespace std;

int dfa = 1;


void state1(char c)
{
	if (c == 'p')
	{
		dfa = 2;
	}
	else if (c == 'q') {
		dfa = 1;
	}
	else if (c == 'r')
	 {
		dfa = 1;
	}
 	else {
		dfa = -1;
	}
}

void state2(char c)
{
	if (c == 'p') {
		dfa = 2;
	}
	else if (c == 'q') {
		dfa = 3;
	}
	else if (c == 'r') {
		dfa = 2;
	}
	else {
		dfa = -1;
	}
}

void state3(char c)
{
	if (c == 'q')
	{
		dfa = 3;
	}
	else if (c == 'r')
	{
		dfa = 4;
	}
	else if(c=='p')
	{
	    dfa=3;
	}
	else {
		dfa = -1;
	}
}
void state4(char c)
{
	if (c == 'p') {
		dfa = 4;
	}
	else if (c == 'q') {
		dfa = 4;
	}
	else if (c == 'r') {
		dfa = 4;
	}
	else {
		dfa = -1;
	}
}
void state5(char c)
{

dfa=-1;
}



int isAccepted(string str)
{

	int i;

	int len=str.length();

	for (i = 0; i < len; i++)
	 {
		///if (dfa == 0)
		///	start(str[i]);

		if (dfa == 1)
			state1(str[i]);

		else if (dfa == 2)
			state2(str[i]);

		else if (dfa == 3)
			state3(str[i]);
        else if(dfa==4)
			state4(str[i]);
        else
			return 0;
	}
	if (dfa == 4)
		return 1;
	else
		return 0;
}

 int main()
{
 	string str;
 	int T;
 	cin>>T;
 	while(T--)
 	{

    cin>>str;

	if (isAccepted(str))
	{
		printf("CORRECT\n");
		dfa=1;
    }
	else
	{
		printf("NOT CORRECT\n");
		dfa=1;
    }
    }
	return 0;
}

