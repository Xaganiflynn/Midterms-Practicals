// Midterms-Practicals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void Cases1(int n, string words)
{
	switch (n)
	{
	case 1:
		cout << words;
		break;
	case 2:
		cout << "Sorry, wrong answer... next question";
		break;
	default:
		cout << "Sorry, wrong answer... next question";
		break;
	}
	cout << '\n';
	system("pause");
	system("CLS");
}

void Cases2(int n,string words)
{
	switch (n)
	{
	case 1:
		cout << "Sorry, wrong answer... next question";
		break;
	case 2:
		cout << words;
		break;
	default:
		cout << "Sorry, wrong answer... next question";
		break;
	}
	cout << '\n';
	system("pause");
	system("CLS");
}

void Cases3(int n, string words)
{
	switch (n)
	{
	case 1:
		cout << "Sorry, wrong answer... next question";
		break;
	case 2:
		cout << "Sorry, wrong answer... next question";
		break;
	case 3:
		cout << words;
		break;
	default:
		cout << "Sorry, wrong answer... next question";
		break;
	}
	cout << '\n';
	system("pause");
	system("CLS");
}

void Counter(int grade, int questions)
{
	cout << "Correct  answer / questions asked: " << grade << "/" << questions << '\n';
}


int main()
{
	int questions = 0;
	int grade = 0;

	cout << "Hello there, your general knowledge will be tested. Are you ready?" << '\n' << '\n';
	system("pause");
	system("CLS");

	cout << "Q1: which recent telescope outperformed NASA's Hubble Space Telescope?"  << "\n1. Jame's Webb Telescope?\n2.James Webb Telescope\n3.Elon's Space Probe\n4.John Webbster Telescope" << "\n\n" <<">";
	int question1;
	questions += 1;
	string words = "It is the James webb telescope";
	cin >> question1;
	Cases2(question1, words);
	if (question1 == 2)
		grade += 1;

	Counter(grade, questions);

	cout << "Q2: What's the fastest bird?" << "\n1.The Flamingo\n2.The Bold Eagle\n3.The Peregrine Falcon\n4.The Millenium Falcon" << "\n\n" << ">";
	int question2;
	string answer2 = "Great Job! It is the Peregrine Falcon";
	questions += 1;
	cin >> question2;
	Cases3(question2, answer2);
	if (question2 == 3)
		grade += 1;

	Counter(grade, questions);

	cout << "Q3: Which is the best school?" << "\n1.Full Sail University\n2.UCF\n3.NJIT\n4.Harvard" << "\n\n" << ">";
	int question3;
	string answer3 = "Of course it is!! Why is that even a question";
	questions += 1;
	cin >> question3;
	Cases1(question3, answer3);
	if (question3 == 1)
		grade += 1;

	Counter(grade, questions);

	cout << "Q4: Where's the nearest black hole located?" << "\n1.HR-6819\n2.Andromeda System\n3.Fornax Cluster\n4.SK-1552" << "\n\n" << ">";
	int question4;
	questions += 1;
	string answer4 = "You either searched it up or you're also an astroner... Good Job!";
	cin >> question4;
	Cases1(question4, answer4);
	if (question4 == 1)
		grade += 1;

	Counter(grade, questions);

	if (grade == 4)
		cout << "Great Job!! You aced the test!!";
	else if (grade == 1)
		cout << "Well you can always try again later!";
	else if (grade == 0)
		cout << "I don't know how you manage to di it, but you did... you smart smart man";
	else
		cout << "Well done!";


}
