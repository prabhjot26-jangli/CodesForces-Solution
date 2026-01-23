#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int no_of_friends, k_bottles, ml_drink, c_lemons, cuts_on_lemon, p_gram_salt, required_ml_drink, required_gram_of_salt;

    cin >> no_of_friends >> k_bottles >> ml_drink >> c_lemons >> cuts_on_lemon >> p_gram_salt >> required_ml_drink >> required_gram_of_salt;

    int Toasts_from_drink = (k_bottles * ml_drink) / required_ml_drink;
    int Toasts_from_slices = c_lemons * cuts_on_lemon;
    int Toasts_from_salt = p_gram_salt / required_gram_of_salt;

    if (k_bottles * ml_drink < required_ml_drink || p_gram_salt < no_of_friends || Toasts_from_drink < no_of_friends)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        int arr[3];
        arr[0] = {Toasts_from_drink};
        arr[1] = {Toasts_from_salt};
        arr[2] = {Toasts_from_slices};
        // cout << arr[2] << " the salt check required in case 2 before sort" << endl;
        sort(arr, arr + 3);
        cout << arr[0] / no_of_friends << endl;
        return 0;
    }

    return 0;
}