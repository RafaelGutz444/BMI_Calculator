
// RAFAEL GUTIERREZ
#include <iostream>
using namespace std;

int BMI(){
    using namespace std;
    float height;
    float weight;
    float bmi;
    string category;

    // Here we get the height
    cout << "Enter your height in inches: ";
    cin >> height; // inches (in)
    cout << endl;

    // Here we get the weight
    cout << "Enter your weight in pounds: ";
    cin >> weight; // pounds (lbs)
    cout << endl;

    // Calculating BMI
    bmi = ((weight * 703)/ (height * height));
    cout << bmi;
    cout << endl;

    if (bmi >= 30){
        category = "obese";
    }
    else if ((bmi >= 25) && (bmi <= 29)){
        category = "overweight";
    }
    else if ((bmi >= 18.5) && (bmi <= 24.9)){
        category = "normal";
    }
    else {
        category = "underweight";
    }

    cout << "Your BMI score is: " << bmi << " which means you are: " << category << "\n";

    return 0;
}

int main() {

    char answer;
    int i = 0;

    while ((i < 3) ) {
        cout << "Would you like your BMI calculated? (Answer Y for yes| N for no): ";
        cin >> answer;
        answer = toupper(answer);

        if (answer == 'Y') {
            BMI();
            i = 3;
        } else if (answer == 'N') {
            cout << "No calculation requested, goodbye.";
            i = 3;
        } else {
            cout << "Invalid choice. \n";
            i = i + 1;
            if (i == 3) {
                cout<< "Number of invalid choices exceeded - Try again later.";
            }
        }
    }
    return 0;
}
