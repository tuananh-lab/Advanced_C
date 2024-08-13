#ifndef _STUDENT_H
#define _STUDENT_H

#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <limits>

using namespace std;

typedef enum Gender {
    Male,
    Female
} Gender;

typedef enum Rank {
    Excellent,
    Good,
    Average,
    BelowAverage,
    Weak
} Rank;

/*
* Class: Person
* Description: This class contains basic properties and methods of a Person object
*/
class Person {
private:
    string name;
    short int age;
    Gender gender;
    char ID;
public:
    Person() : name(""), age(0), gender(Male), ID(0) {}

    ~Person() {}

    void setName(string _name);
    string getName() const;

    void setAge(short int _age);
    short int getAge() const;

    void setGender(Gender _gender);
    Gender getGender() const;

    void setID(short int _ID);
    char getID() const;
};

/*
* Class: Student
* Description: This class contains basic properties and methods of a Student object
*/
class Student : public Person {
private:
    float Math_score;
    float Physic_score;
    float Chemical_score;
    float Average_score;
    Rank rank;

public:
    Student() : Person(), Math_score(0), Physic_score(0), Chemical_score(0), Average_score(0), rank(Excellent) {}

    ~Student() {}

    void setData();
    void getData() const;

    void setMath(float _Math_score);
    float getMath() const;

    void setPhysic(float _Physic_score);
    float getPhysic() const;

    void setChemical(float _Chemical_score);
    float getChemical() const;

    float getAverScore() const;

    Rank getRank() const;
};

#endif
