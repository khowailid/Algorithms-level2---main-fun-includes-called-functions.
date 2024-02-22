#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//1:4 - Multiplication Table from 1 to 10 - Prime and Perfect Numbers from 1 to N.

void Header() {
	cout << "\n\n" << "\t\t Multiplication Table From 1 to 10\n\t\t *********************************\n";
	cout << "\n________________________________________________________________________________________\n";
	for (int i = 1; i <= 10; i++)
	{
		if (i == 10)
			cout << "\t  " << i << "\t|";
		else
			cout << "\t   " << i;

	}
	cout << "\n-----------------------------------------------------------------------------------------\n";
}
string columnSeperator(int i) {
	if (i == 10)
		return  "  |)";
	return "   |)";
}
void PrintMultiTable() {

	Header();
	for (int i = 1; i < 11; i++)
	{
		cout << " " << i << columnSeperator(i) << "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t|";
		}
		cout << endl;
	}
}
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
int readPositiveNum(string message) {
	int num = 0;
	do
	{
		cout << message << endl;
		cin >> num;

	} while (num <= 0);
	return num;
}
enPrimeNotPrime checkPrime(int num) {
	int m = round(num / 2);
	for (int counter = 2; counter <= m; counter++)
	{
		if (num % counter == 0)
			return enPrimeNotPrime::NotPrime;

	}
	return enPrimeNotPrime::Prime;
}
void printPrimeNums(int num) {

	cout << "Prime Number from " << 1 << " to " << num << "are :" << endl;
	for (int i = 1; i <= num; i++)
	{
		if (checkPrime(i) == enPrimeNotPrime::Prime) {
			cout << i << endl;
		}
	}
}
bool isPerfectNumber(int num) {
	int sum = 0;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
			sum += i;
	}
	return num == sum;
}
void printPerfectNumber(int num) {
	if (isPerfectNumber(num))
		cout << num << "  is a perfect number \n";
	else
		cout << num << "  is not a perfect number \n";
}
void printAllPerfectNumbers(int num) {
	for (int i = 1; i <= num; i++) {
		{
			if (isPerfectNumber(i))
				cout << i << endl;
		}
	}
}

//5:11	- sum of digits - Reversed Numbers - digit Frequency - Palindrom number.
void pReversedOrder(int num) {
	int rem = 0;
	while (num > 0) {
		rem = num % 10;
		num /= 10;
		cout << rem << endl;

	}

}
void pSumOfDigits(int num) {
	int sum = 0;
	int rem = 0;
	while (num > 0) {
		rem = num % 10;
		num /= 10;
		sum += rem;
	}
	cout << " sum of digits is " << sum << endl;

}

int reversedNumber(int num) {
	int rev = 0;
	int rem = 0;
	while (num > 0) {
		rem = num % 10;
		num /= 10;
		rev = rev * 10 + rem;
	}

	return rev;
}
int digitFrequency(int num, short digit) {
	int rem = 0;
	int freq = 0;
	while (num > 0) {
		rem = num % 10;
		num /= 10;
		if (digit == rem) {
			freq++;
		}
	}
	return freq;
}
void digitFrequency2(int num) {
	for (int i = 0; i <= 9; i++)
	{
		short digitFreq;
		digitFreq = digitFrequency(num, i);
		if (digitFreq > 0)
			cout << "Digit " << i << " frequency is " << digitFreq << endl;
	}
}
bool isPalindromeNumber(int num) {
	return num == reversedNumber(num);
}

//12:15 - Inverted and non inverted Pattern for Numbers and Letters.
void invertedPattern(int num) {
	for (int i = num; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++) {
			cout << " " << i << " ";
		}
		cout << endl;
	}
}
void numberPattern(int num) {
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}
void invertedLetterPattern(int num) {
	for (int i = 65 + num - 1; i >= 65; i--)
	{
		for (int j = 1; j <= num - (65 + num - 1 - i); j++) {
			cout << char(i);
		}
		cout << endl;
	}
}
void letterPattern(int num) {
	for (int i = 65 + 1; i <= 65 + num - 1; i++)
	{
		for (int j = 1; j <= i - 65 + 1; j++)
		{
			cout << char(i);
		}
		cout << "\n";
	}
}

//16:17  - wordsFromAAAtoZZZ - Three Letter Password.
void wordsFromAAAtoZZZ() {
	string wor = "";
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++) {
				wor += char(i);
				wor += char(j);
				wor += char(k);
				cout << wor << endl;
				wor = "";
			}

		}
		cout << "-------- Ends of " << char(i) << "(s) --------------";
		cout << endl;
	}
}
string rthreeLetterPassword() {

	string pass;
	cout << "enter  your pass All capital: ";
	cin >> pass;
	return pass;
}
bool threeLetterPassword(string pass) {
	string wor = "";
	int counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++) {
				counter++;
				wor += char(i);
				wor += char(j);
				wor += char(k);
				cout << "Trial [" << counter << "] : " << wor << endl;
				if (wor == pass) {
					cout << "\nPassowrd is: " << wor << "\n";
					cout << "\nFound after [" << counter << "] Trial(s)" << "\n";
					return true;
				}
				wor = "";
			}

		}

	}
	return false;
}

//18 - Encrypt/Decrypt Text 
string rText() {

	string text;
	cout << "enter  your pass All capital: ";
	cin >> text;
	return text;
}
string encryptText(string text, short encryptionkey) {
	for (int i = 0; i <= text.length(); i++)
	{
		text[i] = char((int)(text[i] + encryptionkey));
	}
	return text;
}
string decryptText(string text, short encryptionkey) {
	for (int i = 0; i <= text.length(); i++)
	{
		text[i] = char((int)text[i] - encryptionkey);
	}
	return text;
}

//19:21 - Generate Random Numbers - Generate Keys.
int randomNumber(int from, int to) {
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}
enum enCharType { smallLetter = 1, capitalLetter = 2, character = 3, digit = 4 };
char getRandom(enCharType charType) {
	switch (charType)
	{
	case enCharType::smallLetter:
	{
		return char(randomNumber(97, 122));
		break;
	}
	case enCharType::capitalLetter:
	{
		return char(randomNumber(65, 90));
		break;
	}
	case enCharType::character:
	{
		return char(randomNumber(33, 47));
		break;
	}
	case enCharType::digit:
	{
		return char(randomNumber(48, 57));
		break;
	}
	};
}
int  readPositiveNumber(string Message) {
	int keys = 0;
	cout << Message << endl;
	cin >> keys;
	return keys;
}
string generateWord(enCharType charType, short length) {
	string word = "";
	for (int i = 1; i < length; i++)
	{
		word += getRandom(charType);
	}
	return word;
}
string generateKeys() {
	string key = "";
	key = generateWord(enCharType::capitalLetter, 4) + "-";
	key += generateWord(enCharType::character, 4) + "-";
	key += generateWord(enCharType::capitalLetter, 4) + "-";
	key += generateWord(enCharType::digit, 4);
	return key;

};
void printGenerateKeys(short numberOfKeys) {
	for (int i = 1; i <= numberOfKeys; i++)
	{
		cout << "Key [ " << i << " ]: ";
		cout << generateKeys() << endl;
	}
}

//22:25 - Repeated Elements Count in Array - fill array with random values - Max & Min number of an array 
void readArray(int arr[100], int& arrLength) {
	cout << "Enter length of the array : ";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		cout << "\nEnter index [" << i + 1 << "] :";
		cin >> arr[i];
	}
}
void printArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++)
	{
		if (i == arrLength - 1)
			cout << arr[i] << "";
		else
			cout << arr[i] << ", ";
	}
	cout << endl;
}
int timesRepeated(int numToCheck, int arr[100], int arrLength) {
	int count = 0;
	for (int i = 0; i <= arrLength; i++)
		if (numToCheck == arr[i])
			count++;
	return count;
}
void fillArraywithRandom(int arr[100], int& length) {
	cout << "\nwhat is the length of the array : ";
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		arr[i] = randomNumber(-100, 100);
	}
}
int maxNumOfArray(int arr[100], int arrLength) {
	int max = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int minNumOfArray(int arr[100], int arrLength) {
	int min = 100;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

//26:30 - Sum & Average - Copy an Array to another array - copy only Prime - sum of 2 arrays and sent to a third array
int sumNumOfArray(int arr[100], int arrLength) {
	int sum = 0;
	for (int i = 0; i < arrLength; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int avgNumOfArray(int arr[100], int arrLength) {
	return (float)sumNumOfArray(arr, arrLength) / arrLength;
}
void copyArray(int arrSource[100], int arrDistination[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arrDistination[i] = arrSource[i];
	}
}
void copyOnlyPrime(int arrSource[100], int arrDistination[100], int arrLength, int& arr2Length) {
	int counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (checkPrime(arrSource[i]) == enPrimeNotPrime::Prime)
			arrDistination[counter] = arrSource[i];
		counter++;
	}
	arr2Length = --counter;
}
void sumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}

//31:35 - swap an array elements - Reversed Array - Array Keys - search index array 
void fillArrayWith1toN(int arr[100], int& arrLength) {
	for (int i = 0; i <= arrLength; i++)
	{
		arr[i] = i + 1;
	}
}
void Swap(int& A, int& B) {
	int temp;
	temp = A;
	A = B;
	B = temp;

}
void shuffleArray(int arr[100], int arrLength) {
	Swap(arr[randomNumber(1, arrLength)], arr[randomNumber(1, arrLength)]);
}
void reversedArray(int arr[100], int arr2[100], int arrLength) {
	for (int i = arrLength; i >= 0; i--)
	{
		arr2[i] = arr[i];
	}
}
void fillArrayWithKeys(string arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = generateKeys();
	}
}
void printStringArray(string arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Array[ " << i << " ]: " << arr[i] << "\n";
	}
	cout << " \n";
}
short searchIndexArray(int arr[100], int numToSearch, int arrLength) {


	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == numToSearch)
			return i;
	}
	// -1 means not found
	return -1;

};
bool isNumberInArray(int number, int arr[100], int arrLength) {
	return searchIndexArray(arr, number, arrLength) != -1;
}

//36:40 - Add array length semi dinamic from input - copy Distinct Number to array
void addArrayElements(int num, int arr[100], int& arrLength) {
	arrLength++;
	arr[arrLength - 1] = num;
}
void inputUserNumberInArray(int arr[100], int& arrLength) {
	bool addMore = true;
	do {
		addArrayElements(readPositiveNum("enter a number"), arr, arrLength);
		cout << "\n do wou want to add more numbers? [0]: no , [1]: yes? ";
		cin >> addMore;
	} while (addMore);
}
void copyArrayUsingAddArrayElements(int arrSource[100], int arrDistination[100], int& arrLength1, int& arrLength2) {
	for (int i = 0; i < arrLength1; i++)
	{
		 addArrayElements(arrSource[i], arrDistination, arrLength2);
	}
}
void copyOddNumbers(int arrSource[100], int arrDistination[100], int &arrLength1, int& arrLength2) {
	for (int i = 0; i < arrLength1; i++)
	{
		if (arrSource[i] % 2 != 0)
			addArrayElements(arrSource[i], arrDistination, arrLength2);
	}
}
void copyPrimeNumbers(int arrSource[100], int arrDistination[100], int& arrLength1, int& arrLength2) {
	for (int i = 0; i < arrLength1; i++)
	{
		if (checkPrime(arrSource[i]) == enPrimeNotPrime::Prime) {
			addArrayElements(arrSource[i], arrDistination, arrLength2);
		}
	}
}
void copyDistincitArray(int arrSource[100], int arrDistination[100], int& arrLength1, int& arrLength2) {
	for (int i = 0; i < arrLength1; i++)
	{
		if (!isNumberInArray(arrSource[i], arrDistination, arrLength2)) {
			addArrayElements(arrSource[i], arrDistination, arrLength2);
		};
	}
}

//41:45 - Plindrome array - Count Odd Even Negative Positive Numbers
bool isPalindromeArray(int arr[100], int Length) {
	for (int i = 0; i < Length; i++)
	{
		if (arr[i] != arr[Length - i - 1]) {
			return false;
		}
	}
	return true;
}
int oddEvenCountArray(string & OddOrEven,int arr[100], int arr2[100], int &arrLength1 ,int &arrLength2) {
	
	int counterOdd = 0;
	int counterEven = 0;
	for (int i = 0; i < arrLength1; i++)
	{
		if (arr[i] % 2 != 0) {
			counterOdd++;
		}
		else if (arr[i] % 2 == 0) {
			counterEven++;
		}
	}
	if (OddOrEven == "odd") {
		cout << "odd count is ";
		return counterOdd;

	}
	else {
		cout << "even count is ";
		return counterEven;
	}
};
int positiveCountArray(int arr[100], int arrLength) {
	int counter = 00;
	for (int i = 0; i < arrLength; i++)
	{
		if (!(arr[i] <= 0)) {
			counter++;
		}
	}
	return counter;
}
int NegativeCountArray(int arr[100], int arrLength) {
	int counter = 00;
	for (int i = 0; i < arrLength; i++)
	{
		if (!(arr[i] >= 0)) {
			counter++;
		}
	}
	return counter;
}

//46:50 - My Abs - My round - My floor - My ceiling - My Sqrt
float myABS_Fun(float & userInpus)
{
	if (userInpus > 0)
		return userInpus;
	else
		return userInpus * -1;
}
int  getFractions(float Num) {
	return Num- int(Num);
}
int myRound(float num) {
	int intPart = int(num);
	float fractionPart = getFractions(num);
	if (abs(fractionPart) >= .5) {
		if (num > 0)
			return ++intPart;
		else
			return --intPart;
	}
	else
		return intPart;

}
int myFloor(float num) {
	if (num > 0)
		return int(num);
	else
		return int(num)-1;

}
int myCeil(float num) {
	if (abs(getFractions(num)) > 10)
		if (num > 0)
			return int(num) + 1;
		else
			return int(num);
	else
		return num;
}
int mySqrt(float num) {
	return pow(num, 0.5);
}
int main()
{
	srand((unsigned)time(NULL));
	

	PrintMultiTable();
	printPrimeNums(readPositiveNum("??"));
	printPerfectNumber(readPositiveNum("??"));
	printAllPerfectNumbers(readPositiveNum("??"));
	pReversedOrder(readPositiveNum("??"));
	pSumOfDigits(readPositiveNum("?? "));
	cout << reversedNumber(readPositiveNum("?? "));

	int mainNum = readPositiveNum("??");
	short digit = readPositiveNum("??");
	cout << "Digit " << digit << " Frequency is " << digitFrequency(mainNum, digit) << " Times ";
	digitFrequency2(readPositiveNum("?? "));
	pReversedOrder(reversedNumber((readPositiveNum("?? "))));
	if (isPalindromeNumber(readPositiveNum("??")))
		cout << "yes, it's a palindrome number\n";
	else
		cout << "No , it's not a palindrome number\n";

	invertedPattern(readPositiveNum("?? "));
	numberPattern(readPositiveNum("?? "));
	invertedLetterPattern(readPositiveNum("?? "));
	letterPattern(readPositiveNum("?? "));
	wordsFromAAAtoZZZ();
	threeLetterPassword(rthreeLetterPassword());

	const short encryptionkey = 2;
	string text = rText();
	string textAfterEncr = encryptText(text, encryptionkey);
	string textAfterDecr = decryptText(textAfterEncr, encryptionkey);
	cout << textAfterEncr << endl;
	cout << textAfterDecr;

	cout << randomNumber(1, 65) << endl;
	cout << getRandom(enCharType::smallLetter) << endl;
	cout << getRandom(enCharType::capitalLetter) << endl;
	cout << getRandom(enCharType::character) << endl;
	cout << getRandom(enCharType::digit) << endl;
	printGenerateKeys(readPositiveNumber("enter how many keys\n"));

	int arr[100], arrLength, numberToCheck;
	readArray(arr, arrLength);
	numberToCheck = readPositiveNumber("Enter the number you want you check");
	cout << "\n Original Array = ";  printArray(arr, arrLength);
	cout << "\n Number To Check[" << numberToCheck << "] is Repeated (" << timesRepeated(numberToCheck, arr, arrLength) << ")" << endl;
	fillArraywithRandom(arr, arrLength);
	cout << "\nArray elements = "; printArray(arr, arrLength);

	fillArraywithRandom(arr, arrLength);
	cout << "\n Array Elements= ";  printArray(arr, arrLength);
	cout << " Max Array element = " << maxNumOfArray(arr, arrLength);
	cout << "\n Array Elements= ";  printArray(arr, arrLength);
	cout << " Min Array element = " << minNumOfArray(arr, arrLength);
	cout << "\n Array Elements= ";  printArray(arr, arrLength);
	cout << " Min Array element = " << sumNumOfArray(arr, arrLength);
	cout << "\n Array Elements= ";  printArray(arr, arrLength);
	cout << " Average Array element = " << avgNumOfArray(arr, arrLength);
	fillArraywithRandom(arr, arrLength);
	int arr2[100], arrSum[100], arr2Length = 0;
	copyArray(arr, arr2, arrLength);
	cout << "Array 1 Elements:            ";
	printArray(arr, arrLength);
	cout << "Array 2 Elements after copy: ";
	printArray(arr2, arrLength);
	cout << "Only Prim Number: ";
	copyOnlyPrime(arr, arr2, arrLength, arr2Length);
	printArray(arr2, arr2Length);


	fillArraywithRandom(arr, arrLength);
	fillArraywithRandom(arr2, arr2Length);
	sumOf2Arrays(arr, arr2, arrSum, arrLength);
	cout << "array 1 elemnts\n";
	printArray(arr, arrLength);
	cout << "array 2 elemnts\n";
	printArray(arr2, arr2Length);
	cout << "Sum of the array 1 and array2 :\n";
	printArray(arrSum, arr2Length);

	arrLength = readPositiveNum("Enter number of elements");
	fillArrayWith1toN(arr, arrLength);
	cout << "array befor suffle elemnts\n";
	printArray(arr, arrLength);
	cout << "array adtersuffle elemnts\n";
	shuffleArray(arr, arrLength);
	printArray(arr, arrLength);

	fillArraywithRandom(arr, arrLength);
	reversedArray(arr, arr2, arrLength);

	string arrKeys[100];
	int arrKeysLength = readPositiveNum("how many keys do you want to generate? ");
	fillArrayWithKeys(arrKeys, arrKeysLength); 
	printStringArray(arrKeys, arrKeysLength);

	int arrrr[100];
	int arrrrLength;
	fillArraywithRandom(arrrr, arrrrLength);
	printArray(arrrr, arrrrLength);
	int numToSearch = readPositiveNum(" num to search ?? ");
	short numPosition = searchIndexArray(arrrr, numToSearch, arrrrLength);
	if (numPosition == -1)
		cout << "The number is not found ;-(";
	else
		cout << "the number is found at position " << numPosition << endl;
	cout << "the number is found at order" << numPosition + 1;

	if (!isNumberInArray(numToSearch, arrrr, arrLength))
		cout << "no, is not found";
	else
		cout << "yes, is found";

	int arr[100];
	int arrLength = 0;
	inputUserNumberInArray(arr, arrLength);
	printArray(arr, arrLength);

	float userInput;
	cin >> userInput;
	cout << "My abs Result: " << myABS_Fun(userInput);
	cout << "c++ abs Result: " << abs(userInput);
	int arr[100];
	int arrLength1 = 0; int arrLength2 = 0;

	fillArraywithRandom(arr, arrLength1);
	
	int arr2[100];
	string readEvenOdd="";
	cout << "Enter \"odd\" or \"even\" ";
	cin >> readEvenOdd;
	printArray(arr, arrLength1);
	cout <<  oddEvenCountArray(readEvenOdd,arr,arr2,arrLength1, arrLength2) << " Times";
}