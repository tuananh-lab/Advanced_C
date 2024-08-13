
#include "Student.h"

using namespace std;

/*
 * Class: Person
 * Function: setName
 * Description: This function sets the name of a student.
 * Input:   _name (name of the student)
 * Output:  None
 */
void Person::setName(string _name)
{
    name = _name;
}

/*
 * Class: Person
 * Function: getName
 * Description: This function returns the name of a student.
 * Input:   None
 * Output:  name (name of the student)
 */
string Person::getName() const
{
    return name;
}

/*
 * Class: Person
 * Function: setAge
 * Description: This function sets the age of a student.
 * Input:   _age (age of the student)
 * Output:  None
 */
void Person::setAge(short int _age)
{
    age = _age;
}

/*
 * Class: Person
 * Function: getAge
 * Description: This function returns the age of a student.
 * Input:   None
 * Output:  age (age of the student)
 */
short int Person::getAge() const
{
    return age;
}

/*
 * Class: Person
 * Function: setGender
 * Description: This function sets the gender of a student.
 * Input:   _gender (gender of the student)
 * Output:  None
 */
void Person::setGender(Gender _gender)
{
    gender = _gender;
}

/*
 * Class: Person
 * Function: getGender
 * Description: This function returns the gender of a student.
 * Input:   None
 * Output:  gender (gender of the student)
 */
Gender Person::getGender() const
{
    return gender;
}

/*
 * Class: Person
 * Function: setID
 * Description: This function sets the ID of a student.
 * Input:   _ID (ID of the student)
 * Output:  None
 */
void Person::setID(short int _ID)
{
    ID = _ID;
}

/*
 * Class: Person
 * Function: getID
 * Description: This function returns the ID of a student.
 * Input:   None
 * Output:  ID (ID of the student)
 */
char Person::getID() const
{
    return ID;
}

/*
 * Class: Student
 * Function: setMath
 * Description: This function sets the Math score of a student.
 * Input:   _Math_score (Math score of the student)
 * Output:  None
 */
void Student::setMath(float _Math_score)
{
    Math_score = _Math_score;
}

/*
 * Class: Student
 * Function: getMath
 * Description: This function returns the Math score of a student.
 * Input:   None
 * Output:  Math_score (Math score of the student)
 */
float Student::getMath() const
{
    return Math_score;
}

/*
 * Class: Student
 * Function: setPhysic
 * Description: This function sets the Physics score of a student.
 * Input:   _Physic_score (Physics score of the student)
 * Output:  None
 */
void Student::setPhysic(float _Physic_score)
{
    Physic_score = _Physic_score;
}

/*
 * Class: Student
 * Function: getPhysic
 * Description: This function returns the Physics score of a student.
 * Input:   None
 * Output:  Physic_score (Physics score of the student)
 */
float Student::getPhysic() const
{
    return Physic_score;
}

/*
 * Class: Student
 * Function: setChemical
 * Description: This function sets the Chemistry score of a student.
 * Input:   _Chemical_score (Chemistry score of the student)
 * Output:  None
 */
void Student::setChemical(float _Chemical_score)
{
    Chemical_score = _Chemical_score;
}

/*
 * Class: Student
 * Function: getChemical
 * Description: This function returns the Chemistry score of a student.
 * Input:   None
 * Output:  Chemical_score (Chemistry score of the student)
 */
float Student::getChemical() const
{
    return Chemical_score;
}

/*
 * Class: Student
 * Function: getAverScore
 * Description: This function returns the average score of a student.
 * Input:   None
 * Output:  Average_score (average score of the student)
 */
float Student::getAverScore() const
{
    return (Math_score + Physic_score + Chemical_score) / 3;
}

/*
 * Class: Student
 * Function: setData
 * Description: This function sets the data of a student.
 * Input:   None
 * Output:  None
 */
void Student::setData()
{
    cout << "\t\t\tEnter Name: ";
    cin.ignore();
    string _name;
    getline(cin, _name);
    setName(_name);

    cout << "\t\t\tEnter Age: ";
    short int _age;
    while (!(cin >> _age) || _age < 0)
    {                                                        // Input validation
        cin.clear();                                         // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a positive integer for age: ";
    }
    setAge(_age);

    short int num = 0;
    do
    {
        cout << "\t\t\tEnter 1 for male and 2 for female: ";
        while (!(cin >> num) || (num != 1 && num != 2))
        {                                                        // Input validation
            cin.clear();                                         // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter 1 for male or 2 for female: ";
        }
    } while (num != 1 && num != 2);

    setGender(num == 1 ? Male : Female);

    cout << "\t\t\tEnter ID: ";
    char _ID;
    while (!(cin >> _ID) || _ID < 0)
    {                                                        // Input validation
        cin.clear();                                         // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a positive integer for ID: ";
    }
    setID(_ID);

    cout << "\t\t\tEnter Student Scores: " << endl;

    cout << "\t\t\tEnter Math Score: ";
    float _Math_score;
    while (!(cin >> _Math_score))
    {                                                        // Input validation
        cin.clear();                                         // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a valid floating point number for Math score: ";
    }
    setMath(_Math_score);

    cout << "\t\t\tEnter Physics Score: ";
    float _Physic_score;
    while (!(cin >> _Physic_score))
    {                                                        // Input validation
        cin.clear();                                         // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a valid floating point number for Physics score: ";
    }
    setPhysic(_Physic_score);

    cout << "\t\t\tEnter Chemistry Score: ";
    float _Chemical_score;
    while (!(cin >> _Chemical_score))
    {                                                        // Input validation
        cin.clear();                                         // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a valid floating point number for Chemistry score: ";
    }
    setChemical(_Chemical_score);

    // Clear the input buffer to avoid issues with further input
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

/*
 * Class: Student
 * Function: getData
 * Description: This function displays the data of a student.
 * Input:   None
 * Output:  None
 */
void Student::getData() const
{
    cout << "ID: " << getID() << endl;

    cout << "Name: " << getName() << endl;

    cout << "Age: " << getAge() << endl;

    cout << "Gender: " << (getGender() == Male ? "Male" : "Female") << endl;

    cout << "Math\t | \tPhysics | \tChemistry" << endl;
    cout << getMath() << "\t\t" << getPhysic() << "\t\t" << getChemical() << endl;

    cout << "Average Score: " << getAverScore() << endl;

    cout << "Rank: ";
    switch (getRank())
    {
    case Excellent:
        cout << "Excellent" << endl;
        break;
    case Good:
        cout << "Good" << endl;
        break;
    case Average:
        cout << "Average" << endl;
        break;
    case BelowAverage:
        cout << "Below Average" << endl;
        break;
    case Weak:
        cout << "Weak" << endl;
        break;
    default:
        break;
    }
}

/*
 * Class: Student
 * Function: getRank
 * Description: This function returns the rank of a student based on their average score.
 * Input:   None
 * Output:  rank (rank of the student)
 */
Rank Student::getRank() const
{
    if (getAverScore() >= 8.5 && getAverScore() <= 10)
        return Excellent;
    if (getAverScore() >= 7 && getAverScore() <= 8.4)
        return Good;
    if (getAverScore() >= 5.5 && getAverScore() <= 6.9)
        return Average;
    if (getAverScore() >= 4 && getAverScore() <= 5.4)
        return BelowAverage;
    return Weak;
}
