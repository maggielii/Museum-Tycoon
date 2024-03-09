#include <iostream>
#include <windows.h>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    string name, garbage;
    int daysOpened = 0, mainMenuChoice = 0, restart = 1;
    int instructionsChoice, statsChoice, getArtifactsChoice, inventoryChoice, artifactStoreChoice, startDayChoice, admissionsFeeChoice, payBillsChoice, billsSelectChoice;
    const double teamMemberCost = 1000, searchCost = 2500, digCost = 5000, advertisementCost = 100, decorationCost = 100;
    double newAdmissionsFee;
    double admissionsFee = 0;
    long long numberOfCustomers, artifactsFound, teamQuantity, digQuantity, searchQuantity, advertisementQuantity, decorationQuantity, currentArtifactsFound, advertisementEffect, decorationEffect;
    long long money = 10000, visitorAppeal = 0, teamMembers = 0, artifacts = 0, artifactSearchMax = 10, artifactSearchMin = 1, artifactDigMin = 5, artifactDigMax = 15, advertisements = 0, decorations = 0, customerMin = 0, customerMax = 0, billFee = 2, bills = 0;
    long double profit, namesProfit, friendProfit, friendMoney = 0;
    //friend
    int numberMax = 50, numberMin = 0, friendNumberOfCustomers, friendNumberOfCustomersAddition, friendNumberOfCustomersSubtraction, friendBills;

    do//restart/exit code
    {
        system( "cls" );

        //opening screen
        cout << endl;
        cout << endl;
        cout << "****           ****  *****     *****   *************   ***************  *****      *****  ****           ****" << endl;
        cout << "******       ******  *****     *****  ***************  ***************  *****      *****  ******       ******" << endl;
        cout << "*******     *******  *****     *****  *****            *****            *****      *****  *******     *******" << endl;
        cout << "***** ******* *****  *****     *****  *****            *****            *****      *****  ***** ******* *****" << endl;
        cout << "*****   ***   *****  *****     *****  **************   ***************  *****      *****  *****   ***   *****" << endl;
        cout << "*****    *    *****  *****     *****   **************  ***************  *****      *****  *****    *    *****" << endl;
        cout << "*****         *****  *****     *****            *****  *****            *****      *****  *****         *****" << endl;
        cout << "*****         *****  *****     *****            *****  *****            *****      *****  *****         *****" << endl;
        cout << "*****         *****  ***************  ***************  ***************  ****************  *****         *****" << endl;
        cout << "*****         *****   *************    *************   ***************   **************   *****         *****" << endl;
        cout << endl;
        cout << "*******************  *****     *****   *************    *************    *************    *********     *****" << endl;
        cout << "*******************  *****     *****  ***************  ***************  ***************   **********    *****" << endl;
        cout << "       *****         *****     *****  *****            *****     *****  *****     *****   ***** *****   *****" << endl;
        cout << "       *****          *****   *****   *****            *****     *****  *****     *****   *****  *****  *****" << endl;
        cout << "       *****           ***********    *****            *****     *****  *****     *****   *****  *****  *****" << endl;
        cout << "       *****             *******      *****            *****     *****  *****     *****   *****   ***** *****" << endl;
        cout << "       *****              *****       *****            *****     *****  *****     *****   *****   ***** *****" << endl;
        cout << "       *****              *****       ***************  ***************  ***************   *****    **********" << endl;
        cout << "       *****              *****        *************    *************    *************    *****    **********" << endl;
        cout << endl;
        cout << endl;
        system( "pause" );
        system( "cls" );

        //introduction screen
        cout << "What is your name? My name is: ";
        cin >> name;
        cout << endl;
        cout << "Hello, " << name << ". Welcome to museum tycoon!";
        cout << endl;
        cout << endl;
        cout << "You and your friend are archeologists who enroll in a competition involving the search for the best historical" << endl;
        cout << "artifact. You are hiking together in the woods when you guys suddenly spot a rare historical artifact that will" << endl;
        cout << "allow you to win the competition, which you both want. Since you guys cannot decide on who discovered it first," << endl;
        cout << "and therefore gets to keep the artifact, a 10 day challenge is set up to see who is most deserving of keeping it. In" << endl;
        cout << "this challenge, you will start off with $10,000, and the goal is to develop the best museum by including artifacts" << endl;
        cout << "to display, and improving elements to attract visitors. In the end, if your museum can generate the most" << endl;
        cout << "money, you get to keep this artifact and win. However, if you do not generate the most money, you will not get to keep" << endl;
        cout << "the artifact consequently losing the competition, and this game." << endl;
        cout << endl;
        system( "pause" );
        system( "cls" );

        do//precommand to exit/restart code
        {
            //main menu
            system( "cls" );
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << "                                                Main Menu" << endl;
            cout << "                                                _________" << endl << endl;
            cout << "                                                0. Exit or Restart Game" << endl;
            cout << "                                                1. Game Instructions" << endl;
            cout << "                                                2. Inventory" << endl;
            cout << "                                                3. Get Artifacts" << endl;
            cout << "                                                4. Buy Upgrades" << endl;
            cout << "                                                5. Set Admissions Fee" << endl;
            cout << "                                                6. Start The Day" << endl;
            cout << "                                                7. Pay Bills" << endl;
            cout << "                                                8. Stats and Leaderboard" << endl << endl;
            cout << "                                                Please make a selection: ";

            do//error trap
            {
                if(!cin.good())
                {
                    cin.clear();
                    cin >> garbage;
                    cout << "Invalid input try again: ";
                }
                if(mainMenuChoice != 0 && mainMenuChoice != 8 && mainMenuChoice != 1 && mainMenuChoice != 2 && mainMenuChoice != 3 && mainMenuChoice != 4 && mainMenuChoice != 5 && mainMenuChoice != 6 && mainMenuChoice != 7 && mainMenuChoice != 12345)
                {
                    cout << "Invalid input try again: ";
                }
                cin >> mainMenuChoice;
            }while(mainMenuChoice != 0 && mainMenuChoice != 8 && mainMenuChoice != 1 && mainMenuChoice != 2 && mainMenuChoice != 3 && mainMenuChoice != 4 && mainMenuChoice != 5 && mainMenuChoice != 6 && mainMenuChoice != 7 && mainMenuChoice != 12345 || !cin.good());
            cout << endl << endl;
            system( "pause" );
            system( "cls" );

                //main menu choice 2 for getting artifacts
                if(mainMenuChoice == 3)
                {
                    do// do this while choice is not 0
                    {
                        system( "cls" );
                        cout << endl;
                        cout << "\tGET ARTIFACTS\n";
                        cout << "_____________________________________________" << endl;
                        cout << "0. Go back to main menu.\n";
                        cout << "1. Expand team. (Each member increases min and max by 2): $" << teamMemberCost << endl;
                        cout << "2. Start a search for artifacts. (Min:" << artifactSearchMin << " Max:" << artifactSearchMax << "): $" << searchCost << endl;
                        cout << "3. Start a dig project for artifacts. (Min:" << artifactDigMin << " Max:" << artifactDigMax << "): $" << digCost << endl;
                        cout << "\nWhat would you like to do?: ";

                        do//error trap
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                cin >> garbage;
                                cout << "Invalid input try again: ";
                            }

                        cin >> getArtifactsChoice;

                            if(getArtifactsChoice < 0 || getArtifactsChoice > 3)
                            {
                                cout << "Invalid input try again: ";
                            }
                        }while(getArtifactsChoice < 0 || getArtifactsChoice > 3 || !cin.good());

                        if(getArtifactsChoice == 1)//expand team
                        {
                            cout << "How many members would you like to recruit?: ";

                            do//error trap
                            {
                                if(!cin.good())
                                {
                                    cin.clear();
                                    cin >> garbage;
                                    cout << "Invalid input try again: ";
                                }

                                cin >> teamQuantity;

                                if(teamQuantity < 0)
                                {
                                    cout << "Invalid input try again: ";
                                }

                            }while(teamQuantity < 0 || !cin.good());

                            if(money < teamQuantity*teamMemberCost)
                            {
                                cout << "You don't have enough money" << endl;
                            }

                            if(money >= teamQuantity*teamMemberCost)
                            {
                                //effects of team members
                                teamMembers += teamQuantity;
                                money -= teamQuantity * teamMemberCost;
                                artifactSearchMax += 2 * teamQuantity;
                                artifactSearchMin += 2 * teamQuantity;
                                artifactDigMax += 2 * teamQuantity;
                                artifactDigMin += 2 * teamQuantity;

                                cout << "You recruited " << teamQuantity << " team members today!" << endl;
                            }

                        }

                        if(getArtifactsChoice == 2)//start a search
                        {
                            cout << "How many searches would you like to conduct?: ";

                            do//error trap
                            {
                                if(!cin.good())
                                {
                                        cin.clear();
                                        cin >> garbage;
                                        cout << "Invalid input try again: ";
                                }

                                cin >> searchQuantity;

                                if(searchQuantity < 0)
                                {
                                    cout << "Invalid input try again: ";
                                }

                            }while(searchQuantity < 0 || !cin.good());

                            if(money < searchQuantity*searchCost)
                            {
                                cout << "You don't have enough money" << endl;
                            }

                            if(money >= searchQuantity*searchCost)
                            {
                                money -= searchQuantity * searchCost;

                                artifactsFound = 0;

                                for(int x = searchQuantity; x > 0; x--)//finding artifacts
                                {
                                    currentArtifactsFound = rand()%(artifactSearchMax-artifactSearchMin+1)+artifactSearchMin;
                                    artifactsFound += currentArtifactsFound;
                                }
                                artifacts += artifactsFound;
                                cout << "You found " << artifactsFound << " artifacts today!" << endl;
                            }

                        }

                        if(getArtifactsChoice == 3)//start a dig project
                        {
                            cout << "How many dig projects would you like to fund?: ";
                            do//error trap
                            {
                                 if(!cin.good())
                                {
                                        cin.clear();
                                        cin >> garbage;
                                        cout << "Invalid input try again: ";
                                }

                                cin >> digQuantity;

                                if(digQuantity < 0)
                                {
                                    cout << "Invalid input try again: ";
                                }

                            }while(digQuantity < 0 || !cin.good());

                            if(money < digQuantity*digCost)
                            {
                                cout << "You don't have enough money" << endl;
                            }

                            if(money >= digQuantity*digCost)
                            {
                                money -= digQuantity * digCost;

                                artifactsFound = 0;

                                for(int y = digQuantity; y > 0; y--)//finding artifacts
                                {
                                    currentArtifactsFound = rand()%(artifactDigMax-artifactDigMin+1)+artifactDigMin;
                                    artifactsFound += currentArtifactsFound;
                                }
                                artifacts += artifactsFound;
                                cout << "You found " << artifactsFound << " artifacts today!" << endl;
                            }
                        }

                        system( "pause" );
                    }while(getArtifactsChoice != 0);
                }

                else if(mainMenuChoice == 2)//inventory
                {
                    system(" cls ");
                    cout << endl;
                    cout << "\tINVENTORY\n";
                    cout << "_____________________________________________" << endl;
                    cout << "Money: \t\t\t$" << setprecision(2) << fixed <<  money << endl << endl;
                    cout << "Artifacts: \t\t" << artifacts << endl << endl;
                    cout << "Team Members: \t\t" << teamMembers << endl << endl;
                    cout << endl;
                    cout << "\tUPGRADES INVENTORY\n";
                    cout << "_____________________________________________" << endl;
                    cout << "Advertisements: \t" << advertisements << endl << endl;
                    cout << "Decorations: \t\t" << decorations << endl << endl;
                    cout << endl;
                    cout << "\tPRICES OVERVIEW\n";
                    cout << "_____________________________________________" << endl;
                    cout << "Bills Due: \t\t$" << setprecision(2) << fixed << bills << endl;
                    cout << "Admissions Fee: \t$" << setprecision(2) << fixed << admissionsFee << endl << endl;
                    cout << "Type 0 to go back to main menu.\n";

                    do//error trap
                    {
                        if(!cin.good())
                        {
                            cin.clear();
                            cin >> garbage;
                            cout << "Invalid input try again: ";
                        }

                        cin >> inventoryChoice;

                        if(inventoryChoice != 0)
                        {
                            cout << "Invalid input try again: ";
                        }

                    }while(inventoryChoice != 0 || !cin.good());
                }

                else if(mainMenuChoice == 12345)//CHEAT CODE
                {
                    money += 1000000000;
                    artifacts += 0;
                    teamMembers += 0;
                    daysOpened = 10;
                }

                else if(mainMenuChoice == 4)//upgrade store
                {
                    do// do this while choice is not 0
                    {
                        system(" cls ");
                        cout << endl;
                        cout << "\tUPGRADE STORE\n";
                        cout << "_____________________________________________" << endl;
                        cout << "0. Go back to main menu.\n";
                        cout << "1. Buy Advertisements(Brings in %10 more customers each): $" << advertisementCost << endl;
                        cout << "2. Buy Decorations(Bring in %5 more customers each): $" << decorationCost << endl;
                        cout << "\nWhat would you like to do?: ";

                        do//error trap
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                cin >> garbage;
                                cout << "Invalid input try again: ";
                            }

                            cin >> artifactStoreChoice;

                            if(artifactStoreChoice < 0 || artifactStoreChoice > 2)
                            {
                                cout << "Invalid input try again: ";
                            }
                        }while(artifactStoreChoice < 0 || artifactStoreChoice > 2 || !cin.good());

                        if(artifactStoreChoice == 1)//buy advertisements
                        {
                            cout << "How many advertisements would you like to purchase?: ";
                           do//error trap
                            {
                                if(!cin.good())
                                {
                                    cin.clear();
                                    cin >> garbage;
                                    cout << "Invalid input try again: ";
                                }

                                cin >> advertisementQuantity;

                                if(advertisementQuantity < 0)
                                {
                                    cout << "Invalid input try again: ";
                                }
                            }while(advertisementQuantity < 0 || !cin.good());

                            if(money < advertisementQuantity*advertisementCost)
                            {
                                cout << "You don't have enough money" << endl;
                                system( "pause" );
                            }

                            if(money >= advertisementQuantity*advertisementCost)
                            {
                                cout << "You bought " << advertisementQuantity << " advertisements today!" << endl;

                                //effects of advertisements
                                advertisements += advertisementQuantity;
                                money -= advertisementQuantity * advertisementCost;
                                system ( "pause" );
                            }
                        }

                        if(artifactStoreChoice == 2)//buy decorations
                        {
                            cout << "How many decorations would you like to purchase?: ";
                           do//error trap
                            {
                                if(!cin.good())
                                {
                                    cin.clear();
                                    cin >> garbage;
                                    cout << "Invalid input try again: ";
                                }

                                cin >> decorationQuantity;

                                if(decorationQuantity < 0)
                                {
                                    cout << "Invalid input try again: ";
                                }
                            }while(decorationQuantity < 0 || !cin.good());


                            if(money < decorationQuantity*decorationCost)
                            {
                                cout << "You don't have enough money" << endl;
                                system( "pause" );
                            }

                            if(money >= decorationQuantity*decorationCost)
                            {
                                cout << "You bought " << decorationQuantity << " decorations today!" << endl;

                                //effects of decorations
                                decorations += decorationQuantity;
                                money -= decorationQuantity * decorationCost;
                                system ( "pause" );
                            }
                        }

                    }while(artifactStoreChoice != 0);
                }


                else if(mainMenuChoice == 5)//set admissions fee
                {
                    do// do this while choice is not 0
                    {
                        system(" cls ");
                        cout << endl;
                        cout << "\tSET ADMISSIONS FEE\n";
                        cout << "_____________________________________________" << endl;
                        cout << "0. Go back to main menu.\n";
                        cout << "1. Set admissions fee" << endl;
                        cout << "\nWhat would you like to do? ";

                        do//error trap
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                cin >> garbage;
                                cout << "Invalid input try again: ";
                            }

                        cin >> admissionsFeeChoice;

                            if(admissionsFeeChoice < 0 || admissionsFeeChoice > 1)
                            {
                                cout << "Invalid input try again: ";
                            }
                        }while(admissionsFeeChoice < 0 || admissionsFeeChoice > 1 || !cin.good());
                        cout << endl;

                        if(admissionsFeeChoice == 1)//setting admissions fee
                        {
                            cout << "The current cost of admission for one person is $" << admissionsFee << endl;
                            cout << "What will you change the new cost of admission for one person to be?: $";
                            do//error trap
                            {
                                if(!cin.good())
                                {
                                    cin.clear();
                                    cin >> garbage;
                                    cout << "Invalid input try again: ";
                                }

                                cin >> newAdmissionsFee;

                                if(newAdmissionsFee < 0)
                                {
                                    cout << "Invalid input try again: ";
                                }
                            }while(newAdmissionsFee < 0 || !cin.good());


                        admissionsFee = newAdmissionsFee;
                        cout << "You changed the admissions fee to: $" << setprecision(2) << fixed << newAdmissionsFee << endl;
                        cout << endl;
                        }
                        system ( "pause" );
                    }while(admissionsFeeChoice != 0);
                }

                else if(mainMenuChoice == 6)//start the day
                {
                    do// do this while choice is not 0
                    {
                        system(" cls ");
                        cout << endl;
                        cout << "\tSTART THE DAY\n";
                        cout << "_____________________________________________" << endl;
                        cout << "0. Go back to main menu.\n";
                        cout << "1. Open up the museum for the day and get visitors" << endl;
                        cout << "\nWhat would you like to do?: ";

                        do//error trap
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                cin >> garbage;
                                cout << "Invalid input try again: ";
                            }

                            cin >> startDayChoice;

                            if(startDayChoice < 0 || startDayChoice > 1)
                            {
                                cout << "Invalid input try again: ";
                            }
                        }while(startDayChoice < 0 || startDayChoice > 1 || !cin.good());

                        if(startDayChoice == 1 && bills == 0 && daysOpened <= 10)
                        {
                            //limits amount of days
                            daysOpened += 1;

                            //customer max and min based off conditions
                            if(artifacts > 0)
                            {
                                customerMin = 0;
                                customerMax = 10;
                            }

                            for(int z = artifacts; z > 0; z--)
                            {
                                customerMax += 10;
                                customerMin += 10;
                            }

                            //amount of customers
                            numberOfCustomers = rand()%(customerMax-customerMin+1)+customerMin;

                            //advertisement effect
                            advertisementEffect = advertisements * 0.1;
                            numberOfCustomers *= advertisementEffect + 1;

                            //decoration effect
                            decorationEffect = decorations * 0.05;
                            numberOfCustomers *= decorationEffect + 1;

                            if(admissionsFee < 5)//customers based on set prices
                            numberOfCustomers = numberOfCustomers * 6;
                            else if (admissionsFee > 50)
                            numberOfCustomers = 0;
                            else
                            numberOfCustomers = numberOfCustomers;

                            //visitor appeal limitations
                            visitorAppeal = artifacts;
                            if(visitorAppeal <= 10)
                            {
                                numberOfCustomers = 0;
                                cout << "Note: You have a low customer appeal score, try to buy more artifacts if you want to increase it" << endl;
                            }
                            if(visitorAppeal > 10 && visitorAppeal <= 100)
                            numberOfCustomers /= 2;
                            if(visitorAppeal > 100 && visitorAppeal <= 1000)
                            numberOfCustomers = numberOfCustomers;
                            if(visitorAppeal > 1000 && visitorAppeal <= 10000)
                            numberOfCustomers *= 1.5;
                            if(visitorAppeal > 10000)
                            numberOfCustomers *= 2;

                            profit = numberOfCustomers * admissionsFee;
                            money += profit;

                            //friend
                            friendNumberOfCustomersAddition = rand()%(numberMax-numberMin+1)+numberMin;
                            friendNumberOfCustomersSubtraction = rand()%(numberMax-numberMin+1)+numberMin;
                            friendNumberOfCustomers = numberOfCustomers + friendNumberOfCustomersAddition - friendNumberOfCustomersSubtraction;
                            friendBills = numberOfCustomers * billFee;
                            friendProfit = friendNumberOfCustomers*admissionsFee - friendBills;
                            friendMoney += friendProfit;

                            visitorAppeal = visitorAppeal / 2;

                            cout << "You had " << numberOfCustomers << " customers today!" << endl;
                            cout << "You made: $" << setprecision(2) << fixed << profit << " today!" << endl;

                            bills = numberOfCustomers * billFee;//makes bill fee for that day
                            advertisements = advertisements / 2;//depletes advertisements
                        }

                        if(startDayChoice == 1 && bills != 0)//cannot start unless bills are paid
                        {
                            cout << "Go pay your bills before you can start the day again" << endl;
                        }

                            if((startDayChoice == 1 && bills == 0 && daysOpened > 10) && namesProfit > friendMoney)
                            {
                                system(" cls ");
                                cout << endl;
                                cout << "You've reached the end of the game" << endl << endl;
                                cout << " *      *       *****      *        *         *    *    *    *    ***    *" << endl;
                                cout << "  *    *       *     *     *        *         *    *    *    *    * *    *" << endl;
                                cout << "   *  *        *     *     *        *         *    *    *    *    *  *   *" << endl;
                                cout << "    *          *     *     *        *         *    *    *    *    *   *  *" << endl;
                                cout << "    *          *     *     *        *         *    *    *    *    *    * *" << endl;
                                cout << "    *          *     *     *        *         *    *    *    *    *     **" << endl;
                                cout << "    **          *****      **********          *********     *    *      *" << endl;
                                cout << endl;
                                system ( "pause" );
                                mainMenuChoice = 0;
                                break;

                            }

                            if((startDayChoice == 1 && bills == 0 && daysOpened > 10) && namesProfit > friendMoney)
                            {
                                system(" cls ");
                                cout << endl;
                                cout << "You've reached the end of the game" << endl << endl;
                                cout << " *      *         *****      *        *         *            *****     *******    ******** " << endl;
                                cout << "  *    *         *     *     *        *         *           *     *    *             *" << endl;
                                cout << "   *  *          *     *     *        *         *           *     *    *             *" << endl;
                                cout << "    *            *     *     *        *         *           *     *    *******       *" << endl;
                                cout << "    *            *     *     *        *         *           *     *          *       *" << endl;
                                cout << "    *            *     *     *        *         *           *     *          *       *" << endl;
                                cout << "    *             *****      **********         *********    *****     *******       *" << endl;
                                cout << endl;
                                system ( "pause" );
                                mainMenuChoice = 0;
                                break;
                            }
                        system ( "pause" );
                    }while((startDayChoice != 0) && (mainMenuChoice != 0));
                }

                else if(mainMenuChoice == 7)//pay bills
                {
                    do// do this while choice is not 0
                    {
                        system(" cls ");
                        cout << endl;
                        cout << "\tPAY BILLS\n";
                        cout << "_____________________________________________" << endl;
                        cout << "0. Go back to main menu.\n";
                        cout << "1. Pay your bills" << endl;
                        cout << "\nWhat would you like to do? ";

                       do//error trap
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                cin >> garbage;
                                cout << "Invalid input try again: ";
                            }

                            cin >> payBillsChoice;

                            if(payBillsChoice < 0 || payBillsChoice > 1)
                            {
                                cout << "Invalid input try again: ";
                            }
                        }while(payBillsChoice < 0 || payBillsChoice > 1 || !cin.good());

                        cout << endl;

                        if(payBillsChoice == 0)
                            break;

                        do
                        {
                            if(payBillsChoice == 1)//pay bills choice
                            {
                                if(bills == 0)
                                {
                                    cout << "You have no bills to pay right now" << endl;
                                    system ( "pause" );
                                    billsSelectChoice = 0;
                                }

                                if(bills > 0)
                                {
                                    cout << "Please pay $" << bills << " right now in order to operate museum" << endl;
                                    cout << "Type 1 to pay bills and 0 to go back" << endl;

                                   do//error trap
                                    {
                                        if(!cin.good())
                                        {
                                            cin.clear();
                                            cin >> garbage;
                                            cout << "Invalid input try again: ";
                                        }

                                        cin >> billsSelectChoice;

                                        if(billsSelectChoice < 0 || billsSelectChoice > 1)
                                        {
                                            cout << "Invalid input try again: ";
                                        }
                                    }while(billsSelectChoice < 0 || billsSelectChoice > 1 || !cin.good());

                                    if(billsSelectChoice == 1 && money >= bills)
                                    {
                                        money -= bills;
                                        bills = 0;
                                        cout << "You paid your bills" << endl;
                                        system ( "pause" );
                                        billsSelectChoice = 0;
                                    }
                                    if(billsSelectChoice == 1 && money < bills)
                                    {
                                        cout << "You don't have enough money to pay your bills" << endl;
                                        system ( "pause" );
                                        billsSelectChoice = 0;
                                    }
                                }
                            }
                        }while(billsSelectChoice != 0);
                    }while(payBillsChoice != 0);
                }

                else if(mainMenuChoice == 8)//Stats and leaderboard page
                {
                    namesProfit = money - 10000;

                    system(" cls ");
                    cout << endl;
                    cout << "\tLEADERBOARD\n";
                    cout << "_____________________________________________" << endl;
                    cout << name << "'s profit: \t$" << setprecision(2) << fixed << namesProfit << endl;
                    cout << "Friend's profit: \t$" << setprecision(2) << fixed <<  friendMoney << endl << endl;
                    cout << endl;
                    cout << "\tSTATS\n";
                    cout << "_____________________________________________" << endl;
                    cout << "Number of Days Opened: \t" << daysOpened << endl << endl;
                    cout << "Visitor Appeal Score: \t" << visitorAppeal << endl << endl;
                    cout << endl;
                    cout << "Type 0 to go back to main menu.\n";

                    do//error trap
                    {
                        if(!cin.good())
                        {
                            cin.clear();
                            cin >> garbage;
                            cout << "Invalid input try again: ";
                        }

                        cin >> statsChoice;

                        if(statsChoice != 0)
                        {
                            cout << "Invalid input try again: ";
                        }

                    }while(statsChoice != 0 || !cin.good());
                }

                else if(mainMenuChoice == 1)//instructions
                {
                    system(" cls ");
                    cout << endl;
                    cout << "\tINSTRUCTIONS\n";
                    cout << "_____________________________________________" << endl;
                    cout << "-In this game, you will start of with $10,000, and be given 10 days to make as much money as you can." << endl;
                    cout << "-First, you should set up an admissions fee of your choice in the set admission fee section, or it will be $0." << endl;
                    cout << "-Next, you should go to the get artifacts section to either start a search or dig. The amount you do depends" << endl;
                    cout << "on your preference, and if you want more team members it also depends on personal choice. " << endl;
                    cout << "-Then, based on what you decide and how much money you have remaining, you can choose to use your remaining money" << endl;
                    cout << "on upgrades. This could include buying decorations, advertisements, or more team members." << endl;
                    cout << "-Once you have set everything up, you can start the day to begin getting visitors." << endl;
                    cout << "-After making your money for the day, you should go pay your bills." << endl;
                    cout << "-Lastly, you can repeat this process for 10 days. If at the end of the 10 days you made more than your friend," << endl;
                    cout << "and have your bills paid, you will win the game. However, if you made less, you will lose." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "\tFUNCTIONS OF DIFFERENT SECTIONS\n";
                    cout << "_____________________________________________" << endl;
                    cout << "-To access different sections of the game, you can type the numbers with corresponding sections in the main menu choice." << endl;
                    cout << "-If you want to go back to a section, or the main menu, you can type 0 in the choice. Tying 0 in the main menu," << endl;
                    cout << "however, will give you access to restart or end the game." << endl;
                    cout << "-Game instructions: Tells you how the game works." << endl;
                    cout << "-Inventory: Displays the amount of resources you have." << endl;
                    cout << "-Get artifacts: Allows you to get artifacts and expand your team." << endl;
                    cout << "-Buy upgrades: Allows you to buy advertisements and decorations which increase visitor percentage." << endl;
                    cout << "-Set admissions fee: Lets you choose how much you want to charge visitors." << endl;
                    cout << "-Start the day: Opens up your museum for the day to get visitors." << endl;
                    cout << "-Pay bills: This is where you can pay your bills after each day." << endl;
                    cout << "-Stats and leaderboard: Displays different stats of yours, and how much your friend has made so far." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "\tTHINGS TO REMEMBER\n";
                    cout << "_____________________________________________" << endl;
                    cout << "-When setting an admissions fee, make sure the price you set is not too high, or no visitors will come." << endl;
                    cout << "-If you spend all your money before being able to pay your bills, you will not be able to continue in the game." << endl;
                    cout << "This will cause you to lose. To avoid this, pay all your bills before spending your money." << endl;
                    cout << "-You have a visitor appeal score which decreases each time you start the day. This score affects the number of" << endl;
                    cout << "visitors which come. To make sure this score is not too low, you should continue buying artifacts after each day." << endl;
                    cout << "-Don't type 0 in the main menu choice to restart or exit game, unless you want to, because you cannot go back." << endl;
                    cout << endl;
                    cout << "Scroll up\n";
                    cout << endl;
                    cout << "Type 0 to go back to main menu.\n";

                    do//error trap
                    {
                        if(!cin.good())
                        {
                            cin.clear();
                            cin >> garbage;
                            cout << "Invalid input try again: ";
                        }

                        cin >> instructionsChoice;

                        if(instructionsChoice != 0)
                        {
                            cout << "Invalid input try again: ";
                        }

                    }while(instructionsChoice != 0 || !cin.good());
                }

        }while(mainMenuChoice != 0);

        system( "cls" );
        cout << "Thank you " << name << " for playing museum tycoon!" << endl;//exit/restart game screen
        cout << "___________________________________________________" << endl;
        cout << "Do you want to exit or restart the game? " << endl;
        cout << "Type '1' to restart game or '2' to exit" << endl;

        do//error trap
        {
            if(!cin.good() || restart < 1 || restart > 2)
            {
                if(!cin.good())
                {
                    cin.clear();
                    cin >> garbage;
                }
                cout << "Invalid input try again: ";
            }
            cin >> restart;

        }while(restart < 1 || restart > 2 || !cin.good());

    }while(restart == 1);
}







