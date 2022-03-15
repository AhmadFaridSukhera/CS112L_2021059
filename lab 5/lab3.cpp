#include <iostream>
#include <string>

using namespace std;
class stringType {
public:
	string first;
	string second;
	
	stringType()
	{
		first = "Hello World ";
		second = "You are not worth it";
	}


	void setValues(string str1, string str2)
	{
		first = str1;
		second = str2;
		cout << "The string values have been set successfully!" << endl << endl;

	}

	void printValues()
	{
		cout << "Your first string is: " << first << endl;
		cout << "Your second string is: " << second << endl << endl;

	}

	int maxLength()
	{
		int x = 0;
		int y = 0;

		for (; first[x] != '\0'; x++) {

		}



		for (; second[y] != '\0'; y++) {
		}

		if (x > y)
			return x;
		else
			return y;
	}

	int compare(string s1, string s2) {
		int counts1=0;
		int counts2 = 0;
		int x=0;
		
		if (s1 != s2) {
			if (s1 > s2) {
				counts1++;
			}
			else
				counts2++;
		}
		else {
			x = 0;
		}
		if (counts1 > counts2) {
			x = counts1;
		}
		else {
			x = counts2;
		}
		return x;
	}


	void copyto(string source, string destination) {
	
		for (int i = 0; source[i] != '\0'; i++) {
			
			destination[i] = source[i];
		}
		cout<<endl;
		cout<<"The string has been copied successfully and the new string now stores: ";
			for (int i = 0; source[i] != '\0'; i++) 
		cout << destination[i];
	
	}
	string concatenate(string s1, string s2){
		int i=0;
		for(;s1[i]!='\0';i++)
		
		for(int y=i;s2[y-i]!='\0';y++){
			s1[y]=s2[y-i];
		}
		
		for(int u=0;s1[u]!='\0';u++){
			cout<<s1[u];
		}
		
	}
	
	int searchWord(string word){
		int count=0;
		int count1=0;
		int l=0;
		for(;word[count]!='\0';count++)
		
		
		for(int i=0;first[i]!='\0';i++)
		{
			if(first[i]==word[l])			
			{
				l++;
				count1++;
				if(count1==count)
				{
					return 1;
				}
			}
	
				else{
						count1=0;
						l=0;
					}
	}
		return 0;
			
	}

	int searchChar(char ch) {
		int y = 0;
		
		for (int i = 0; first[i] != '\0'; i++) {
			if(first[i]==' '){
					continue;
					}
			if (first[i] == ch){
				y = 1;
				return y;
	}
			
			else{			
				y = 2;
				}
		}
		
		return y;
	}

	~stringType() {
		cout << "Destructor has been called" << endl << endl;
	};

};


int main()
{

	string s2;
	string s1;
	stringType y;

	do {
		cout << "------Welcome to the main menu------" << endl << endl;
		cout << "1. Set Values" << endl;
		cout << "2. Print Values" << endl;
		cout << "3. Check Max length" << endl;
		cout << "4. Compare 2 strings" << endl;
		cout << "5. Copy string" << endl;
		cout << "6. Concatenate string" << endl;
		cout << "7. Search a Word in string" << endl;
		cout << "8. Search a Character in string" << endl;
		cout << "Choose an option: ";

		char x;
		cin >> x;
		cin.ignore();
		cout << endl << endl;
		switch (x) {

		case '1':

			cout << "Enter the first string: ";
			getline(cin, s1);
			cout << "Enter the second string: ";
			getline(cin, s2);
			y.setValues(s1, s2);
			break;

		case '2':
			y.printValues();
			break;
		case '3':
			cout << "Max length is: " << y.maxLength() << endl;
			break;
		case '4':
			cout << "Enter the first string: ";
			getline(cin, s1);
			cout << "Enter the second string: ";
			getline(cin, s2);
			int x;
			x = y.compare(s1, s2);
			if (x == 1)
			{
				cout << "String 1 is greater" << endl;
			}
			if (x == 2)
			{
				cout << "String 2 is greater" << endl;
			}
			if (x == 0) {
				cout << "Strings are equal" << endl;

			}

			break;
		case '5':
			cout << "Enter the string you want to copy: ";
			getline(cin, s1);
			
			y.copyto(s1, s2);
			break;
		case '6':
			
			cout<<"Enter first string: ";
			getline(cin,s1);
			cout<<"Enter second string: ";
			getline(cin,s2);
			
			y.concatenate(s1,s2);
			cout<<endl;
			cout<<"The strings have been concatinated!"<<endl;
			
			break;
		case '7':
			cout<<"Enter the word you want to find: ";
			cin>>s1;
			int r;
			r=y.searchWord(s1);
			if(r==1){
				cout<<"The word exists"<<endl;
			}
			else{
				cout<<"The word doesn't exist"<<endl;
			}

			break;
		case '8':
			
			cout << "Enter the char you want to find: ";
			
			char t;
			cin >> t;
		
			int f;
			
			f = y.searchChar(t);
			
			if (f == 1) {
				cout << " The character exists." << endl;
			}
			else {
				cout << "The character doesnt exist";
			}
			break;

		}

	} while (1);



}
