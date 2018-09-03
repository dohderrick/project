 #include <iostream>
  #include <string>

    char checkGrade(int num){
        char Grade = 'Z';

        if (num > 79 ) {
            Grade = 'A';
        }
        else if (num > 69 && num < 80) {
            Grade = 'B';
        }
        else if (num > 59 && num < 79) {
            Grade = 'C';
        }
        else if (num > 59 && num < 71) {
            Grade = 'D';
        }
        else if (num < 49) {
            Grade = 'F';
        }

        return Grade;
    };

    string printMessage(char Grade){
        std::string msg;

        switch (Grade)
        {
        case 'A':
            msg =  "Perfect! You got a: "  + Grade;
            break;
        case 'B':
            msg =  "Could've been worse. You got a: " + Grade;
            break;
        case 'C':
            msg =  "It's okay I guess, you got a: " + Grade;
            break;
        case 'D':
            msg =  "Uggh.. You got a: " + Grade;
            break;
        case 'F':
            msg =  "Better luck next time! You got a: " + Grade;
            break;
        case default:
            msg =  "Undefined value! Make sure it's a value from 0-100!";
            break;
        }

        return msg;
    };

    int main()
    {
        int numericalGrade;
        char Grade;

            cout << "Enter the grade you got on that test: ";
            cin >> numericalGrade;
            cout << "\n\n\n";

            // at least one line ...
            cout << printMessage( checkGrade(numericalGrade) );

            cout << "\n\n\n\t\t\t";
            return 0;
        }