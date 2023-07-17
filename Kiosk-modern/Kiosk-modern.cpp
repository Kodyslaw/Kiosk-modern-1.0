#include <iostream>
#include <windows.h>



using namespace std;
//float prices[11];
//float currencies[3];
float multiplier;
float deposit;
float moneyBack;
int admin;
int opcje;
int changeup;
int query;
int decision;
int changeItem;
//int quantity[11];
string names[11];

int main()
{

    unsigned int currency;
    unsigned int product;
  /*  quantity[0] = 0;
    quantity[1] = 5;
    quantity[2] = 5;
    quantity[3] = 5;
    quantity[4] = 5;
    quantity[5] = 5;
    quantity[6] = 5;
    quantity[7] = 666;
    quantity[8] = 5;
    quantity[9] = 5;
    quantity[10] = 5; */
    int quantity[] = { 0,5,5,5,5,5,5,666,5,5,5 };

   /* names[0] = "zly wybor";
    names[1] = "7days";
    names[2] = "Haribo";
    names[3] = "Paluszki";
    names[4] = "Pepsi";
    names[5] = "3bit";
    names[6] = "Lion";
    names[7] = "MONSTER ENERGY";
    names[8] = "Pepsi Max";
    names[9] = "15 Skrzydel";
    names[10] = "2 dolewki";*/

   string names[] = { "Wrong choice","7days","Haribo","Pretzels","Pepsi","3bit","Lion","MONSTER ENERGY","Pepsi Max","15 Chicken Wings","2 Refills", "Coke"};
    /* currencies[0] = 4;
    currencies[1] = 3.9;
    currencies[2] = 1;*/
   float currencies[] = { 4,3.9,1 };

  /*  prices[0] = 0;
    prices[1] = 3;
    prices[2] = 5;
    prices[3] = 2;
    prices[4] = 2;
    prices[5] = 3;
    prices[6] = 3;
    prices[7] = 5;
    prices[8] = 2;
    prices[9] = 35;
    prices[10] = 8; */
   float prices[] = { 0,3,5,2,2,3,3,5,2,35,8,4 };

start:
    system("pause");
    system("cls");
    cout << "Welcome! Here's our menu: " << endl;
    cout << "//////////////////////////////" << endl;
    cout << "///1. "<< names[1] <<" - "<< prices[1] << "zl/////////////" << endl;
    cout << "///2. "<< names[2] <<" - " << prices[2] << "zl////////////" << endl;
    cout << "///3. "<< names[3] <<" - " << prices[3] << "zl//////////" << endl;
    cout << "///4. "<< names[4] <<" - " << prices[4] << "zl/////////////" << endl;
    cout << "///5. "<< names[5] <<" - " << prices[5] << "zl//////////////" << endl;
    cout << "///6. "<< names[6] <<" - " << prices[6] << "zl//////////////" << endl;
    cout << "///7. "<< names[7] <<" - " << prices[7] << "zl////" << endl;
    cout << "///8. "<< names[8] <<" - " << prices[8] << "zl/////////" << endl;
    cout << "///9. "<< names[9] << " - " << prices[9] << "zl/" << endl;
    cout << "///10. "<< names[10] << " - " << prices[10] << "zl////////" << endl;
    cout << "///11. "<< names[11] << " - " << prices[11] << "zl/////////////" << endl;
    cout << "//////////////////////////////" << endl;
    cout << endl;



    cout << "Which currency are you going to use? Current exchange rates below:" << endl;
    cout << "1. EUR (1EUR = " << currencies[0] << "PLN)" << endl;
    cout << "2. USD (1USD = " << currencies[1] << "PLN)" << endl;
    cout << "3. PLN" << endl;
    cout << "Press different number than listed to exit and cancel the order" << endl;
    cout << "Kiosk accepts following coins: 1, 2, 5PLN or 1, 2, 5€ or 25, 50¢" << endl;


    cin >> currency;
    switch (currency)
    {
    case 1:
        cout << "Chosen EUR" << endl;
        multiplier = currencies[0];
        break;
    case 2:
        cout << "Chosen USD" << endl;
        multiplier = currencies[1];
        break;
    case 3:
        cout << "Chosen PLN" << endl;
        multiplier = currencies[2];
        break;

    case 12:
        system("pause");
        system("cls");
        cout << "Welcome to machine re-fill" << endl;
        cout << "Enter a password:" << endl;
        cin >> query;



        if (query != 1234)
        {
            cout << "NO ACCESS" << endl;

        }
        else
        {
        refill:
            cout << "Which product would you like to re-fill" << endl;
            cin >> admin;
            cout << "Re-filling the number: " << admin << "." << endl;
            quantity[admin] = quantity[admin] + 5;
            Sleep(5000);
            cout << "Successfully added 5 of the product number "<< admin << endl;
            cout << "Would you like to re-fill something else?" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;
            cin >> changeup;
            if (changeup == 1)
            {
                goto refill;
            }
            else
            {
                cout << "Other options: " << endl;
                cout << "1.Change the prices" << endl;
                cout << "2.Change currencies exchange rate" << endl;
                cout << "3.Go back" << endl;
                cin >> opcje;
                switch (opcje)
                {


                case 1:
                    cout << "Which item would you like to change?" << endl;
                    cin >> changeItem;
                    switch (changeItem)
                    {


                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                        cout << "Product " << changeItem << endl;
                        cin >> prices[changeItem];
                        goto exchange;
                        break;


                    default:
                    exchange:
                        goto start;
                    }
                    break;
                case 2:
                {
                    cout << "Which exchange rate would you like to change?" << endl;
                    cout << "1.EUR" << endl;
                    cout << "2.USD" << endl;
                    cin >> changeItem;
                    switch (changeItem)
                    {
                    case 1:
                        cout << "Choose new value for EUR" << endl;
                        cin >> currencies[0];
                        break;
                    case 2:
                        cout << "Choose new value for USD" << endl;
                        cin >> currencies[1];
                        break;

                    default:
                        goto start;
                    }
                }
                case 3:
                {
                    goto start;
                }

                }





            }
        }

        break;
    default:
        cout << "INCORRECT CHOICE" << endl;
        goto start;

    }

    if ((currency == 1) || (currency == 2) || (currency == 3))
    {
    monety:
        cout << "Add your coins" << endl;
        cin >> deposit;
        deposit = deposit * multiplier;
        cout << "Your balance is: " << deposit << "PLN" << endl;
        cout << "Choose the product with it's number" << endl;
        cin >> product;
        switch (product)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            if (quantity[product] > 0)
            {
                system("cls");
                cout << product << "." << names[product] << " - " << prices[product] << "zl" << endl;
                moneyBack = deposit - prices[product];
                if (moneyBack >= 0)
                {
                    quantity[product] = quantity[product] - 1;
                    cout << "Delivering your product ..." << endl;
                    Sleep(2000);
                    cout << "Calculating change ..." << endl;
                    Sleep(1000);
                    cout << "Here's your change: " << moneyBack << "zl" << endl;
                    cout << "Would you like to buy something else?" << endl;
                    cout << "1. Yes" << endl;
                    cout << "2. No" << endl;
                    cin >> decision;
                    if (decision == 1)
                    {
                        goto start;
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    cout << "Not enough funds!" << endl;
                    cout << "Giving back the money..." << endl;
                    Sleep(1000);
                    goto monety;
                }
            }
            else
            {
                cout << "No product left!" << endl;
                goto start;
            }
            break;
        case 11:
            if (quantity[4] > 0)
            {
                system("cls");
                cout << "You must be joking, right?" << endl;
                cout << "Administering Pepsi" << endl;
                Sleep(2000);
                cout << "No change for you for betrayal and trying to buy Coke" << endl;
            }
            else
            {
                cout << "Thank God there's none of that left" << endl;
                goto  start;
            }
            break;

        }

    }
    else
    {
        cout << "Goodbye!" << endl;
    }


    return 0;
}
