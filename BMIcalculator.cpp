
// RAFAEL GUTIERREZ

#include <iostream>


using namespace std;

void BMI(){
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

    cout << "Your BMI score is: " << bmi << " which means you are: " << category;

}



int main() {

    char answer;
    cout << "Would you like your BMI calculated? (Answer Y for yes| N for no): ";
    cin >> answer;
    answer = toupper(answer);
    // cout << answer;  // using this line to test "answer" variable.


    if (answer == 'Y') {
        BMI();
    }
    else if (answer == 'N') {
        cout << "Goodbye";
    }
    else {
        cout << "invalid choice, goodbye. ";
    }

    return 0;
}
