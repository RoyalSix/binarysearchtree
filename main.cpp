#include "Tree.h"

int main()
{
   Tree myTree;

 	bool inMenu = true;	// while the user is using the program this var is set to true and the menu keeps looping.
						// when the user wants to quit, it is set to false and the loop ends.
	char keyPressed;	// This var stores which menu selection the user picks.

	while ( inMenu )
	{
		cout<< endl << endl << endl;
		cout << "****************************************************" << endl;
		cout  <<"**  MENU:(press a character to select an option)  **" << endl;
 		cout << "****************************************************" << endl;
		cout<<"Q. [QUIT]     Quit."<<endl;
  		cout<<"D. [Display]  Display all values stored in the tree"<<endl;
 		cout<<"I. [Insert]   Insert an integer"<<endl;
		cout << endl;

		cout<<"M. [Maximum] Determine the maximum of all values stored in the tree" << endl;
		cout<<"A. [Average] Determine the average of all values stored in the tree" << endl;
		cout<<"H. [Height]  Determine the height of the tree" << endl;
		cout << "****************************************************" <<endl<< endl;

		cout<<"Your choice is: ";
		cin >> keyPressed ;

		int value;
		switch(keyPressed)
		{
			case 'M': case 'm'://Maximum
				cout << "[Maximum]:" << endl;
				cout << "Maximum value stored is:" << myTree.FindMaximum() << endl;
				break;

			case 'A': case 'a'://Average
				cout << "[Average]:" << endl;
				cout << "Average of all values stored is:" << myTree.FindAverage() << endl;
				break;

			case 'H': case 'h'://height
				cout << "[Height]:" << endl;
				cout << "Height of the tree is:" << myTree.FindHeight()<< endl;
				break;


			case 'Q': case 'q'://Quit
				cout << "[QUIT]:" << endl;
				inMenu = false;
				break;

			case 'D': case 'd':
				cout << "[Display]:" << endl;
				myTree.Display();
				break;

			case 'I': case 'i':
				cout << "[insert]:" << endl;
				cout << "Value to insert:";
				cin >> value;
				myTree.Insert(value);
				break;

			default:
				cout << "[?? UNKNOWN COMMAND]:" << endl;
				// Unrecognized key, do nothing
				break;
		}


	} // End of while loop

	return 0;
}
