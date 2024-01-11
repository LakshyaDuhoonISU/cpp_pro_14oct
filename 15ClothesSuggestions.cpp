// program to suggest clothes based on gender,age,weather
#include <iostream>
using namespace std;

int main()
{
    char gender;
    int weather, age;

b:

    cout << "Enter your gender (M for Male, F for Female): ";
    cin >> gender;

    if (tolower(gender) == 'm')
    {
    start:

        cout << "Select weather (Press 1 for Summer, Press 2 for Winter, Press 3 for Monsoon): ";
        cin >> weather;

        if (weather == 1)
        {
        c:

            cout << "Select your age range: " << endl;
            cout << "1. 00-10" << endl;
            cout << "2. 11-20" << endl;
            cout << "3. 21-30" << endl;
            cout << "4. 31-40" << endl;
            cout << "5. 41-50" << endl;
            cout << "6. 51-60" << endl;
            cout << "7. 60+" << endl;

            cin >> age;

            if (age >= 0 && age < 10)
            {
                cout << "Wear: Shorts, T-shirt, Sandals" << endl;
            }
            else if (age >= 10 && age < 20)
            {
                cout << "Wear: Jeans, T-shirt, Sneakers" << endl;
            }
            else if (age >= 20 && age < 30)
            {
                cout << "Wear: Khakis, Polo shirt, Casual shoes" << endl;
            }
            else if (age >= 30 && age < 40)
            {
                cout << "Wear: Chinos, Button-up shirt, Loafers" << endl;
            }
            else if (age >= 40 && age < 50)
            {
                cout << "Wear: Slacks, Dress shirt, Oxfords" << endl;
            }
            else if (age >= 50 && age < 60)
            {
                cout << "Wear: Dress pants, Blazer, Dress shoes" << endl;
            }
            else if (age >= 60)
            {
                cout << "Wear: Comfortable and weather-appropriate clothing" << endl;
            }
            else
            {
                cout << "Invalid choice" << endl;
                goto c;
            }
        }
        else if (weather == 2)
        {
        d:

            cout << "Select your age range: " << endl;
            cout << "1. 00-10" << endl;
            cout << "2. 11-20" << endl;
            cout << "3. 21-30" << endl;
            cout << "4. 31-40" << endl;
            cout << "5. 41-50" << endl;
            cout << "6. 51-60" << endl;
            cout << "7. 60+" << endl;

            cin >> age;

            if (age >= 0 && age < 10)
            {
                cout << "Wear: Winter coat, Sweater, Boots" << endl;
            }
            else if (age >= 10 && age < 20)
            {
                cout << "Wear: Warm jacket, Scarf, Snow boots" << endl;
            }
            else if (age >= 20 && age < 30)
            {
                cout << "Wear: Coat, Sweater, Winter boots" << endl;
            }
            else if (age >= 30 && age < 40)
            {
                cout << "Wear: Parka, Gloves, Insulated boots" << endl;
            }
            else if (age >= 40 && age < 50)
            {
                cout << "Wear: Overcoat, Hat, Fur-lined boots" << endl;
            }
            else if (age >= 50 && age < 60)
            {
                cout << "Wear: Topcoat, Woolen scarf, Dress boots" << endl;
            }
            else if (age >= 60)
            {
                cout << "Wear: Weather-appropriate winter clothing" << endl;
            }
            else
            {
                cout << "Invalid choice" << endl;
                goto d;
            }
        }
        else if (weather == 3)
        {
        e:

            cout << "Select your age range: " << endl;
            cout << "1. 00-10" << endl;
            cout << "2. 11-20" << endl;
            cout << "3. 21-30" << endl;
            cout << "4. 31-40" << endl;
            cout << "5. 41-50" << endl;
            cout << "6. 51-60" << endl;
            cout << "7. 60+" << endl;

            cin >> age;

            if (age >= 0 && age < 10)
            {
                cout << "Wear: Light raincoat, Rubber boots" << endl;
            }
            else if (age >= 10 && age < 20)
            {
                cout << "Wear: Rain jacket, Waterproof boots" << endl;
            }
            else if (age >= 20 && age < 30)
            {
                cout << "Wear: Umbrella, Waterproof sneakers" << endl;
            }
            else if (age >= 30 && age < 40)
            {
                cout << "Wear: Waterproof jacket, Rain boots" << endl;
            }
            else if (age >= 40 && age < 50)
            {
                cout << "Wear: Rain poncho, Waterproof shoes" << endl;
            }
            else if (age >= 50 && age < 60)
            {
                cout << "Wear: Weather-appropriate rain gear" << endl;
            }
            else if (age >= 60)
            {
                cout << "Wear: Comfortable and weather-appropriate clothing" << endl;
            }
            else
            {
                cout << "Invalid choice" << endl;
                goto e;
            }
        }
        else
        {
            cout << "Incorrect choice" << endl;
            goto start;
        }
    }
    else if (tolower(gender) == 'f')
    {
    a:

        cout << "Select weather (Press 1 for Summer, Press 2 for Winter, Press 3 for Monsoon): ";
        cin >> weather;

        if (weather == 1)
        {
        f:

            cout << "Select your age range: " << endl;
            cout << "1. 00-10" << endl;
            cout << "2. 11-20" << endl;
            cout << "3. 21-30" << endl;
            cout << "4. 31-40" << endl;
            cout << "5. 41-50" << endl;
            cout << "6. 51-60" << endl;
            cout << "7. 60+" << endl;

            cin >> age;

            if (age >= 0 && age < 10)
            {
                cout << "Wear: Sundress, Sandals, Sun hat" << endl;
            }
            else if (age >= 10 && age < 20)
            {
                cout << "Wear: Shorts, Tank top, Flip-flops" << endl;
            }
            else if (age >= 20 && age < 30)
            {
                cout << "Wear: Maxi dress, Espadrilles, Wide-brim hat" << endl;
            }
            else if (age >= 30 && age < 40)
            {
                cout << "Wear: Romper, Wedge sandals, Sunglasses" << endl;
            }
            else if (age >= 40 && age < 50)
            {
                cout << "Wear: Linen pants, Blouse, Strappy sandals" << endl;
            }
            else if (age >= 50 && age < 60)
            {
                cout << "Wear: Midi dress, Comfortable sandals, Sun protection" << endl;
            }
            else if (age >= 60)
            {
                cout << "Wear: Comfortable and weather-appropriate clothing" << endl;
            }
            else
            {
                cout << "Invalid choice" << endl;
                goto f;
            }
        }
        else if (weather == 2)
        {
        g:

            cout << "Select your age range: " << endl;
            cout << "1. 00-10" << endl;
            cout << "2. 11-20" << endl;
            cout << "3. 21-30" << endl;
            cout << "4. 31-40" << endl;
            cout << "5. 41-50" << endl;
            cout << "6. 51-60" << endl;
            cout << "7. 60+" << endl;

            cin >> age;

            if (age >= 0 && age < 10)
            {
                cout << "Wear: Winter coat, Sweater, Boots" << endl;
            }
            else if (age >= 10 && age < 20)
            {
                cout << "Wear: Warm jacket, Scarf, Snow boots" << endl;
            }
            else if (age >= 20 && age < 30)
            {
                cout << "Wear: Coat, Sweater, Winter boots" << endl;
            }
            else if (age >= 30 && age < 40)
            {
                cout << "Wear: Parka, Gloves, Insulated boots" << endl;
            }
            else if (age >= 40 && age < 50)
            {
                cout << "Wear: Overcoat, Hat, Fur-lined boots" << endl;
            }
            else if (age >= 50 && age < 60)
            {
                cout << "Wear: Topcoat, Woolen scarf, Dress boots" << endl;
            }
            else if (age >= 60)
            {
                cout << "Wear: Weather-appropriate winter clothing" << endl;
            }
            else
            {
                cout << "Invalid choice" << endl;
                goto g;
            }
        }
        else if (weather == 3)
        {
        h:

            cout << "Select your age range: " << endl;
            cout << "1. 00-10" << endl;
            cout << "2. 11-20" << endl;
            cout << "3. 21-30" << endl;
            cout << "4. 31-40" << endl;
            cout << "5. 41-50" << endl;
            cout << "6. 51-60" << endl;
            cout << "7. 60+" << endl;

            cin >> age;

            if (age >= 0 && age < 10)
            {
                cout << "Wear: Light raincoat, Rubber boots" << endl;
            }
            else if (age >= 10 && age < 20)
            {
                cout << "Wear: Rain jacket, Waterproof boots" << endl;
            }
            else if (age >= 20 and age < 30)
            {
                cout << "Wear: Umbrella, Waterproof sneakers" << endl;
            }
            else if (age >= 30 && age < 40)
            {
                cout << "Wear: Waterproof jacket, Rain boots" << endl;
            }
            else if (age >= 40 and age < 50)
            {
                cout << "Wear: Rain poncho, Waterproof shoes" << endl;
            }
            else if (age >= 50 and age < 60)
            {
                cout << "Wear: Weather-appropriate rain gear" << endl;
            }
            else if (age >= 60)
            {
                cout << "Wear: Comfortable and weather-appropriate clothing" << endl;
            }
            else
            {
                cout << "Invalid choice" << endl;
                goto h;
            }
        }
        else
        {
            cout << "Incorrect choice" << endl;
            goto a;
        }
    }
    else
    {
        cout << "Invalid choice" << endl;
        goto b;
    }

    return 0;
}
