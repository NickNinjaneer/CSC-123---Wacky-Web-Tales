//
//  Program: main.cpp
//  Wacky Web Tales
//
//  Created by Nick Williams on 8/22/14.
//  Copyright (c) 2014 Ninjaneer. All rights reserved.
//
//  Description: A User is prompted to enter specific types of words based on
//               program suggestions. At the end of the final word entered,
//               the prgram clears the screen and presents a custom Mad Lib
//               containing the user's entries. 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //String variable assignments
    string month, day_of_week;
    string grade_level;
    string adjOne, adjTwo, adjThree, adjFour;
    string age, randomNumber;
    string friendName;
    string he_she, he_she_modifier;
    string noun, verb, location;
    string drug;
    string house_part;
    string Yes_No;
    string famous_person;
    string drink;
    
    //User Introduction
    cout << "You found a stoopid Mad Lib!" << endl << endl;
    cout << "Would you like to continue?" << endl;
    cout << "(Press Return after each entry)" << endl;
    cin >> Yes_No;
    
    {
        if (Yes_No == "No" || Yes_No == "no" || Yes_No == "NO" || Yes_No == "N" || Yes_No == "n")
            cout << "Too Bad! You don't have a choice." << endl;
        else
            cout << "Great!" << endl;
    }
    
    //User Variable Entry
    cout << "Enter any Month of the Year! ";
    cin >> month;
    
    cout << "Perfect! Now enter a Day of the Week! ";
    cin >> day_of_week;
    
    cout << "Pick one: he or she. ";
    cin >> he_she;
    
    cout << "Splendid! Please enter a Grade Level, like preschool, 8th grade, or sophomore. ";
    cin >> grade_level;
    
    cout << "Not sure that would have been my first choice, but now enter an Adjective! ";
    cin >> adjOne;
    
    cout << "Gooooood. Enter another Adjective! ";
    cin >> adjTwo;
    
    cout << "Really?! Let's try that again. Enter another Adjective. ";
    cin >> adjThree;
    
    cout << "That was better. Give me one more final Adjective. ";
    cin >> adjFour;
    
    cout << "We are done with the languagey stuff for now. How old are you? ";
    cin >> age;
    
    cout << "Type a random number. ";
    cin >> randomNumber;
    
    cout << "Type someone's first name. ";
    cin >> friendName;
    
    cout << "Give me a Noun. ";
    cin >> noun;
    
    cout << "Now a present-tense Verb. ";
    cin >> verb;
    
    cout << "Now a Location! Quickly! ";
    cin >> location;
    
    cout << "I know, I know. We're almost there." << endl << endl;
    cout << "Name a Famous Person. ";
    cin >> famous_person;
    
    cout << "This one will be fun. Name the first Drug that comes to mind. ";
    cin >> drug;
    
    cout << "Now name an exterior part of a house, like a door, window, siding, etc. ";
    cin >> house_part;
    
    cout << "One more! What is your least favorite drink in the whole wide world? ";
    cin >> drink;
    
    {
        // Conversion for proper he/she pronoun usage
        if (he_she == "he" || he_she == "He")
            he_she_modifier = "his";
        else if
            (he_she == "she" || he_she == "She")
            he_she_modifier = "her";
        else
            (he_she_modifier = "their");
    }
    
    {
        //Clears screen prior to Paragraph
        cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
        cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
        cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
        cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
        cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
        cout << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
    }
    
    
    {
        // Madlib Output
        cout << "Now it's time for a stoopid Mad Lib!" << endl << endl
    
        << "We're halfway through the month of " << month << ", "
        << "and you know what that means!" << endl << endl
    
        << "All of the " << grade_level << " kids are returning to school!" << endl << endl
    
        << "But not everyone wants a " << adjOne << " education." << endl << endl
        
        << "At the age of " << age << " years old, your friend " << friendName << "," << endl
        << "bored with the usual " << adjTwo << " classes and coursework, dropped out of" << endl
        << "school and decided " << he_she << " wanted to pursue a career in" << endl
        << adjThree << " " << noun << " studies. " << friendName << " thought it would" << endl
        << "be a " << adjFour << " idea to travel to " << location << ", seek out " << endl
        << famous_person << ", " << verb << " a bunch of " << drug << ", and \"see what happens.\"" << endl
        << endl << "Classes start " << day_of_week << ", so expect a knock on your " << house_part << endl
        << "in " << randomNumber << " minutes. " << friendName << " will want to share a glass of " << endl
        << drink << " and tell you all about " << he_she_modifier << " newfound path." << endl << endl
        << "I suggest not answering the " << house_part << ".";
    }
    
    return 0;
}


