/* 1st year 2nd Semester Project
Quest COVID-19 Vaccine Registration System*/
#include <iostream>

// #include <conio.h>
//#include <fstream>
using namespace std;
#include <string>
// 3rd Day of work on Project

int main()
{
    int option; // Option Slect from 1 to 5
    string name;
    // char name[30];          // name of any one
    string f_name;        // Father name of anyone
    string nic;           // cNIC of any one
    string subject;       // subject of teacher
    string designation;   // for designation of an Employee
    string department;    // Department of Student
    string rollno;        // Roll number of student
    string batch;         // Batch of Student
    string vaccine;       // product of vaccine
    string vc_center;     // Vaccinatation Center
    string district_addr; // full address of district
    int year;             /* Date for 1st dose of Vaccination*/
    int month;
    int day;
    char question[5]; // question character for yes or no
    string contact;   // for contact number
    int year1;        /* Date for 2nd dose of Vaccination*/
    int month1;
    int day1;
    int newbatch;
    int seatno; // for seat number in test

    cout << "\t\t\t\t\t\t *****Quest COVID-19 Vaccine Registration System***** \t\t\t\t\t\t |Legend Programmers|" << endl // Title of Program
         << endl
         << endl;
    cout << "\t\t\t\t\t\t Welcome" << endl
         << endl
         << endl;
    cout << "\t\t Enter your Identity " << endl
         << endl
         << endl;
    cout << "\t\t\tSelect any  Option  From 1 to 5" << endl;
    cout << " 1. Teacher " << endl;
    cout << " 2. student " << endl;
    cout << " 3. Employee " << endl;
    cout << " 4. Security " << endl;
    cout << " 5. New Admission Student" << endl;
    cout << "\t\t\tEnter the Option from above : ";
    cin >> option;

    if (option == 1)
    { // below is teacher's Info

        cout << "\t\t\t\t Welcome Teacher" << endl;
        cout << "\t\t Enter your Details for Registration of Vaccine in Quest Univerity"
             << endl;
        cout << "Enter Your Full Name : ";
        getline(cin, name); // For the name
                            // cin >>name;
                            // cin.getline(name , 30);

        cout << "Enter Your CNIC number with dashes : ";
        getline(cin, nic); // For the CNIC
        cout << "Enter your Subject : ";
        getline(cin, subject); // subject
        cout << "\t\t\t Enter Vaccine Product Name : ";
        getline(cin, vaccine);
        // Copied here above
        cout << "\t\t\t Enter Vaccination Center : ";
        getline(cin, vc_center); // Vaccination Center will be asked

        cout << "Enter the Full address of your District : ";
        getline(cin, district_addr); // District Address

        cout << "\t\t\t Enter the Date of first dose of Vaccination : " << endl;
        cout << "\t\t Enter year : ";
        cin >> year;
        cout << "\t\tEnter Month : ";
        cin >> month;
        cout << "\t\tEnter Day : ";
        cin >> day;
        cout << "\t\t\t The Date of 1st dose of Vaccine is : " << day << "/" << month << "/" << year << endl; // 1st dose of Vaccine Will be // Printed
        cout << "\t\t\t You had Vaccinated Second Dose or not ? " << endl;
        cout << "\t\tReply by Typing " << endl
             << "\t\t\t\t Y/N ";
        /* From Above Statment User Will be Asked Whether he/she had
           Vaccinated 2nd dose or not?
               by Typing y or n*/
        cout << endl
             << "Type : ";
        cin.getline(question, 5);
        switch (question[5])
        {
        case 'n':
            cout << "Enter the date of 2nd dose when you will be vaccinated : " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\t Enter Month : ";
            cin >> month1;
            cout << "\t\t Enter Day : ";
            cin >> day1;
            cout << "\t\t\t The Date of 2nd dose of Vaccine  Will be : " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "Thank you for using our Service \n\t\t\t come again for when you had Vaccinated Second Dose A code Will be Provided to you soon ";
            /*  a code will be provided to the user when he/she will come when he will be vaccinated 2nd dose*/
            break;
        case 'N':
            cout << "Enter the date of 2nd dose when you will be vaccinated : " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "\t\t\t The Date of 2nd dose of Vaccine  Will be : " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "Thank you for using our Service \n\t\t\t come again for when you had Vaccinated Second Dose A code Will be Provided to you soon ";
            /*  a code will be provided to the user when he/she will come when he will be vaccinated 2nd dose*/
            break;
        case 'Y':
            cout << "Enter the date of 2nd dose : " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "Congratulations for Fully  Vaccinated " << endl;
            cout << "\t\t\t your date of the Second Dose was : " << endl
                 << "\t\t\t\t " << day1 << "/" << month1 << "/" << year1 << endl;
            cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
            break;
        case 'y':
            cout << "Enter the date of 2nd dose : " << endl;
            cout << "\t\tEnter the Year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "Congratulation for Fully  Vaccinated " << endl;
            cout << "\t\t\t your date of the Second Dose was : " << endl
                 << "\t\t\t\t " << day1 << "/" << month1 << "/" << year1 << endl;
            cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
            break;
        default:
            cout << "Please Enter Valid Character Y/N  " << endl;
            break;
        }
        // cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
        cout << "Please Enter your Mobile Number so that we may contact you " << endl
             << "\t\t\t Type : ";
        cin >> contact;
        //    getline(cin, contact);
    }
    else if (option == 2)
    { // below is Student info who is Studying in university
        cout << "\t\t\t\t Welcome Student" << endl;
        cout << "\t\t Enter your Details Enter your Details for Registration of Vaccine in Quest Univerity" << endl;
        // Details of Student already Studying in University
        cout << "Enter Your Full Name : ";
        getline(cin, name); // For the name
                            // cin.getline(name , 30);
        cout << "Enter Your Father's Name : ";
        getline(cin, f_name); // For the Father name of Student

        cout << "Enter your  Batch year : ";
        getline(cin, batch); // for Batch year

        cout << "Enter your roll number \n\n\t\t for example type 20BE(TC)-14 or 20BS(CS)-14 ";
        cout << "\n\t\t Type : ";
        getline(cin, rollno); // For roll number in test

        cout << "Enter Your CNIC number with dashes : ";
        getline(cin, nic); // For the CNIC

        cout << "\t\t\t Enter Vaccine Product Name : ";
        getline(cin, vaccine);

        cout << "\t\t\t Enter Vaccination Center : ";
        getline(cin, vc_center);
        // Vaccination Center will be asked

        cout << "Enter the Full address of your District : ";
        getline(cin, district_addr); // District Address
        cout << "\t\t\t Enter the Date of first dose of Vaccination : " << endl;
        cout << "\t\t Enter year : ";
        cin >> year;
        cout << "\t\tEnter Month : ";
        cin >> month;
        cout << "\t\tEnter Day : ";
        cin >> day;
        cout << "\t\t\t The Date of 1st dose of Vaccine is : " << day << "/" << month << "/" << year << endl; // 1st dose of Vaccine Will be // Printed
        cout << "\t\t\t You had Vaccinated Second Dose or not ? " << endl;
        cout << "\t\tReply by Typing" << endl
             << " \t\t\t\t Y/N" << endl;
        /* From Above Statment Student Will be Asked Whether he/she had
           Vaccinated 2nd dose or not?
               by Typing y or n*/
        cout << endl
             << "Type : ";
        cin.getline(question, 5);
        // below is Switch Program for Yes or no
        switch (question[5])
        {
        case 'n':
            cout << "Enter the date of 2nd dose when you will be vaccinated " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "\t\t\t The Date of 2nd dose of Vaccine  Will be : " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "Thank you for using our Service \n\t\t\t come again for when you had Vaccinated Second Dose A code Will be Provided to you soon ";
            /*  a built in code will be provided to the user when he/she will come when he will be vaccinated 2nd dose*/
            break;
        case 'N':
            cout << "Enter the date of 2nd dose when you will be vaccinated " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "\t\t\t The Date of 2nd dose of Vaccine  Will be : " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "Thank you for using our Service \n\t\t\t come again for when you had Vaccinated Second Dose A code Will be Provided to you soon ";
            /*  a code will be provided to the user when he/she will come when he will be vaccinated 2nd dose*/
            break;

        case 'Y':
            cout << "Enter the date of 2nd dose" << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "Congratulations for Fully  Vaccinated " << endl;
            cout << "\t\t\t Your date of the Second Dose was : " << endl
                 << "\t\t\t\t " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
            break;
        case 'y':
            cout << "Enter the date of 2nd dose " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "Congratulations for Fully  Vaccinated " << endl;
            cout << "\t\t\t your date of the Second Dose was : " << endl
                 << "\t\t\t\t " << day1 << "/" << month1 << "/" << year1 << endl;
            cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
            break;
        default:
            cout << "Please Enter Valid Character Y/N  " << endl;
            break;
        }
        cout << "Please Enter your contact Number to reach you " << endl
             << "\t\t\t Type : ";
        getline(cin, contact);
    }

    else if (option == 3)
    { // Below is info if the employee of univeristy
        cout << "\t\t\t\t Welcome Employee" << endl;
        cout << "\t\t Enter your Details for Registration of Vaccine in Quest Univerity" << endl;
        cout << "Enter Your Full Name : ";
        getline(cin, name); // For the name
                            // cin.getline(name , 30);
        cout << "Enter Your CNIC number with dashes : ";
        getline(cin, nic); // For the CNIC
        cout << "Enter your Designation : ";
        getline(cin, designation); // For Profession of employee
        cout << "\t\t\t Enter Vaccine Product Name : ";
        getline(cin, vaccine);
        // Copied here above
        cout << "\t\t\t Enter Vaccination Center : ";
        getline(cin, vc_center); // Vaccination Center will be asked

        cout << "Enter the Full address of your District : ";
        getline(cin, district_addr); // District Address

        cout << "\t\t\t Enter the Date of first dose of Vaccination " << endl;
        cout << "\t\t Enter year : ";
        cin >> year;
        cout << "\t\tEnter Month : ";
        cin >> month;
        cout << "\t\tEnter Day : ";
        cin >> day;
        cout << "\t\t\t The Date of 1st dose of Vaccine is  is " << day << "/" << month << "/" << year << endl; // 1st dose of Vaccine Will be // Printed
        cout << "\t\t\t You had Vaccinated Second Dose or not ? " << endl;
        cout << "\t\tReply by Typing" << endl
             << " \t\t\t\t Y/N " << endl;
        /* From Above Statment User Will be Asked Whether he/she had
           Vaccinated 2nd dose or not?
               by Typing y or n*/
        cout << endl
             << "Type : ";
        cin.getline(question, 5);
        // below is Switch Satement for Yes no program
        switch (question[5])
        {
        case 'n':
            cout << "Enter the date of 2nd dose when you will be vaccinated " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "\t\t\t The Date of 2nd dose of Vaccine  Will be : " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "Thank you for using our Service \n\t\t\t come again for when you had Vaccinated Second Dose A code Will be Provided to you soon ";
            /*  a built in code will be provided to the user when he/she will come when he will be vaccinated 2nd dose*/
            break;
        case 'N':
            cout << "Enter the date of 2nd dose when you will be vaccinated " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "\t\t\t The Date of 2nd dose of Vaccine  Will be : " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "Thank you for using our Service \n\t\t\t come again for when you had Vaccinated Second Dose A code Will be Provided to you soon ";
            /*  a code will be provided to the user when he/she will come when he will be vaccinated 2nd dose*/
            break;
        case 'Y':
            cout << "Enter the date of 2nd dose " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "Congratulations for Fully  Vaccinated  " << endl;
            cout << "\t\t\t your date of the Second Dose was : " << endl
                 << "\t\t\t\t " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
            break;
        case 'y':
            cout << "Enter the date of 2nd dose " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "Congratulations for Fully  Vaccinated " << endl;
            cout << "\t\t\t your date of the Second Dose was : " << endl
                 << "\t\t\t\t " << day1 << "/" << month1 << "/" << year1 << endl;
            cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
            break;
        default:
            cout << "Please Enter Valid Character Y/N  " << endl;
            break;
        }
        cout << "Please Enter your Mobile Number so that we may contact you " << endl
             << "\t\t\t Type : ";
        cin >> contact;
        //   getline(cin, contact);
    }

    else if (option == 4)
    { ///                 below Program is for Security
        cout << "\t\t\t\t Welcome Security" << endl;
        cout << "\t\t Enter your Details for Registration of Vaccine in Quest Univerity" << endl;
        cout << "Enter Your Full Name : ";
        getline(cin, name); // For the name
        // cin.getline(name, 30);
        cout << "Enter Your CNIC number with dashes : ";
        getline(cin, nic); // For the CNIC
        cout << "Enter your Designation : ";
        getline(cin, designation); // For Profession of employee
        cout << "\t\t\t Enter Vaccine Product Name : ";
        getline(cin, vaccine);
        // Copied here above
        cout << "\t\t\t Enter Vaccination Center : ";
        getline(cin, vc_center); // Vaccination Center will be asked

        cout << "Enter the Full address of your District : ";
        getline(cin, district_addr); // District Address

        cout << "\t\t\t Enter the Date of first dose of Vaccination " << endl;
        cout << "\t\t Enter year : ";
        cin >> year;
        cout << "\t\tEnter Month : ";
        cin >> month;
        cout << "\t\tEnter Day : ";
        cin >> day;
        cout << "\t\t\t The Date of 1st dose of Vaccine is : " << day << "/" << month << "/" << year << endl; // 1st dose of Vaccine Will be // Printed
        cout << "\t\t\t You had Vaccinated Second Dose or not ? " << endl;
        cout << "\t\tReply by Typing " << endl
             << "\t\t\t\t Y/N ";
        /* From Above Statment User Will be Asked Whether he/she had
           Vaccinated 2nd dose or not?
               by Typing y or n*/
        cout << endl
             << "Type : ";
        cin.getline(question, 5);
        // below is Switch Satement for Yes no program
        switch (question[5])
        {
        case 'n':
            cout << "Enter the date of 2nd dose when you will be vaccinated " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "\t\t\t The Date of 2nd dose of Vaccine  Will be : " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "Thank you for using our Service \n\t\t\t come again for when you had Vaccinated Second Dose A code Will be Provided to you soon ";
            /*  a built in code will be provided to the user when he/she will come when he will be vaccinated 2nd dose*/
            break;
        case 'N':
            cout << "Enter the date of 2nd dose when you will be vaccinated " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "\t\t\t The Date of 2nd dose of Vaccine  Will be : " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "Thank you for using our Service \n\t\t\t come again for when you had Vaccinated Second Dose A code Will be Provided to you soon ";
            /*  a code will be provided to the user when he/she will come when he will be vaccinated 2nd dose*/
            break;
        case 'Y':
            cout << "Enter the date of 2nd dose " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "Congratulations for Fully  Vaccinated  " << endl;
            cout << "\t\t\t your date of the Second Dose was : " << endl
                 << "\t\t\t\t " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
            break;
        case 'y':
            cout << "Enter the date of 2nd dose " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "Congratulations for Fully  Vaccinated " << endl;
            cout << "\t\t\t your date of the Second Dose was : " << endl
                 << "\t\t\t\t " << day1 << "/" << month1 << "/" << year1 << endl;
            cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
            break;
        default:
            cout << "Please Enter Valid Character Y/N  " << endl;
            break;
        }
        cout << "Please Enter your Mobile Number so that we may contact you " << endl
             << "\t\t\t Type : ";
        cin >> contact;
    }

    else if (option == 5)
    { //     below is for New Admission Student
        cout << "\t\t\t\t Welcome " << endl;
        cout << "\t\t Enter your Details New Admission Student for Registration of Vaccine in Quest Univerity" << endl;
        cout << "Enter Your Full Name : ";
        getline(cin, name); // For the name
                            // cin.getline(name , 30);
        cout << "Enter Your Father's Name : ";
        getline(cin, f_name); // For the Father name of Student

        cout << "enter your new Batch year : ";
        cin >> newbatch; // for Batch

        cout << "Enter your seat number \n\n\t\t";
        cout << "\n\t\t Type : ";
        cin >> seatno; // For seat number in test

        cout << "Enter Your CNIC number with dashes : ";
        getline(cin, nic); // For the CNIC

        cout << "\t\t\t Enter Vaccine Product Name : ";
        getline(cin, vaccine);

        cout << "\t\t\t Enter Vaccination Center : ";
        getline(cin, vc_center); // Vaccination Center will be asked

        cout << "Enter the Full address of your District : ";
        getline(cin, district_addr); // District Address
        cout << "\t\t\t Enter the Date of first dose of Vaccination " << endl;
        cout << "\t\t Enter year : ";
        cin >> year;
        cout << "\t\tEnter Month : ";
        cin >> month;
        cout << "\t\tEnter Day : ";
        cin >> day;
        cout << "\t\t\t The Date of 1st dose of Vaccine is  is " << day << "/" << month << "/" << year << endl; // 1st dose of Vaccine Will be // Printed
        cout << "\t\t\t You had Vaccinated Second Dose or not ? " << endl;
        cout << "\t\tReply by Typing" << endl
             << "\t\t\t\t Y/N " << endl;
        /* From Above Statment Student Will be Asked Whether he/she had
           Vaccinated 2nd dose or not?
               by Typing y or n*/
        cout << endl
             << "Type : ";
        cin.getline(question, 5);
        // below is Switch Program for Yes or no
        switch (question[5])
        {
        case 'n':
            cout << "Enter the date of 2nd dose when you will be vaccinated " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "\t\t\t The Date of 2nd dose of Vaccine  Will be : " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "Thank you for using our Service \n\t\t\t come again for when you had Vaccinated Second Dose A code Will be Provided to you soon ";
            /*  a built in code will be provided to the user when he/she will come when he will be vaccinated 2nd dose*/
            break;
        case 'N':
            cout << "Enter the date of 2nd dose when you will be vaccinated " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "\t\t\t The Date of 2nd dose of Vaccine  Will be" << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "Thank you for using our Service \n\t\t\t come again for when you had Vaccinated Second Dose A code Will be Provided to you soon ";
            /*  a code will be provided to the user when he/she will come when he will be vaccinated 2nd dose*/
            break;

        case 'Y':
            cout << "Enter the date of 2nd dose : " << endl;
            cout << "\t\t Enter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "Congratulations for Fully  Vaccinated  " << endl;
            cout << "\t\t\t your date of the Second Dose was : " << endl
                 << "\t\t\t\t " << day1 << "/" << month1 << "/" << year1 << endl;

            cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
            break;
        case 'y':
            cout << "Enter the date of 2nd dose " << endl;
            cout << "\t\tEnter year : ";
            cin >> year1;
            cout << "\t\tEnter Month : ";
            cin >> month1;
            cout << "\t\tEnter Day : ";
            cin >> day1;
            cout << "Congratulations for Fully  Vaccinated " << endl;
            cout << "\t\t\t your date of the Second Dose was : " << endl
                 << "\t\t\t\t " << day1 << "/" << month1 << "/" << year1 << endl;
            cout << "\n\n\t\t\t\tThanks For Registration you will be Provided a slip From Quest University " << endl;
            break;
        default:
            cout << "Please Enter Valid Character Y/N  " << endl;
            break;
        }
        cout << "Please Enter your Mobile Number so that we may contact you " << endl
             << "\t\t\t Type : ";
        cin >> contact;
        // getline(cin ,contact );
    }
    else
    {
        cout << "\t\tYou had entered the Wrong Option " << endl;
        cout << "Please Enter Correct number " << endl;
    }
    // ***** --> end of the Program---****>
    // getch();
    system("pause>0");
    return 0;
}
