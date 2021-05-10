#include "include.hpp"


using namespace std;
bool executable = true; //change this if you want to compile this code and turn it into an executable
						//if you want to make changes to the program through changing the code, leave it false
vector<int>Stuff; 
string TranslateToMorse(string YourSentence); 
string TranslateToNormalLetters(char MorseLetter); 
bool DetermineIfMorseOrNot(string sentence); 
string FindOut(string ToTranslate); //basically just translate to morse but to keep it clean
int main()
{
	
	cout << "Hello, Thanks for downloading or looking at this code. This Program translates morsesentences to normal ones and reverse. When a new Word in Morse begins, please press the space key, if a new word beginns, please make 2 spaces. This sentence is meant to guide you for your first use." << endl; 
	if (executable)
	{
		cout << "Please enter in your Sentence (Morse or Normal)" << endl;
		while (true)
		{
			string sentence;
			

			getline(cin, sentence);
			bool IsMorse = DetermineIfMorseOrNot(sentence); //DetermineIfMorseOrNot(sentence);  

			string result;
			if (!IsMorse)
			{
				for (char letter : sentence)
				{
					result += TranslateToNormalLetters(letter);
				}
				cout << result << endl;
				

			}
			else
			{
				result = TranslateToMorse(sentence);
				cout << result << endl;
			}


		
		}
	}return 0;
		
		string YourMessage = ""; //change this to your message if executable is false 
		string result;
		//	result = TranslateToMorse(YourMessage); Uncomment this if you have a normal sentence 

		for (char letter : YourMessage)//comment this if you want to translate it to morse
		{
			result += TranslateToNormalLetters(letter);

		}
		cout << result << endl;
		return 0;
	
	
}
string TranslateToMorse(string YourSentence)
{
	int newLetter; 
	int keep = 0; 
	string translate;
	string output; 
	int a = YourSentence.length() - 1; 
	while (true)
	{
		newLetter = YourSentence.find(" "); //we pinpoint to the space and translate everything before it 
		if (newLetter == -1)
		{
			output += FindOut(YourSentence); 
			break; 
		}

		translate = YourSentence.substr(0, newLetter); //cut a little bit idk, kind happened 
		output += FindOut(translate);					//go to the ultra boring function you should totally not look at 
		keep = newLetter+1;							//to cut the "main" string after the space 
		
		YourSentence =  YourSentence.substr(keep); // cut this after the space 
	}
		return output; 
}
string FindOut(string ToTranslate)
{
	//Some boring morse code stuff, please don't look at it 
	if (ToTranslate == ".-")return "A";
	if (ToTranslate == "-...") return "B"; 
	if (ToTranslate == "-.-.")return "C";
	if (ToTranslate == "-..")return "D";
	if (ToTranslate == ".")return "E";
	if (ToTranslate == "..-.")return "F";
	if (ToTranslate == "--.")return "G";
	if (ToTranslate == "....")return "H";
	if (ToTranslate == "..")return "I";
	if (ToTranslate == ".---")return "J";
	if (ToTranslate == "-.-")return "K";
	if (ToTranslate == ".-..")return "L";
	if (ToTranslate == "--")return "M";
	if (ToTranslate == "-.")return "N";
	if (ToTranslate == "---")return "O";
	if (ToTranslate == ".--.")return "P";
	if (ToTranslate == "--.-")return "Q";
	if (ToTranslate == ".-.")return "R";
	if (ToTranslate == "...")return "S";
	if (ToTranslate == "-")return "T";
	if (ToTranslate == "..-")return "U";
	if (ToTranslate == "...-")return "V";
	if (ToTranslate == ".--")return "W";
	if (ToTranslate == "-..-")return "X";
	if (ToTranslate == "-.--")return "Y";
	if (ToTranslate == "--..")return "Z";
	if (ToTranslate == "-----")return "0";
	if (ToTranslate == ".----")return "1";
	if (ToTranslate == "..---")return "2";
	if (ToTranslate == "...--")return "3";
	if (ToTranslate == "....-")return "4";
	if (ToTranslate == ".....")return "5";
	if (ToTranslate == "-....")return "6";
	if (ToTranslate == "--...")return "7";
	if (ToTranslate == "---..")return "8";
	if (ToTranslate == "----.")return "9";
	if (ToTranslate == ".-.-.-")return ".";
	if (ToTranslate == "--..--")return ",";
	if (ToTranslate == "..--..")return "?";
	if (ToTranslate == "-...-")return "=";
	if (ToTranslate == "-.-.--") return "!"; 
	if(ToTranslate ==  ".--.-.") return "@"; 
	if (ToTranslate == "---...") return ":";
	if (ToTranslate == "-.-.-") return ";";
	if (ToTranslate == ".-...")return "&";
	if (ToTranslate == ".-.-.")return "+";
	if (ToTranslate == "-....-")return "-";
	if (ToTranslate == "-.--.")return "(";
	if (ToTranslate == "-.--.-")return ")";
	if (ToTranslate == ".-..-.")return "\"";
	if (ToTranslate == ".-.-")return "Ä";
	if (ToTranslate == "---.")return "Ö";
	if (ToTranslate == "..--")return "Ü";
	if (ToTranslate == "..-.-") return "_"; 
	if (ToTranslate == "-..-.") return "/"; 
	if (ToTranslate.empty())
	{
		return " ";
	}
	return " "; 
}
string TranslateToNormalLetters(char MorseLetter)
{
	//again, some boring morse code stuff 
	switch (MorseLetter)
	{
	case 'A': return ".- "; 
	case 'a': return ".- "; 
	case 'B': return "-... ";
	case 'b': return "-... ";
	case 'C': return "-.-. ";
	case 'c': return "-.-. ";
	case 'D': return "-.. ";
	case 'd': return "-.. ";
	case 'E': return ". ";
	case 'e': return ". ";
	case 'F': return "..-. ";
	case 'f': return "..-. ";
	case 'G': return "--. ";
	case 'g': return "--. ";
	case 'H': return ".... ";
	case 'h': return ".... ";
	case 'I': return ".. ";
	case 'i': return ".. ";
	case 'J': return ".--- ";
	case 'j': return ".--- ";
	case 'K': return "-.- ";
	case 'k': return "-.- ";
	case 'L': return ".-.. ";
	case 'l': return ".-.. ";
	case 'M': return "-- ";
	case 'm': return "-- ";
	case 'N': return "-. ";
	case 'n': return "-. ";
	case 'O': return "--- ";
	case 'o': return "--- ";
	case 'P': return ".--. ";
	case 'p': return ".--. ";
	case 'Q': return "--.- ";
	case 'q': return "--.- ";
	case 'R': return ".-. ";
	case 'r': return ".-. ";
	case 'S': return "... ";
	case 's': return "... ";
	case 'T': return "- ";
	case 't': return "- ";
	case 'U': return "..- ";
	case 'u': return "..- ";
	case 'V': return "...- ";
	case 'v': return "...- ";
	case 'W': return ".-- ";
	case 'w': return ".-- ";
	case 'X': return "-..- ";
	case 'x': return "-..- ";
	case 'Y': return "-.-- ";
	case 'y': return "-.-- ";
	case 'Z': return "--.. ";
	case 'z': return "--.. ";
	case '0': return "----- ";
	case '1': return ".---- ";
	case '2': return "..--- ";
	case '3': return "...-- ";
	case '4': return "....- ";
	case '5': return "..... ";
	case '6': return "-.... ";
	case '7': return "--... ";
	case '8': return "---.. ";
	case '9': return "----. ";
	case '_': return "..-.- "; 
	case ',': return "--..-- ";
	case '.': return ".-.-.- "; 
	case '?': return "..--.. "; 
	case '=': return "-...- "; 
	case '!': return "-.-.-- ";
	case '@': return ".--.-. ";
	case ':': return "---... ";
	case ';': return "-.-.- ";
	case '&': return ".-... ";
	case '+': return ".-.-. ";
	case '-': return "-....- ";
	case '(': return "-.--. ";
	case ')': return "-.--.- ";
	case '\"': return ".-..-. ";
	case 'Ä': return ".-.- ";
	case 'ä': return ".-.- ";
	case 'Ö': return "---. ";
	case 'ö': return "---. ";
	case 'Ü': return "..-- ";
	case 'ü': return "..-- ";
	case "/": return "-..-."; 
	case NULL: return " "; 
	default:
		break;
	}
	return " "; 
}
bool DetermineIfMorseOrNot(string sentence)
{
	if (false) //If you are sure it is a morse code or not, change this. Otherwise, it will auto-detect 
	{
		return true; 
	}
	int E_index = sentence.find("E");
	int T_Index = sentence.find("T");
	int A_Index = sentence.find("A"); 
	int N_Index = sentence.find("N");
	int X_Index = sentence.find("X"); 
	int I_Index = sentence.find("I"); 
	int e_index = sentence.find("e");
	int t_Index = sentence.find("t");
	int a_Index = sentence.find("a");
	int n_Index = sentence.find("n");
	int x_Index = sentence.find("x");
	int i_index = sentence.find("i"); 
	
	if (E_index == -1 && T_Index == -1 && A_Index == -1 && N_Index == -1 && X_Index == -1 && I_Index == -1 &&  e_index == -1 && t_Index == -1 && a_Index == -1 && n_Index == -1 && x_Index == -1 && i_index == -1)
	{
		return true; 
	}
	return false; 
}
