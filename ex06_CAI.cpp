// Exercise 6.57 - 6.61 Solution : ex06_CAI.cpp
// Social welfare project : Computer-aided teaching

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;

void CAI();
void addition();
void subtraction();
void multiplication();
void division();
void hybridOperations();
 int randomOperation(int, int);
void comments(bool);
void monitorPerformance(double, double);

void main()
{
	CAI();
}

void CAI()
{
	cout << "1 == addition, 2 == subtraction, 3 == multiplication,\n"
		 << "4 == division, 5 == hybrid operations.\n" << endl;
	cout << "Enter your choose: ";
	int choose;
	cin >> choose;

	switch (choose)
	{
	case 1: 
		addition();
		break;
	case 2:
		subtraction();
		break;
	case 3:
		multiplication();
		break;
	case 4:
		division();
		break;
	case 5:
		hybridOperations();
		break;
	default:
		break;
	}
}

void addition()
{
	bool trueOrFalse = 0;
	srand(static_cast<unsigned int> (time(0)));

	unsigned int level, x = 0, y = 0, result = 0;
	double right = 0, wrong = 0;
	cout << "Enter the level: ";
	cin >> level;
	cout << endl;

	for (unsigned int counter = 1; counter <= 10; ++counter)
	{
		switch (level)
		{
		case 1:
			x = 1 + rand() % 9;
			y = 1 + rand() % 9;
			result = x + y;
			break;
		case 2:
			x = 1 + rand() % 99;
			y = 1 + rand() % 99;
			result = x + y;
			break;
		case 3:
			x = 1 + rand() % 999;
			y = 1 + rand() % 999;
			result = x + y;
			break;
		case 4:
			x = 1 + rand() % 9999;
			y = 1 + rand() % 9999;
			result = x + y;
			break;
		default:
			break;
		}

		cout << "How much is " << x << " plus " << y << "?\n";
		cout << "Enter your answer: ";

		unsigned int answer;
		cin >> answer;

		while (answer != result)
		{
			trueOrFalse = 0;
			comments(trueOrFalse);
			wrong += 1;
			cout << "\nEnter your answer: ";
			cin >> answer;
		}

		trueOrFalse = 1;
		comments(trueOrFalse);
		right += 1;
		cout << "\n" << endl;
	}

	monitorPerformance(right, wrong);
}

void subtraction()
{
	bool trueOrFalse = 0;
	srand(static_cast<unsigned int> (time(0)));

	unsigned int level;
	int x = 0, y = 0, result = 0;
	double right = 0, wrong = 0;
	cout << "Enter the level: ";
	cin >> level;
	cout << endl;

	for (unsigned int counter = 1; counter <= 10; ++counter)
	{
        switch (level)
		{
		case 1:
			x = 1 + rand() % 9;
			y = 1 + rand() % 9;
			result = x - y;
			break;
		case 2:
			x = 1 + rand() % 99;
			y = 1 + rand() % 99;
			result = x - y;
			break;
		case 3:
			x = 1 + rand() % 999;
			y = 1 + rand() % 999;
			result = x - y;
			break;
		case 4:
			x = 1 + rand() % 9999;
			y = 1 + rand() % 9999;
			result = x - y;
			break;
		default:
			break;
		}

		cout << "How much is " << x << " minus " << y << "?\n";
		cout << "Enter your answer: ";

		unsigned int answer;
		cin >> answer;

		while (answer != result)
		{
			trueOrFalse = 0;
			comments(trueOrFalse);
			wrong += 1;
			cout << "\nEnter your answer: ";
			cin >> answer;
		}

		trueOrFalse = 1;
		comments(trueOrFalse);
		right += 1;
		cout << "\n" << endl;
	}

	monitorPerformance(right, wrong);
}

void multiplication()
{
	bool trueOrFalse = 0;
	srand(static_cast<unsigned int> (time(0)));

	unsigned int level, x = 0, y = 0, result = 0;
	double right = 0, wrong = 0;
	cout << "Enter the level: ";
	cin >> level;
	cout << endl;

	for (unsigned int counter = 1; counter <= 10; ++counter)
	{
		switch (level)
		{
		case 1:
			x = 1 + rand() % 9;
			y = 1 + rand() % 9;
			result = x * y;
			break;
		case 2:
			x = 1 + rand() % 99;
			y = 1 + rand() % 99;
			result = x * y;
			break;
		case 3:
			x = 1 + rand() % 999;
			y = 1 + rand() % 999;
			result = x * y;
			break;
		case 4:
			x = 1 + rand() % 9999;
			y = 1 + rand() % 9999;
			result = x * y;
			break;
		default:
			break;
		}

		cout << "How much is " << x << " times " << y << "?\n";
		cout << "Enter your answer: ";

		unsigned int answer;
		cin >> answer;

		while (answer != result)
		{
			trueOrFalse = 0;
			comments(trueOrFalse);
			wrong += 1;
			cout << "\nEnter your answer: ";
			cin >> answer;
		}

		trueOrFalse = 1;
		comments(trueOrFalse);
		right += 1;
		cout << "\n" << endl;
	}

	monitorPerformance(right, wrong);
}

void division()
{
	bool trueOrFalse = 0;
	srand(static_cast<unsigned int> (time(0)));

	unsigned int level;
	int x = 0, y = 0, result = 0;
	double right = 0, wrong = 0;
	cout << "Enter the level: ";
	cin >> level;
	cout << endl;

	for (unsigned int counter = 1; counter <= 10; ++counter)
	{
		switch (level)
		{
		case 1:
			x = 1 + rand() % 9;
			y = 1 + rand() % 9;
			result = x / y;
			break;
		case 2:
			x = 1 + rand() % 99;
			y = 1 + rand() % 99;
			result = x / y;
			break;
		case 3:
			x = 1 + rand() % 999;
			y = 1 + rand() % 999;
			result = x / y;
			break;
		case 4:
			x = 1 + rand() % 9999;
			y = 1 + rand() % 9999;
			result = x / y;
			break;
		default:
			break;
		}

		cout << "How much is " << x << " divided by " << y << "?\n";
		cout << "Enter your answer: ";

		unsigned int answer;
		cin >> answer;

		while (answer != result)
		{
			trueOrFalse = 0;
			comments(trueOrFalse);
			wrong += 1;
			cout << "\nEnter your answer: ";
			cin >> answer;
		}

		trueOrFalse = 1;
		comments(trueOrFalse);
		right += 1;
		cout << "\n" << endl;
	}

	monitorPerformance(right, wrong);
}

void hybridOperations()
{
	bool trueOrFalse = 0;
	srand(static_cast<unsigned int> (time(0)));

	unsigned int level;
	int x = 0, y = 0, result = 0;
	double right = 0, wrong = 0;
	cout << "Enter the level: ";
	cin >> level;
	cout << endl;

	for (unsigned int counter = 1; counter <= 10; ++counter)
	{
		switch (level)
		{
		case 1:
			x = 1 + rand() % 9;
			y = 1 + rand() % 9;
			result = randomOperation(x, y);
			break;
		case 2:
			x = 1 + rand() % 99;
			y = 1 + rand() % 99;
			result = randomOperation(x, y);
			break;
		case 3:
			x = 1 + rand() % 999;
			y = 1 + rand() % 999;
			result = randomOperation(x, y);
			break;
		case 4:
			x = 1 + rand() % 9999;
			y = 1 + rand() % 9999;
			result = randomOperation(x, y);
			break;
		default:
			break;
		}

		cout << "Enter your answer: ";

		unsigned int answer;
		cin >> answer;

		while (answer != result)
		{
			trueOrFalse = 0;
			comments(trueOrFalse);
			wrong += 1;
			cout << "\nEnter your answer: ";
			cin >> answer;
		}

		trueOrFalse = 1;
		comments(trueOrFalse);
		right += 1;
		cout << "\n" << endl;
	}

	monitorPerformance(right, wrong);
}

int randomOperation(int xx, int yy)
{
	double oper; // operation
	default_random_engine engine3(static_cast<unsigned int> (time(0)));
	uniform_int_distribution <unsigned int> randomInt3(1, 4);
	unsigned int choose3 = randomInt3(engine3);

	if (choose3 == 1)
	{
		cout << "How much is " << xx << " plus " << yy << "?\n";
		return oper = xx + yy;
	}
	else if (choose3 == 2)
	{
		cout << "How much is " << xx << " minus " << yy << "?\n";
		return oper = xx - yy;
	}
	else if (choose3 == 3)
	{
		cout << "How much is " << xx << " times " << yy << "?\n";
		return oper = xx * yy;
	}
	else
	{
		cout << "How much is " << xx << " divided by " << yy << "?\n";
		return oper = xx / yy;
	}
}

void comments(bool trueOrFalse)
{
	if (trueOrFalse == 1)
	{
		default_random_engine engine1(static_cast<unsigned int> (time(0)));
		uniform_int_distribution <unsigned int> randomInt1(1, 4);
		unsigned int choose1 = randomInt1(engine1);

		switch (choose1)
		{
		case 1:
			cout << "Very good!";
			break;
		case 2:
			cout << "Excellent!";
			break;
		case 3:
			cout << "Nice Work!";
			break;
		case 4:
			cout << "Keep up the good work!";
			break;
		}
	}
	else
	{
		default_random_engine engine2(static_cast<unsigned int> (time(0)));
		uniform_int_distribution <unsigned int> randomInt2(1, 4);
		unsigned int choose2 = randomInt2(engine2);

		switch (choose2)
		{
		case 1:
			cout << "No. Please try again.";
			break;
		case 2:
			cout << "Wrong. Try once more.";
			break;
		case 3:
			cout << "Don't give up!";
			break;
		case 4:
			cout << "No. Keep trying.";
			break;
		}
	}
}

void monitorPerformance(double right, double wrong)
{
	double correctness = right / (right + wrong);
	if (correctness < 0.75)
	{
		cout << "Your correctness: " << correctness * 100 << " % " << endl;
		cout << "Please ask your teacher for extra help." << endl;
	}
	else
	{
		cout << "Your correctness: " << correctness * 100 << " % " << endl;
		cout << "Congratulations, you are ready to go to the next level!" << endl;
	}
}
