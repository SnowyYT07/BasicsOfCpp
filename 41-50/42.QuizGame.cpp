#include <iostream>


int main()
{
    using namespace std;

    string questions[] = {"1. What year was C++ created: ",
                          "2. Who invented C++?: ",    
                          "3. What is the Predecessor of C++: ",
                          "4. Is the Earth flat?: "};
    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                         {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                         {"A. C", "B. C+", "C. C--", "D. B++"},
                         {"A. Yes", "B. No", "C. Maybe", "D. What is Earth??"}};


    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++)
    {
        cout << "*******************************\n";
        cout << questions[i] << '\n';
        cout << "*******************************\n";

        for(int o = 0; o < sizeof(options[i])/sizeof(options[i][0]); o++)
        {
            cout << options[i][o] << '\n';
        }   
        cin >> guess;
        guess = toupper(guess); // Turn in Uppercase the input

        if(guess == answerKey[i]){
            cout << "Correct\n"; 
            score++;
        }   
        else{
            cout << "Wrong\n";
            cout << "Answer: " << answerKey[i] << '\n';
        }
    }

    cout << "***************************\n";
    cout << "*         RESULTS         *\n";
    cout << "***************************\n";

    cout << "Correct Guesses: " << score << '\n';
    cout << "# of Questions: " << size << '\n';
    cout << "SCORE: " << (score/(double)size)*100 << "%";
    return 0;
}