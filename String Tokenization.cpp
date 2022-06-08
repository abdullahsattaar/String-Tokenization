#include<iostream>
#include<stdio.h>
using namespace std;
int myTokenizer(char *data, char**& list_tokens, char delim)
{
	int count = 0;
	for (int i = 0, int j = 0; j != '\0', i != '\0'; j++, i++)
	{
		if (data[j] != delim)
		{
			*list_tokens[i] = data[j];
			count++;
		}
	}
	return count;
}
void printTokens(char** list_tokens, int size)
{
	for (int i = 0; i < size&&i != '\0'; i++)
		cout << *list_tokens[i];
}

int main()
{
	char input[100];
	gets_s(input);
	char *data = input;
	cout << "Enter the delim: ";
	char delim;
	cin >> delim;
	char **list = new char*[];
	int size=myTokenizer(data, list, delim);
	printTokens(list, size);



	system("pause");
	return 0;

}